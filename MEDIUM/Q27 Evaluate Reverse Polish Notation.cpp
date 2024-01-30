//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/?envType=daily-question&envId=2024-01-30

#include <vector>
#include <stack>
#include <string>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // Create a stack to keep track of integers for evaluation
        stack<int> numbers;

        // Iterate over each token in the Reverse Polish Notation expression
        for (const string& token : tokens) {
            // If the token represents a number (can be multiple digits or negative)
            if (token.size() > 1 || isdigit(token[0])) {
                // Convert the string token to an integer and push onto the stack
                numbers.push(stoi(token));
            } else { // If the token is an operator
                // Pop the second operand from the stack
                int operand2 = numbers.top();
                numbers.pop();

                // Pop the first operand from the stack
                int operand1 = numbers.top();
                numbers.pop();

                // Perform the operation based on the type of operator
                switch (token[0]) {
                    case '+': // Addition
                        numbers.push(operand1 + operand2);
                        break;
                    case '-': // Subtraction
                        numbers.push(operand1 - operand2);
                        break;
                    case '*': // Multiplication
                        numbers.push(operand1 * operand2);
                        break;
                    case '/': // Division
                        numbers.push(operand1 / operand2);
                        break;
                }                
            }
        }

        // The final result is the only number remaining on the stack
        return numbers.top();
    }
};
