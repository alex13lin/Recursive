#include <iostream>
#include "Factorial.h"
#include "Fibonacci.h"
#include "HanoiTower.h"
#include "Queen.h"
#include "Question.h"

void factorial() {
    int n;
    std::cout << "Enter a number(0<=n<=12) to count n!:...";
    std::cin >> n;
    auto *factorial = new Factorial(n);
    factorial->recursive();
    factorial->iterative();
    delete factorial;
}

void fibonacci() {
    long fib_n;
    std::cout << "Enter a number(n>=0):...";
    std::cin >> fib_n;
    auto *fibonacci = new Fibonacci(fib_n);
    fibonacci->recursive();
    fibonacci->iterative();
    delete fibonacci;

}

void hanoi_tower() {
    int h_n;
    std::cout << "How many disk in A? :...";
    std::cin >> h_n;
    auto *hanoi_tower = new HanoiTower(h_n);
    hanoi_tower->hanoi_tower();
    delete hanoi_tower;
}

void queen() {

}

int main() {
    int c;
    std::cout << "1.Factorial\n"
              << "2.Fibonacci\n"
              << "3.Hanoi Tower\n"
              << "4.Four Queen\n"
              << "********************\n"
              << "Enter the choice:...";
    std::cin >> c;
    switch (c) {
        case 1:
            factorial();
            break;
        case 2:
            fibonacci();
            break;
        case 3:
            hanoi_tower();
            break;
        case 4:
            queen();
            break;
        default:
            std::cout << "INVALID OPTION!!!\n";
    }
    return 0;
}
