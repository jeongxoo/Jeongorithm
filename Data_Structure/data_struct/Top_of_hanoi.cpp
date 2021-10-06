//
//  Top_of_hanoi.cpp
//  data_struct
//
//  Created by 쩡수 on 2021/04/20.
//

#include "Top_of_hanoi.hpp"

void TopOfHanoi(int n, char from, char by, char to) {
    if (n == 1) {
        cout << "select plate 1 move from " << from << " to " << to << "\n";
    } else {
        TopOfHanoi(n - 1, from, to, by);
        cout << "select plate " << n << " move from " << from << " to " << to << "\n";
        TopOfHanoi(n - 1, by, from, to);
    }
}

int Factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

int Fibonaci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return Fibonaci(n - 1) + Fibonaci(n - 2);
    }
}
