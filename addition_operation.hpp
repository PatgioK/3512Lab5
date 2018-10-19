//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_ADDITION_OPERATION_HPP
#include "abstract_operation.hpp"
#define INC_3512LAB5_ADDITION_OPERATION_HPP


class addition_operation : public abstract_operation {
public:
    static char const ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE) {

    }
    int perform(int a, int b) {
        return a + b;
    }
    virtual ~addition_operation(){};
};
#endif //INC_3512LAB5_ADDITION_OPERATION_HPP
