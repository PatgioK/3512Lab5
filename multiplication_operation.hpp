//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_MULTIPLICATION_OPERATION_HPP
#include "abstract_operation.hpp"
#define INC_3512LAB5_MULTIPLICATION_OPERATION_HPP


class multiplication_operation : public abstract_operation{
public:
    static char const MULTIPLICATION_CODE = '*';
    //default constructor for multiplication_operation.
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {

    }
    /*This function takes two ints, multiplies their value and returns the sum
*@param - val1 - first integer to multiply, val2 - second integer to multiply
*@return - returns int of the product of val1 and val2
*/
    int perform(int a, int b) {
        return a * b;
    }
    virtual ~multiplication_operation(){};
};



#endif //INC_3512LAB5_MULTIPLICATION_OPERATION_HPP
