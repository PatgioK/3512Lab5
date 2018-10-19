//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_RPN_CALCULATOR_HPP
#include <stack>
#include "operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include "abstract_operation.hpp"
#include <istream>
#include <sstream>
#include <stdlib.h>

#define INC_3512LAB5_RPN_CALCULATOR_HPP

using namespace std;

class rpn_calculator {
private:
    int result;
    std::stack<int> stack1;

/*This function takes a char and returns a new operation type.
*@param - char operation passed in determines which type of operator to return.
*@return - dynamically allocates memory and returns a new operation type.
*/
    operation *operation_type(char operation) {
        switch (operation) {
            case addition_operation::ADDITION_CODE:
                return new addition_operation;
            case subtraction_operation::SUBTRACTION_CODE :
                return new subtraction_operation;
            case multiplication_operation::MULTIPLICATION_CODE :
                return new multiplication_operation;
            case division_operation::DIVISION_CODE :
                return new division_operation;
        }
    }
public:
    /*This function takes a operation pointer, takes two ints off the
     * stack and calls the perform function to operate on the two ints.
*@param - operation *o - pointer to a type of operation that operates on
     * two ints from the stack.
*/
    void perform(operation *o) {
        int a = stack1.top();
        stack1.pop();
        int b = stack1.top();
        stack1.pop();
        result = o->perform(b, a);
        stack1.push(result);
    };
    /*This function takes a string from a stream and checks whether it is an int
     * or operand. If its an int it stores it and if its an operand it stores it
     * in the operand array.
*@param - string a - is a math formula written in the RPN format.
*@return - returns the result int
*/
    int process_form(string a) {
        istringstream iss(a);
        string operand;
        while (iss >> operand) {
            int num;
            istringstream iss2(operand);
            if (iss2 >> num) {
                stack1.push(num);
            } else {
                operation* op = operation_type(operand[0]);
                perform(op);
                delete op;
            }
        }
        return result;
    }
};

#endif //INC_3512LAB5_RPN_CALCULATOR_HPP
