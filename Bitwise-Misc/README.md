# Bitwise & Miscellaneous Concepts  

This section covers bitwise operations, enums, and memory layout in C.  

## 📌 Topics Covered  

- Bitwise Operators  
- Enums & Structs  
- Memory Layout  

---

## 🔹 Bitwise Operators in C  

Bitwise operators manipulate individual bits in integers.  

| Operator | Symbol | Description |
|----------|--------|-------------|
| AND      | `&`    | Sets bits to `1` only if both operands have `1` |
| OR       | `|`    | Sets bits to `1` if either operand has `1` |
| XOR      | `^`    | Sets bits to `1` if operands differ |
| NOT      | `~`    | Inverts all bits |
| Left Shift  | `<<` | Shifts bits left, multiplying by `2^n` |
| Right Shift | `>>` | Shifts bits right, dividing by `2^n` |

### **Bitwise AND Example**  

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    printf("Bitwise AND: %d\n", a & b);  // Output: 1
    return 0;
}
```

### **Bitwise OR Example**  

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    printf("Bitwise OR: %d\n", a | b);  // Output: 7
    return 0;
}
```

### **Bitwise XOR Example**  

```c
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    printf("Bitwise XOR: %d\n", a ^ b);  // Output: 6
    return 0;
}
```

### **Bitwise Left Shift Example**  

```c
#include <stdio.h>

int main() {
    int a = 5;
    printf("Left Shift: %d\n", a << 1);  // Output: 10
    return 0;
}
```

### **Bitwise Right Shift Example**  

```c
#include <stdio.h>

int main() {
    int a = 5;
    printf("Right Shift: %d\n", a >> 1);  // Output: 2
    return 0;
}
```

---

## 🔹 Enums & Structs  

### **Enums in C**  

Enums (`enum`) are user-defined types representing a set of named values.  

```c
#include <stdio.h>

enum Color {RED, GREEN, BLUE};

int main() {
    enum Color myColor = GREEN;
    printf("Selected Color: %d\n", myColor);  // Output: 1
    return 0;
}
```

### **Structs in C**  

Structures (`struct`) group related variables under a single name.  

```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"Alice", 25};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
```

---

## 🔹 Memory Layout in C  

Memory in C is divided into:  

- **Code Segment** → Stores compiled instructions  
- **Stack** → Stores local variables and function calls  
- **Heap** → Stores dynamically allocated memory  

### **Example: Stack vs Heap Memory**  

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int stackVar = 10;  // Stack allocation
    int *heapVar = (int*)malloc(sizeof(int));  // Heap allocation
    *heapVar = 20;

    printf("Stack Variable: %d\n", stackVar);
    printf("Heap Variable: %d\n", *heapVar);

    free(heapVar);  // Free allocated memory
    return 0;
}
```

---
