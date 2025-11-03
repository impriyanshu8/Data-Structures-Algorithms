#include <iostream>
#include <stack>
#include <string>
using namespace std;


int precedence(char op) {
    if(op == '+' || op == '-')
        return 1;
    if(op == '*' || op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;
}


string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    
    for (char &ch : infix) {
        // If the character is an operand, add it to the output
        if (isalnum(ch)) {
            postfix += ch;
        }
        // If the character is '(', push it to the stack
        else if (ch == '(') {
            s.push(ch);
        }
        // If the character is ')', pop and output from the stack until '(' is found
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();  // Remove '(' from the stack
        }
        // If an operator is encountered
        else {
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    
    // Pop all the operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    
    return postfix;
}

int main() {
    string infix = "A*(B+C)/D-E";  // Example infix expression
    cout << "Infix Expression: " << infix << endl;
    
    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;
    
    return 0;
}
