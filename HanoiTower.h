//
// Created by a1016 on 2023/4/7.
//

#ifndef RECURSIVE_HANOITOWER_H
#define RECURSIVE_HANOITOWER_H

#include <iostream>

class HanoiTower {
public:
    explicit HanoiTower(int);

    void hanoi_tower();

private:
    int n_;

    void calculator(int, char, char, char);
};


#endif //RECURSIVE_HANOITOWER_H
