# Pointers & Data Structures  

This section explores pointers, arrays, and linked lists in C.  

## 📌 Topics Covered  

- Pointer Arithmetic  
- Arrays & Pointers Relationship  
- 2D Arrays & Pointers  
- Linked Lists  

## 🔹 Pointer Arithmetic  

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("%d\n", *(ptr + 1));  // Output: 20
    return 0;
}
```

## 🔹 Linked List Example  

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void printList(Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = malloc(sizeof(Node));
    head->data = 10;
    head->next = malloc(sizeof(Node));
    head->next->data = 20;
    head->next->next = NULL;

    printList(head);
    return 0;
}
```
---
