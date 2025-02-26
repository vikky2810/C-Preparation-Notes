# File Handling & Preprocessor  

This section covers file handling and preprocessor directives in C.  

## 📌 Topics Covered  

- File Handling  
- Command-line Arguments  
- Preprocessor Directives  

---

## 🔹 File Handling in C  

File handling allows us to store data in files for later use. We use the `FILE*` type from `<stdio.h>` for working with files.  

### **Opening and Writing to a File**  

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w"); // Open file in write mode
    if (file) {
        fprintf(file, "Hello, File Handling in C!\n");
        fclose(file);  // Close the file
    } else {
        printf("Error opening file!\n");
    }
    return 0;
}
```

### **Reading from a File**  

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file) {
        char line[100];
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("Error opening file!\n");
    }
    return 0;
}
```

### **Appending Data to a File**  

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");
    if (file) {
        fprintf(file, "Appending new data!\n");
        fclose(file);
    } else {
        printf("Error opening file!\n");
    }
    return 0;
}
```

---

## 🔹 Command-line Arguments  

Command-line arguments allow users to pass input parameters when running a program. They are handled using `main(int argc, char *argv[])`, where:  

- `argc` (argument count) holds the number of arguments.  
- `argv[]` (argument vector) stores the arguments as strings.  

### **Example: Print Command-line Arguments**  

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

### **Example: Sum of Two Numbers from Command-line**  

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("Sum: %d\n", num1 + num2);
    return 0;
}
```

---

## 🔹 Preprocessor Directives  

Preprocessor directives are instructions that are processed before compilation. They start with `#`.  

### **Common Preprocessor Directives**  

| Directive      | Description |
|---------------|-------------|
| `#include`    | Includes a file (e.g., `#include <stdio.h>`) |
| `#define`     | Defines a macro (e.g., `#define PI 3.14`) |
| `#ifdef` / `#ifndef` | Conditional compilation |
| `#pragma`     | Compiler-specific settings |

### **Example: Macros with `#define`**  

```c
#include <stdio.h>
#define PI 3.14159

int main() {
    printf("The value of PI: %f\n", PI);
    return 0;
}
```

### **Example: Conditional Compilation**  

```c
#include <stdio.h>

#define DEBUG 1  // Set to 0 to disable debug mode

int main() {
#ifdef DEBUG
    printf("Debug mode is ON.\n");
#endif
    printf("Normal execution.\n");
    return 0;
}
```

### **Example: Using `#pragma`**  

```c
#include <stdio.h>

#pragma message("Compiling this program...")

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

---
