# 📚 42 Libft - My Custom Library

Welcome to the 42 Libft project! This project is part of the 42 curriculum, where we create our own standard C library functions. The goal is to understand and implement the functionalities of common C library functions from scratch!

---

## **📜 Project Overview**
The goal of this project is to re-implement standard C library functions. This involves creating functions that handle string manipulation, memory allocation, and more.

### **Key Concepts**
- **String Manipulation:** Functions for handling strings, such as copying, concatenation, and searching.
- **Memory Allocation:** Functions for dynamic memory management.
- **Character Checking:** Functions to test and convert individual characters.
- **Linked List:** Basic linked list operations (BONUS PART).

### **Features**

Our library implementation includes the following features:

- **String Functions**: 
  - `ft_strlen`: Returns the length of a string.
  - `ft_strcpy`: Copies a string to another string.
  - `ft_strdup`: Duplicates a string by allocating memory for the new string.
  - `ft_strcmp`: Compares two strings.
  - `ft_strncmp`: Compares two strings up to a specified number of characters.
  - `ft_strcat`: Concatenates two strings.
  - `ft_strncat`: Concatenates two strings up to a specified number of characters.
  - `ft_strchr`: Locates the first occurrence of a character in a string.
  - `ft_strrchr`: Locates the last occurrence of a character in a string.
  - `ft_strstr`: Locates a substring in a string.
  - `ft_strnstr`: Locates a substring in a string up to a specified number of characters.

- **Memory Functions**: 
  - `ft_memset`: Fills a block of memory with a specified value.
  - `ft_bzero`: Sets a block of memory to zero.
  - `ft_memcpy`: Copies a block of memory from one location to another.
  - `ft_memccpy`: Copies a block of memory up to a specified character.
  - `ft_memmove`: Copies a block of memory, handling overlapping regions.
  - `ft_memchr`: Locates a character in a block of memory.
  - `ft_memcmp`: Compares two blocks of memory.

- **Character Functions**: 
  - `ft_isalpha`: Checks if a character is an alphabetic letter.
  - `ft_isdigit`: Checks if a character is a digit.
  - `ft_isalnum`: Checks if a character is alphanumeric.
  - `ft_isascii`: Checks if a character is an ASCII character.
  - `ft_isprint`: Checks if a character is printable.
  - `ft_toupper`: Converts a character to uppercase.
  - `ft_tolower`: Converts a character to lowercase.

- **Linked List Functions**: 
  - `ft_lstnew`: Creates a new linked list node.
  - `ft_lstadd_front`: Adds a new node at the beginning of a linked list.
  - `ft_lstsize`: Returns the number of nodes in a linked list.
  - `ft_lstlast`: Returns the last node of a linked list.
  - `ft_lstadd_back`: Adds a new node at the end of a linked list.
  - `ft_lstdelone`: Deletes a single node from a linked list.
  - `ft_lstclear`: Deletes all nodes from a linked list.
  - `ft_lstiter`: Applies a function to each node of a linked list.
  - `ft_lstmap`: Applies a function to each node of a linked list and creates a new list.

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
