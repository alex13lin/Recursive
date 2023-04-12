//
// Created by a1016 on 2023/4/7.
//

#ifndef RECURSIVE_FIBONACCI_H
#define RECURSIVE_FIBONACCI_H

#include <iostream>
#include "Question.h"

class Fibonacci :public Question{
public:
    explicit Fibonacci(long n);

    void recursive() override;

    void iterative() override;

private:
    long n_;

    long recursive_calculator(long);

    long iterative_calculator() const;

    bool is_n_in_range() const;

};


#endif //RECURSIVE_FIBONACCI_H
