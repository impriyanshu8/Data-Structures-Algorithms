#include <iostream>
#include <stack>
#include <string>
#include <cctype>  

using namespace std;
// Function to evaluate a postfix expression
int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char ch : postfix) {
        // If the character is an operand (digit), push it onto the stack
        if (isdigit(ch)) {
            s.push(ch - '0');  // Convert char to int (e.g., '5' to 5)
        }
        // If the character is an operator, pop two operands from the stack
        else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();

            switch (ch) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
                default: cout << "Invalid operator encountered: " << ch << endl; return -1;
            }
        }
    }

    // The result will be on the top of the stack
    return s.top();
}

int main() {
    string postfix = "53+62/*35*+";  // Example postfix expression: "5 3 + 6 2 / * 3 5 * +"
    
    int result = evaluatePostfix(postfix);
    cout << "Result of postfix expression '" << postfix << "' is: " << result << endl;
    
    return 0;
}
