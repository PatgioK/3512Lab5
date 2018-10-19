//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_MULTIPLICATION_OPERATION_HPP
#include "abstract_operation.hpp"
#define INC_3512LAB5_MULTIPLICATION_OPERATION_HPP


class multiplication_operation : public abstract_operation{
public:
    static char const MULTIPLICATION_CODE = '*';

    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {

    }
    int perform(int a, int b) {
        return a * b;
    }
    virtual ~multiplication_operation(){};
};



#endif //INC_3512LAB5_MULTIPLICATION_OPERATION_HPP
