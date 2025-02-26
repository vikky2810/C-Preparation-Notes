# Advanced Control Flow in C  

This section covers advanced control flow mechanisms in C programming.  

## 📌 Topics Covered  

- Nested Loops & Patterns  
- Goto & Labels (Use Cases)  
- Error Handling in C  

## 🔹 Nested Loops & Patterns  

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

## 🔹 Goto & Labels (Use Cases)  

```c
#include <stdio.h>

int main() {
    int num = 5;
    
    if (num > 0) {
        goto positive;
    }

    printf("This will not execute.\n");

positive:
    printf("Number is positive.\n");
    return 0;
}
```

## 🔹 Error Handling in C  

C doesn't have built-in exception handling, but we use `errno.h` for error handling.  

```c
#include <stdio.h>
#include <errno.h>

int main() {
    FILE *file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
    }
    return 0;
}
```

---
