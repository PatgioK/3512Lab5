//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_ABSTRACT_OPERATION_HPP
#include "operation.hpp"
#define INC_3512LAB5_ABSTRACT_OPERATION_HPP
class abstract_operation : public operation {
private:
    char operation_type;
    /*This function takes two ints, adds their value and returns the sum
*@param - val1 - first integer to add, val2 - second integer to add
*@return - returns int of the sum of val1 and val2
*/
public:
    /* Constructor for abstract_operation class.
*@param - char a - an operand char type
*/
    abstract_operation(char a) {
        operation_type = a;
    }
    /*this function returns the operation type of the class stored
     * in the operation_type variable.
*@return - returns char of operand type.
*/
    char get_code() {
        return operation_type;
    }
    virtual ~abstract_operation();
};

inline abstract_operation::~abstract_operation() {

}
#endif //INC_3512LAB5_ABSTRACT_OPERATION_HPP
