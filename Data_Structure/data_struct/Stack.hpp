//
//  Stack.hpp
//  data_struct
//
//  Created by 쩡수 on 2021/04/20.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>

#define MAX_STACK_SIZE 2
using namespace std;

typedef int stack_element;
typedef struct StackType{
    stack_element * data;
    int capacity {};
    int top {};
} StackType;

void InitStack(StackType * s);
void PrintStack(StackType * s);
void PushStack(StackType * s, int item);

bool IsFullStack(StackType * s);
bool IsEmptyStack(StackType * s);

int PopStack(StackType * s);
int PeekStack(StackType * s);

bool CheckPars(string sen, StackType * s);


#endif /* Stack_hpp */
