//
//  PrioritizedQueue.cpp
//  data_struct
//
//  Created by 쩡수 on 2021/05/14.
//

#include "PrioritizedQueue.hpp"


HeapType * create() {
    return new HeapType;
}

void init(HeapType * h) {
    h -> heap_size = 0;
}

void insert_max_heap(HeapType * h, element item) {
    int i;
    // 일단 힙의 맨 끝에 넣기 위해 사이즈를 1 증가시킨 값을 i로 가져옴
    i = ++(h -> heap_size);
    
    // 인덱스가 i인 노드의 부모노드는 i/2의 인덱스를 가지게되므로 둘의 키 값의 크기를 계속 비교해줌
    // 부모와 비교를 계속하며 i가 1이되거나(루트노드) 부모의 키 값이 아이템의 키값보다 큰 경우 반복 종료
    while ((i != 1) && (item.key > h -> heap[i / 2].key)) {
        // 자신의 노드에 부모의 값을 넣어주고
        // i를 갱신
        h -> heap[i] = h -> heap[i / 2];
        i /= 2;
    }
    // 최종적으로 선택된 위치에 아이템 값을 넣어줌
    h -> heap[i] = item;
}

element delete_max_heap(HeapType * h) {
    int parent, child;
    element item, temp;
    
    // 최대 힙에서 삭제는 가장 큰 값 >> 인덱스가 1인 값을 삭제하는것
    // 그렇기 때문에 삭제할 아이템에 힙[1]값을 넣어줌
    item = h -> heap[1];
    // 템프에는 가장 마지막 값을 가져와야함
    // 가장 마지막 값을 가져오고 힙의 사이즈를 1 감소시킴
    temp = h -> heap[(h -> heap_size)--];
    
    // 부모 인덱스와 자식 인덱스(왼쪽)은 부모 * 2의 관계를 가지므로 초기 설정함
    parent = 1;
    child = 2;
    
    while (child <= h -> heap_size) {
        // 자식 인덱스가 힙 사이즈보다 작고(아직 끝에 도달하지 않은것) && 왼쪽 자식보다 오른쪽 자식의 키 값이 더 큰 경우
        // 저장된 자식 인덱스를 1증가 >> 왼쪽보다 오른쪽이 큰 상황에서 왼쪽과 부모노드를 바꾸면 최대 힙이 깨지기때문에 갱신하는 것
        if ((child < h -> heap_size) && (h -> heap[child].key) < h -> heap[child + 1].key) {
            child++;
        }
        
        // 템프의 키 값이 자식노드의 키값보다 큰 경우 반복문 종료 >> 더 이상 교체 안해도되기때문
        if (temp.key >= h -> heap[child].key) {
            break;
        }
        
        // 그렇지 않으면, 부모 노드에 자식 노드를 할당해줌 (현재 부모노드에는 템프가 있는데 그 템프가 자식 노드보다 작기 때문에
        // 둘을 바꿔줘야함
        h -> heap[parent] = h -> heap[child];
        // 인덱스도 교체해줌
        parent = child;
        child *= 2;
    }
    // 반복문이 종료된 시점이 최대힙이 완성된 시점이기때문에
    // 부모 노드에 템프를 확정시켜주고 아이템 리턴
    h -> heap[parent] = temp;
    return item;
}

void sort_by_heap(element items[], int n) {
    HeapType * heap = create();
    for (int i {0}; i < n; i++) {
        insert_max_heap(heap, items[i]);
    }
    for (int i {0}; i < n; i++) {
        element temp = delete_max_heap(heap);
        items[(n - 1) - i] = temp;
    }
    delete heap;
}

bool isFull(HeapType * h);
bool isEmpty(HeapType * h);


