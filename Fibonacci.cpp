//
// Created by a1016 on 2023/4/7.
//

#include "Fibonacci.h"

Fibonacci::Fibonacci(long n) {
    n_ = n;
}

void Fibonacci::recursive() {
    if (!is_n_in_range())std::cout << "Number must be > 0\n";
    else std::cout << "Fibonacci(" << n_ << ") = " << recursive_calculator(n_) << "\n";
}

void Fibonacci::iterative() {
    if (!is_n_in_range())std::cout << "Number must be > 0\n";
    else std::cout << "Fibonacci(" << n_ << ") = " << iterative_calculator() << "\n";
}

long Fibonacci::recursive_calculator(long n) {
    if (n == 0)return 0;
    else if (n == 1)return 1;
    else return recursive_calculator(n - 1) + recursive_calculator(n - 2);
}

long Fibonacci::iterative_calculator() const {
    if (n_ == 0)return 0;
    else if (n_ == 1)return 1;
    else {
        long arr[3]{0, 1, 0};
        for (int i = 2; i <= n_; i++) {
            arr[2] = arr[0] + arr[1];
            arr[0] = arr[1];
            arr[1] = arr[2];
        }
        return arr[2];
    }
}

bool Fibonacci::is_n_in_range() const {
    return n_ >= 0;
}

