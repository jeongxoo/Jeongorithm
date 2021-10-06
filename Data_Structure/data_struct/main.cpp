#include <ostream>
//#include "Top_of_hanoi.hpp"
//#include "Stack.hpp"
//#include "Polynomial.hpp"
//#include "0416_ListPoly.hpp"
//#include "0409_LinearQue.hpp"
//#include "0409_CircularQue.hpp"
//#include "0409_Deq.hpp"
//#include "0416_LinkedList.hpp"
//#include "0416_ListNode.hpp"
//#include "CircularLinkedList.hpp"
//#include "DoubleLinkedList.hpp"
//#include "Array_Tree.hpp"
//#include "PrioritizedQueue.hpp"
//#include "SelectionSort.hpp"
//#include "0604.hpp"
#include "programmers_week4.hpp"
//#include <random>



using namespace std;
//elements hash_table[TABLE];


int main(int argc, const char * argv[]) {
    
//    random_device rd;
//    std::mt19937 gen(rd());
//    uniform_int_distribution<int> dis(0, 99);
//
//
//    int n = 10;
//    int list[n];
//
//    for (int i {0}; i < n; i++) {
//        list[i] = dis(gen);
//        cout << list[i] << " ";
//    }
//    cout << "\n";
//    RadixSort(list, n);
//
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";

//    char * s[6] = {(char*)"do", (char*)"for", (char*)"if", (char*)"case", (char*)"else", (char*)"function"};
//    elements e;
//
//
//    for (int i {0}; i < 6; i++) {
//        strcpy(e.keys, s[i]);
//        HashAdd(e, hash_table);
//        HashPrint(hash_table);
//    }
//
//    for (int i {0}; i < 6; i++) {
//        strcpy(e.keys, s[i]);
//        HashAdd(e, hash_table);
//        HashSearch(e, hash_table);
//    }
    
    
//    int n = 10;
//    int list[n];
//    for (int i {0}; i < n; i++) {
//        list[i] = dis(gen);
//        cout << list[i] << " ";
//    }
//    cout << "\n";
//
//    QuickSort(list, 0, n - 1);
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";
    
    
  
//    int n = 5;
//    int list[n];
//    for (int i {0}; i < n; i++) {
//        list[i] = dis(gen);
//        cout << list[i] << " ";
//    }
//    cout << "\n";
//
//    SelectionSortFunc(list, n);
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";
    
    
    
    
//    InsertSortFunc(list, n);
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";
    
//    BubbleSortFunc(list, n);
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";
//    int n = max_size;
//    int list[n];
//    for(int i {0} ; i < n; i++) {
//        list[i] = rand() % 100;
//        for(int j {0} ; j < i ; j++) {
//            if(list[j] == list[i])
//                i--;
//        }
//    }
//
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";
//
//
//    MergeSortFunc(list, 0, max_size - 1);
//    for (int i {0}; i < n; i++) {
//        cout << list[i] << " ";
//    }
//    cout << "\n";
    
//
//    element e1 {10}, e2 {5}, e3 {30};
//    element e4, e5, e6;
//    HeapType * heap;
//
//    heap = create();
//    init(heap);
//
//    insert_max_heap(heap, e1);
//    insert_max_heap(heap, e2);
//    insert_max_heap(heap, e3);
//
//    e4 = delete_max_heap(heap);
//    cout << "< " << e4.key << " > ";
//    e5 = delete_max_heap(heap);
//    cout << "< " << e5.key << " > ";
//    e6 = delete_max_heap(heap);
//    cout << "< " << e6.key << " >\n";
    
    
    
//    TreeNode * root = NULL;
//
//    root = InsertTree(root, 27);
//    root = InsertTree(root, 18);
//    root = InsertTree(root, 9);
//    root = InsertTree(root, 10);
//    root = InsertTree(root, 19);
//    root = InsertTree(root, 32);
//    root = InsertTree(root, 44);
//
//    cout << "전위 순회\n";
//    PreOrder(root);
//    cout << "\n";
//
//    cout << "중위 순회\n";
//    InOrder(root);
//    cout << "\n";
//
//    cout << "후위 순회\n";
//    PostOrder(root);
//    cout << "\n";
//
//    if (SearchTree(root, 30) != NULL) {
//        cout << "find\n";
//    } else {
//        cout << "Not find\n";
//    }
//
//    InsertTree(root, 28);
//    cout << "중위 순회\n";
//    InOrder(root);
//    cout << "\n";
//
//    DeleteTree(root, 18);
//    cout << "중위 순회\n";
//    InOrder(root);
//    cout << "\n";
//
    
    
    
    
    
    
    
    
    
    // a = 10, b = 20, c = 30, d = 40
    // a + b, a - (b * c), (a < b) or (c < d)
    
//    TreeNode * rootnode = new TreeNode;
//    TreeNode * node2 = new TreeNode;
//    TreeNode * node3 = new TreeNode;
//
//    rootnode -> data = '+';
//    rootnode -> left = node2;
//    rootnode -> right = node3;
//
//    node2 -> data = 10;
//    node2 -> left = NULL;
//    node2 -> right = NULL;
//
//    node3 -> data = 20;
//    node3 -> left = NULL;
//    node3 -> right = NULL;
//
//    int ans = CalculateTree(rootnode);
//    cout << "계산 결과 :: " << ans << "\n";
//
//    delete rootnode;
//    delete node2;
//    delete node3;
//
//    TreeNode * rootnode = new TreeNode;
//    TreeNode * node2 = new TreeNode;
//    TreeNode * node3 = new TreeNode;
//    TreeNode * node4 = new TreeNode;
//    TreeNode * node5 = new TreeNode;
//
//    rootnode -> data = '-';
//    rootnode -> left = node2;
//    rootnode -> right = node3;
//
//    node2 -> data = 10;
//    node2 -> left = NULL;
//    node2 -> right = NULL;
//
//    node3 -> data = '*';
//    node3 -> left = node4;
//    node3 -> right = node5;
//
//    node4 -> data = 20;
//    node4 -> left = NULL;
//    node4 -> right = NULL;
//
//    node5 -> data = 30;
//    node5 -> left = NULL;
//    node5 -> right = NULL;
//
//    int ans = CalculateTree(rootnode);
//    cout << "계산 결과 :: " << ans << "\n";
//
//    delete rootnode;
//    delete node2;
//    delete node3;
//    delete node4;
//    delete node5;

    
//    TreeNode * rootnode = new TreeNode;
//    TreeNode * node2 = new TreeNode;
//    TreeNode * node3 = new TreeNode;
//    TreeNode * node4 = new TreeNode;
//    TreeNode * node5 = new TreeNode;
//    TreeNode * node6 = new TreeNode;
//    TreeNode * node7 = new TreeNode;
//
//    rootnode -> data = '|';
//    rootnode -> left = node2;
//    rootnode -> right = node3;
//
//    node2 -> data = '<';
//    node2 -> left = node4;
//    node2 -> right = node5;
//
//    node3 -> data = '<';
//    node3 -> left = node6;
//    node3 -> right = node7;
//
//    node4 -> data = 10;
//    node4 -> left = NULL;
//    node4 -> right = NULL;
//
//    node5 -> data = 20;
//    node5 -> left = NULL;
//    node5 -> right = NULL;
//
//    node6 -> data = 30;
//    node6 -> left = NULL;
//    node6 -> right = NULL;
//    
//    node7 -> data = 40;
//    node7 -> left = NULL;
//    node7 -> right = NULL;
//    
//    int ans = CalculateTree(rootnode);
//    cout << "계산 결과 :: " << ans << "\n";
//
//
//    delete rootnode;
//    delete node2;
//    delete node3;
//    delete node4;
//    delete node5;
//    delete node6;
//    delete node7;
    
    
//    /*
//                        10
//                20              30
//            40              60      70
//     */
//
    
//    TreeNode * node1 = new TreeNode;
//    TreeNode * node2 = new TreeNode;
//    TreeNode * node3 = new TreeNode;
//    TreeNode * node4 = new TreeNode;
//    TreeNode * node5 = new TreeNode;
//    TreeNode * node6 = new TreeNode;
//    TreeNode * rootnode = node6;
//    node1 -> data = 1;
//    node1 -> left = NULL;
//    node1 -> right = NULL;
//
//    node2 -> data = 4;
//    node2 -> left = node1;
//    node2 -> right = NULL;
//
//    node3 -> data = 16;
//    node3 -> left = NULL;
//    node3 -> right = NULL;
//
//    node4 -> data = 25;
//    node4 -> left = NULL;
//    node4 -> right = NULL;
//
//    node5 -> data = 20;
//    node5 -> left = node3;
//    node5 -> right = node4;
//
//    node6 -> data = 15;
//    node6 -> left = node2;
//    node6 -> right = node5;
    
    
    
//    rootnode -> data = 10;
//    rootnode -> left = node2;
//    rootnode -> right = node3;
//
//    node2 -> data = 20;
//    node2 -> left = node4;
//    node2 -> right = NULL;
//
//    node3 -> data = 30;
//    node3 -> left = node5;
//    node3 -> right = node6;
//
//    node4 -> data = 40;
//    node4 -> left = NULL;
//    node4 -> right = NULL;
//
//    node5 -> data = 60;
//    node5 -> left = NULL;
//    node5 -> right = NULL;
//
//    node6 -> data = 70;
//    node6 -> left = NULL;
//    node6 -> right = NULL;


//    cout << "PreOrder :: \n";
//    PreOrder(rootnode);
//    cout << "\nInOrder :: \n";
//    InOrder(rootnode);
//    cout << "\n";
//    inorder_stack_tree(rootnode);
////    cout << "\nPostOrder :: \n";
////    PostOrder(rootnode);
//
//    delete rootnode;
//    delete node1;
//    delete node2;
//    delete node3;
//    delete node4;
//    delete node5;
//    delete node6;
//
    
    
//    CircularListNode * head = NULL;
//    head = InsertLast(head, 20);
//    head = InsertLast(head, 30);
//    head = InsertLast(head, 40);
//    head = InsertFirst(head, 10);
//    head = InsertLast(head, 10);
//
//    PrintList(head);
//
//    head = DeleteFirst(head);
//    PrintList(head);
//    head = DeleteFirst(head);
//    PrintList(head);
//
//    cout << traverse(head, 1) << "\n";
//    delete head;
    
//    DoubleListNode * head = new DoubleListNode;
//    InitDList(head);
//    for (int i {0}; i < 5; i++) {
//        InsertDoubleList(head, i);
//        PrintDList(head);
//    }
//
//    for (int i {0}; i < 5; i++) {
//        DeleteDoubleListe(head, head -> right_link);
//        PrintDList(head);
//    }
//
//    delete head;
    
//    element e1;
//    element e2;
//    element e3;
//    element e4, e5, e6;
//    e1.key = 10;
//    e2.key = 5;
//    e3.key = 30;
//    HeapType * heap;
//    heap = create();
//    init(heap);
//    insert_max_heap(heap, e1);
//    insert_max_heap(heap, e2);
//    insert_max_heap(heap, e3);
//
//    e4 = delete_max_heap(heap);
//    cout << e4.key << "\n";
//    e5 = delete_max_heap(heap);
//    cout << e5.key << "\n";
//    e6 = delete_max_heap(heap);
//    cout << e6.key << "\n\n";
//
//    delete heap;
//    const int n = 10;
//    element items[n] = {23,56,11,9,56,99,27,34,3,13};
//    sort_by_heap(items, n);
//    for (element i: items) {
//        cout << i.key << "\n";
////    }
//
//    const int n = 5;
//    int data[n] = {2,5,6,1,14};
//    ch_item e;
//
//    for (int i {0}; i < n; i++) {
//        e.key = data[i];
////        ch_hash_add(e, &hash_table);
//
//    }
    
    return 0;
}






















