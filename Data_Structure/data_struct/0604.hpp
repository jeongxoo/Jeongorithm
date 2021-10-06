//
//  0604.hpp
//  data_struct
//
//  Created by 쩡수 on 2021/06/11.
//

#ifndef _604_hpp
#define _604_hpp

#include <stdio.h>
#include <iostream>
#include "0409_CircularQue.hpp"

using namespace std;
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

// quit sort
void QuickSort(int list[], int left, int right);
int Partition(int list[], int left, int right);


// radix sort
#define BUCKETS 10
#define DIGITS 4
void RadixSort(int list[], int n);

// hashing
#define KEY 10
#define TABLE 13

//#define empty(item) (strlen(item.key) == 0)
//#define equal(item1, item2) (strcmp(item1.key, item2.key))



typedef struct {
    char keys[KEY];
    char value;
} elements;

typedef struct ch_item {
    int key;
    int value;
} ch_item;

typedef struct ch_list {
    struct ch_item items;
    struct ch_list * next;
} ch_list;

int ch_hash_func(int key);
void ch_hash_add(ch_item item, ch_list * ht[]);
void ch_hash_search(ch_item item, ch_list * ht[]);




void InitTable(elements ht[]);
int Transform(char * key);
int HashFunc(char * key);

void HashAdd(elements item, elements ht[]);
void HashSearch(elements item, elements ht[]);
void HashPrint(elements ht[]);
bool EqualChar(elements item1, elements item2);
bool EmptyChar(elements item);




#endif /* _604_hpp */
