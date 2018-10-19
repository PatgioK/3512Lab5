//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_ADDITION_OPERATION_HPP
#include "abstract_operation.hpp"
#define INC_3512LAB5_ADDITION_OPERATION_HPP


class addition_operation : public abstract_operation {
public:
    static char const ADDITION_CODE = '+';
    //default constructor for addition_operation class.
    addition_operation() : abstract_operation(ADDITION_CODE) {

    }
    /*This function takes two ints, adds their value and returns the sum
*@param - val1 - first integer to add, val2 - second integer to add
*@return - returns int of the sum of val1 and val2
*/
    int perform(int a, int b) {
        return a + b;
    }
    virtual ~addition_operation(){};
};
#endif //INC_3512LAB5_ADDITION_OPERATION_HPP
