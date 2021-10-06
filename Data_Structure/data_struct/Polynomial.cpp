//
//  Polynomial.cpp
//  data_struct
//
//  Created by 쩡수 on 2021/04/20.
//

#include "Polynomial.hpp"

void PrintMatrix(vector<vector<int>> * matrix) {
    size_t rows = matrix -> size();
    size_t cols = matrix -> at(0).size();
    
    for (int i {0}; i < rows; i++) {
        for (int j {0}; j < cols; j++) {
            cout << matrix -> at(i)[j] << "|";
        }
        cout << "\n";
    }
}

vector<vector<int>> * InverseMatrix(vector<vector<int>> * matrix) {
    vector<vector<int>> * temp = new vector<vector<int>>;
    size_t rows = matrix -> size();
    size_t cols = matrix -> at(0).size();
    temp -> resize(cols);
    for (int i {0}; i < rows; i++) {
        for (int j {0}; j < cols; j++) {
            temp -> at(j).push_back(matrix -> at(i)[j]);
        }
    }
    return temp;
}

void PrintPoly(polynomial p) {
    for (int i {p.degree}; i >= 0; i--) {
        if (i != 0) {
            cout << p.data[p.degree - i] << "X^" << i << " + ";
        } else {
            cout << p.data[p.degree - i] << "\n";
        }
    }
}

polynomial SumPoly(polynomial a, polynomial b) {
    polynomial c;
    int diff {a.degree - b.degree};
    bool isALarge {};

    if (diff >= 0) {
        c.degree = a.degree;
        isALarge = true;
    } else {
        c.degree = b.degree;
        diff *= -1;
        isALarge = false;
    }
    
    if (isALarge) {
        for (int i {0}; i <= c.degree; i++) {
            if (i < diff) {
                c.data[i] = a.data[i];
            } else {
                c.data[i] = a.data[i] + b.data[i - diff];
            }
        }
    } else {
        for (int i {0}; i <= c.degree; i++) {
            if (i < diff) {
                c.data[i] = b.data[i];
            } else {
                c.data[i] = a.data[i - diff] + b.data[i];
            }
        }
    }
    
    return c;
}

void PrintPZ(polyZeroType p) {
    for (int i {0}; i < p.size; i++) {
        if (p.node[i].expon != 0 && i != p.size - 1) {
            cout << p.node[i].coef << "X^" << p.node[i].expon << " + ";
        } else if (p.node[i].expon != 0 && i == p.size - 1) {
            cout << p.node[i].coef << "X^" << p.node[i].expon << "\n";
        }
        else if (p.node[i].expon == 0) {
            cout << p.node[i].coef << "\n";
        }
    }
}



polyZeroType SumPolyZero(polyZeroType a, polyZeroType b) {
    polyZeroType c;
    int j {};
    int asize {a.size}, bsize {b.size};
    
    while (asize != 0 && bsize != 0) {
        if (a.node[a.size - asize].expon == b.node[b.size - bsize].expon) {
            c.node[j].coef = a.node[a.size - asize].coef + b.node[b.size - bsize].coef;
            c.node[j].expon = a.node[a.size - asize].expon;
            asize--;
            bsize--;
            j++;
        } else if (a.node[a.size - asize].expon > b.node[b.size - bsize].expon) {
            c.node[j].coef = a.node[a.size - asize].coef;
            c.node[j].expon = a.node[a.size - asize].expon;
            asize--;
            j++;
        } else {
            c.node[j].coef = b.node[b.size - bsize].coef;
            c.node[j].expon = b.node[b.size - bsize].expon;
            bsize--;
            j++;
        }
    }
    
    if (asize != 0) {
        for (int i {a.size - asize}; i < a.size ; i++) {
            c.node[j].coef = a.node[i].coef;
            c.node[j].expon = a.node[i].expon;
            j++;
        }
    } else if (bsize != 0) {
        for (int i {b.size - bsize}; i < b.size ; i++) {
            c.node[j].coef = b.node[i].coef;
            c.node[j].expon = b.node[i].expon;
            j++;
        }
    }
    
    c.size = j;
    return c;
}
