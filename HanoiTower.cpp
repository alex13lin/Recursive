//
// Created by a1016 on 2023/4/7.
//

#include "HanoiTower.h"

HanoiTower::HanoiTower(int n) {
    n_ = n;
}

void HanoiTower::hanoi_tower() {
    calculator(n_, 'A', 'B', 'C');
}

void HanoiTower::calculator(int n, char a, char b, char c) {
    if (n > 0) {
        calculator(n - 1, a, c, b);
        std::cout << "Move disk " << n << " from " << a << " to " << c << "\n";
        calculator(n - 1, b, a, c);
    }
}


