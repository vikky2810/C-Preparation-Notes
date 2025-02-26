# Functions & Memory Management in C  

This section explains function pointers, memory allocation, and static/extern variables.  

## 📌 Topics Covered  

- Function Pointers  
- Static & Extern Variables  
- Dynamic Memory Allocation  

## 🔹 Function Pointers  

```c
#include <stdio.h>

void hello() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)() = hello;
    funcPtr();
    return 0;
}
```

## 🔹 Static & Extern Variables  

```c
#include <stdio.h>

void func() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main() {
    func();
    func();
    return 0;
}
```

## 🔹 Dynamic Memory Allocation  

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    
    if (!ptr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}
```
---
