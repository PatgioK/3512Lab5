//
// Created by patgi on 2018-10-18.
//

#ifndef INC_3512LAB5_OPERATION_HPP
#define INC_3512LAB5_OPERATION_HPP


class operation {
public:
    virtual char get_code() = 0;
    virtual int perform(int a, int b) = 0;
    virtual ~operation() = 0;
};

inline operation::~operation() {

}
#endif //INC_3512LAB5_OPERATION_HPP
