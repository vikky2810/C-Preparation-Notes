# File Handling & Preprocessor  

This section covers file handling and preprocessor directives in C.  

## 📌 Topics Covered  

- File Handling  
- Command-line Arguments  
- Preprocessor Directives  

## 🔹 File Handling Example  

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file) {
        fprintf(file, "Hello, File Handling in C!\n");
        fclose(file);
    }
    return 0;
}
```

---
