//
//  Stack.cpp
//  data_struct
//
//  Created by 쩡수 on 2021/04/20.
//

#include "Stack.hpp"

void InitStack(StackType * s) {
    s -> top = -1;
    s -> capacity = MAX_STACK_SIZE;
    s -> data = (stack_element *)malloc(s -> capacity);
}

void PrintStack(StackType * s) {
    if (IsEmptyStack(s)) {
        cout << "stack is EMPTY\n";
    } else {
        for (int i {0}; i <= s -> top; i++) {
            cout << s -> data[i] << "|";
        }
        cout << "\n";
    }
}

void PushStack(StackType * s, int item) {
    if (IsFullStack(s)) {
        cout << "UPGRADE CAPACITY\n";
        s -> capacity *= 2;
        s -> data = (stack_element *)realloc(s -> data, s -> capacity);
        s -> data[++(s -> top)] =  item;
    } else {
        s -> data[++(s -> top)] =  item;
    }
}

int PopStack(StackType * s) {
    if (IsEmptyStack(s)) {
        cout << "stack is EMPTY\n";
        return -1;
    } else {
        return s -> data[(s -> top)--];
    }
}

int PeekStack(StackType * s) {
    if (IsEmptyStack(s)) {
        cout << "stack is EMPTY\n";
        return -1;
    } else {
        return s -> data[s -> top];
    }
}

bool IsFullStack(StackType * s) {
    if (s -> top == s -> capacity - 1) {
        return true;
    } else {
        return false;
    }
}

bool IsEmptyStack(StackType * s) {
    if (s -> top == -1) {
        return true;
    } else {
        return false;
    }
}

// () 40, 41   [] 91, 93   {} 123, 125
bool CheckPars(string sen, StackType * s) {
    bool isitRight {true};
    int diff {};
    
    for (int i {0}; i < sen.size(); i++) {
        switch (sen[i]) {
            case 40: case 91: case 123:
                PushStack(s, sen[i]);
                break;
                
            case 41: case 93: case 125:
                if (IsEmptyStack(s)) {
                    isitRight = false;
                    return isitRight;
                } else {
                    diff = abs(sen[i] - PopStack(s));
                    if (diff > 2) {
                        isitRight = false;
                        return isitRight;
                    }
                }
                break;
                
            default:
                break;
        }
    }
    
    if (!IsEmptyStack(s)) {
        isitRight = false;
        return isitRight;
    }
    
    return isitRight;
}
