# 📚 42 Libft - My Custom Library

Welcome to the 42 Libft project! This project is part of the 42 curriculum, where we create our own standard C library functions. The goal is to understand and implement the functionalities of common C library functions from scratch!

---

## **📜 Project Overview**
The goal of this project is to re-implement standard C library functions. This involves creating functions that handle string manipulation, memory allocation, and more.

### **Key Concepts**
- **String Manipulation:** Functions for handling strings, such as copying, concatenation, and searching.
- **Memory Allocation:** Functions for dynamic memory management.
- **Character Checking:** Functions to test and convert individual characters.
- **Linked List:** Basic linked list operations.

### **Features**

Our library implementation includes the following features:

- **String Functions**: Implements functions like `ft_strlen`, `ft_strcpy`, `ft_strdup`, `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, and more.
- **Memory Functions**: Implements functions like `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, and more.
- **Character Functions**: Includes functions like `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, and `ft_tolower`.
- **Linked List Functions**: Implements basic linked list operations like `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

### **Requirements**
- Must **not** use external libraries.
- Must follow **Norminette** coding standards.
- No memory leaks allowed.
- Must include a `Makefile` with rules:
  - `all` (compile project)
  - `clean` (remove object files)
  - `fclean` (remove object files & library)
  - `re` (recompile everything)
- **Allowed functions:**
  - Standard C library functions (e.g., `malloc`, `free`, `write`, `read`).

---

## 📂 Project Structure

```plaintext
42-libft/
├── src/
│   ├── ft_*.c              # Implementation of library functions
├── include/
│   └── libft.h             # Header file with function prototypes and macros
└── Makefile                # Compilation instructions
```

### **🛠️ Installation & Usage**
To compile and run the exercises, clone the repository and use the provided Makefile.

### **📥 Clone & Compile**
```sh
git clone https://github.com/febouana/42-libft.git
cd 42-libft
make
```
### **🚀 Using the library**
```
#include "libft.h"
```
