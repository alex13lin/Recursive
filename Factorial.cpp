//
// Created by a1016 on 2023/4/7.
//

#include "Factorial.h"

Factorial::Factorial(int n) {
    n_ = n;
}

Factorial::~Factorial() = default;

void Factorial::recursive() {
    if (is_n_in_range())std::cout << n_ << "! = " << recursive_calculator(n_) << "\n";
    else std::cout << "Input out of range!!!\n";
}

int Factorial::recursive_calculator(int n) const {
    if (n == 1 || n == 0)return 1;
    else return n * recursive_calculator(n - 1);
}

void Factorial::iterative() {
    if (is_n_in_range())std::cout << n_ << "! = " << iterative_calculator() << "\n";
    else std::cout << "Input out of range!!!\n";
}

long Factorial::iterative_calculator() const {
    long sum = 1;
    if (n_ > 1) for (int i = 2; i <= n_; i++)sum *= i;
    return sum;
}

bool Factorial::is_n_in_range() const {
    return n_ >= 0 && n_ <= 12;
}
