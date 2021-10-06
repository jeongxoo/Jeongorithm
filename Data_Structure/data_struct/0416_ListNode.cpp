#include "0416_ListNode.hpp"


ListNode* InsertFirst(ListNode* head, int item) {
    ListNode * next;
    next = new ListNode;
    next -> data = item;

    if (head == NULL) {
        head = next;
        next -> link = head;
    } else {
        next -> link = head -> link;
        head -> link = next;
    }
    
    return head;
}

ListNode* InsertLast(ListNode* head, int item) {
    ListNode * next;
    next = new ListNode;
    next -> data = item;
    
    if (head == NULL) {
        head = next;
        next -> link = head;
    } else {
        next -> link = head -> link;
        head -> link = next;
        head = next;
    }
    
    return head;
}

ListNode* DeleteFirst(ListNode* head) {
    ListNode * removed;
    
    if (head == NULL) {
        return NULL;
    } else {
        removed = head;
        head = removed -> link;
        delete removed;
        return head;
    }
}

ListNode* DeleteLast(ListNode* head) {
    ListNode * removed;
    
    if (head == NULL) {
        return NULL;
    } else {
        removed = head;
        head = removed -> link;
        delete removed;
        return head;
    }
}

bool traverse(ListNode * head, int check) {
    ListNode * temp = head;
    
    if (head == NULL) {
        return false;
    } else {
        do {
            if (temp -> data == check) {
                return true;
            }
            temp = temp -> link;
        } while (temp != head);
    }
    return false;
}


void PrintList(ListNode* head) {
    ListNode * temp;
    temp = head -> link;
    
    if (head == NULL) {
        return;
    }
    
    do {
        cout << temp -> data << " | ";
        temp = temp -> link;
    } while (temp != head);
    cout << temp -> data << "\n";
//    cout << "\n";
}


ListNode* Insert(ListNode* head, int item) {
    ListNode * next = new ListNode;
    ListNode * temp;
    next -> data = item;
    
    if (head == NULL) {
        head = next;
        next -> link = head;
    } else {
        temp = head;
        
    }
    
    return head;
}

ListNode* Delete(ListNode* head, ListNode* pre, int item) {
    ListNode * removed;
    removed = pre -> link;
    pre -> link = removed -> link;
    delete removed;
    return head;
}
