//
//  Polynomial.hpp
//  data_struct
//
//  Created by 쩡수 on 2021/04/20.
//

#ifndef Polynomial_hpp
#define Polynomial_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void PrintMatrix(vector<vector<int>> * matrix);
vector<vector<int>> * InverseMatrix(vector<vector<int>> * matrix);

#define max_degree 101;
typedef struct polynomial{
    int degree {};
    int data[101];
} polynomial;

typedef struct {
    int coef;
    int expon;
} polyZero;

typedef struct {
    int size;
    polyZero node[10];
} polyZeroType;

void PrintPoly(polynomial p);
polynomial SumPoly(polynomial a, polynomial b);

void PrintPZ(polyZeroType p);
polyZeroType SumPolyZero(polyZeroType a, polyZeroType b);

#endif /* Polynomial_hpp */
