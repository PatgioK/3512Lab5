//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_SUBTRACTION_OPERATION_HPP
#include "abstract_operation.hpp"
#define INC_3512LAB5_SUBTRACTION_OPERATION_HPP


class subtraction_operation : public abstract_operation{
public:
    static char const SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {

    }
    int perform(int a, int b) {
        return a - b;
    }
    virtual ~subtraction_operation(){};
};


#endif //INC_3512LAB5_SUBTRACTION_OPERATION_HPP
