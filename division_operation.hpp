//
// Created by patgi on 2018-10-19.
//

#ifndef INC_3512LAB5_DIVISION_OPERATION_HPP
#include "abstract_operation.hpp"
#define INC_3512LAB5_DIVISION_OPERATION_HPP


class division_operation : public abstract_operation{
public:
    static char const DIVISION_CODE = '/';
    division_operation() : abstract_operation(DIVISION_CODE) {

    }
    int perform(int a, int b) {
        return a / b;
    }

    virtual ~division_operation(){};
};


#endif //INC_3512LAB5_DIVISION_OPERATION_HPP
