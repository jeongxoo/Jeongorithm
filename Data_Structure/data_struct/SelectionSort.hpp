//
//  SelectionSort.hpp
//  data_struct
//
//  Created by 쩡수 on 2021/05/27.
//

#ifndef SelectionSort_hpp
#define SelectionSort_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

void change_something(int a, int b, int c);
void SelectionSortFunc(int list[], int n);
void InsertSortFunc(int list[], int n);
void BubbleSortFunc(int list[], int n);

#define max_size 5
void MergeFunc(int list[], int left, int mid, int right);
void MergeSortFunc(int list[], int left, int rigth);



#endif /* SelectionSort_hpp */
