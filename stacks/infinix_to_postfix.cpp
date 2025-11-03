#include<iostream>
#include<stack>
using namespace std;

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string s) {
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        // If the character is an operand, add it to the result
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            result += c;
        }
        // If the character is '(', push it onto the stack
        else if (c == '(') {
            st.push(c);
        }
        // If the character is ')', pop from stack until '(' is encountered
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            // if encountered with (
            if (!st.empty()) 
            st.pop();  // Remove '('
        }
        // If an operator is encountered
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all remaining operators from the stack
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    cout << "Infix to Postfix: " << infixToPostfix("a+b+c+d*g") << endl;
    return 0;
}
