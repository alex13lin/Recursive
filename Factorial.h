//
// Created by a1016 on 2023/4/7.
//

#ifndef RECURSIVE_FACTORIAL_H
#define RECURSIVE_FACTORIAL_H

#include <iostream>
#include "Question.h"

class Factorial: public Question{
public:
    explicit Factorial(int);

    ~Factorial();

    void recursive() override;

    void iterative() override;

private:
    int n_;

    int recursive_calculator(int) const;

    long iterative_calculator() const;

    bool is_n_in_range() const;
};


#endif //RECURSIVE_FACTORIAL_H
