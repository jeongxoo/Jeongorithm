#include <stdio.h>
#include <iostream>

using namespace std;

typedef int element_LN;
typedef struct ListNode {
    element_LN data {};
    struct ListNode * link;
} ListNode;

ListNode* InsertFirst(ListNode* head, int item);
ListNode* InsertLast(ListNode* head, int item);
ListNode* DeleteFirst(ListNode* head);
ListNode* DeleteLast(ListNode* head);

bool traverse(ListNode * head, int check);

ListNode* Insert(ListNode* head, int item);
ListNode* Delete(ListNode* head, ListNode* pre, int item);

void PrintList(ListNode* head);
