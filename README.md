# 42-Libft
<br>
Libft is one of the first projects in the 42 curriculum, focusing on reimplementing essential C library functions based on their behavior as described in the man pages. This helps deepen our understanding of memory manipulation, string operations, and linked lists. The goal is to create a personal library that can be reused in future projects.
<br>

## How to use
<br>

To clone the repository:
```
git clone git@github.com:justaPoet/42-libft.git libft
```

To compile:
```
cd libft && make
```
This will generate a libft.a static library file!
To use the library in your project, include the header file and link the compiled library!

## Mandatory part :
### Character Tests :
- `ft_isalpha` : Checks if a character is alphabetic.
- `ft_isdigit` : Checks if a character is a digit.
- `ft_isalnum` : Checks if a character is alphanumeric.
- `ft_isascii` : Checks if a character is an ASCII character.
- `ft_isprint` : Checks if a character is printable.

### String and Memory Manipulation :
- `ft_strlen` : Returns the length of a string.
- `ft_memset` : Fills a block of memory with a specific value.
- `ft_bzero` : Sets a block of memory to zero.
- `ft_memcpy` : Copies memory from source to destination.
- `ft_memmove` : Copies memory safely, even when overlapping.
- `ft_strlcpy` : Copies a string with size protection.
- `ft_strlcat` : Concatenates two strings safely.
- `ft_toupper` : Converts lowercase to uppercase.
- `ft_tolower` : Converts uppercase to lowercase.
- `ft_strchr` : Locates the first occurrence of a character in a string.
- `ft_strrchr` : Locates the last occurrence of a character in a string.
- `ft_strncmp` : Compares two strings up to a certain length.
- `ft_memchr` : Searches for a byte in a memory block.
- `ft_memcmp` : Compares two memory blocks.
- `ft_strnstr` : Locates a substring in a string.
- `ft_atoi` : Converts a string to an integer.

For the following two functions, you can call the malloc() function:
- `ft_calloc` : Allocates memory and initializes it to zero.
- `ft_strdup` : Duplicates a string.

## Bonus part :

The project also includes basic linked list operations using the following structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

### Linked Lists :
- `ft_lstnew` : Creates a new list element.
- `ft_lstadd_front` : Adds an element to the front of the list.
- `ft_lstsize` : Returns the size of the list.
- `ft_lstlast` : Retrieves the last element of the list.
- `ft_lstadd_back` : Adds an element to the back of the list.
- `ft_lstdelone` : Deletes an element from the list.

---

Thanks for reading, I hope you enjoy the project!  🚀

