# Libft
Build a comprehensive and reusable C programming library by re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

> [!CAUTION]
> The structure of the project (and thus the Makefile) is custom. The Makefile required by the subject is much simpler.

The original 42 project is divided into 3 parts (2 mandatory and 1 bonus).
1. **Part 1:** Recreate a set of functions from the official C library.
2. **Part 2:** Create a customised set of functions.
3. **Part 3:** Create a set functions designed to introduc you to **linked lists**.

## Table of Contents

- [Checks](https://github.com/spacotto/libft/blob/main/README.md#checks)
- [Conversions](https://github.com/spacotto/libft/blob/main/README.md#conversions)
- [String Manipulation](https://github.com/spacotto/libft/blob/main/README.md#string-manipulation)
- [Memory Manipulation](https://github.com/spacotto/libft/blob/main/README.md#memory-manipulation)
- [Memory Allocation](https://github.com/spacotto/libft/blob/main/README.md#memory-allocation)
- [File Descriptor Functions](https://github.com/spacotto/libft/blob/main/README.md#file-descriptor-functions)
- [Linked Lists](https://github.com/spacotto/libft/blob/main/README.md#linked-lists)

> [!CAUTION]
> Some functions have been changed after passing the Moulinette! They might not be norm-compliant or subject-compliant! Never trust code blindly!

## Functions Inventory

### Checks
These functions are used to check if a character belongs to a certain type (e.g., alphabetic, digit).
| Function Name | Description                                              |
| :------------ | :------------------------------------------------------- |
| `ft_isalpha`  | Checks if a character is an alphabet (a-z, A-Z).         |
| `ft_isdigit`  | Checks if a character is a decimal digit (0-9).          |
| `ft_isalnum`  | Checks if a character is alphanumeric (a-z, A-Z, 0-9).   |
| `ft_isascii`  | Checks if a character is a 7-bit ASCII character.        |
| `ft_isprint`  | Checks if a character is printable, including space.     |

### Conversions
These functions are used to convert characters or strings.
| Function Name | Description                                                 |
| :------------ | :---------------------------------------------------------- |
| `ft_toupper`  | Converts a lowercase letter to its uppercase equivalent.    |
| `ft_tolower`  | Converts an uppercase letter to its lowercase equivalent.   |
| `ft_atoi`     | Converts a string to an integer.                            |
| `ft_itoa`     | Allocates memory and converts an integer to a string.       |

### String Manipulation
This category includes functions for handling strings. They are used for copying, comparing, and searching within data.
| Function Name | Description                                                                                                        |
| :------------ | :----------------------------------------------------------------------------------------------------------------- |
| `ft_strlen`   | Calculates the length of a string, excluding the null terminator.                                                  |
| `ft_strlcpy`  | Copies a string with a size limit, ensuring the destination is null-terminated.                                    |
| `ft_strlcat`  | Appends a string with a size limit, ensuring the destination is null-terminated.                                   |
| `ft_strchr`   | Locates the first occurrence of a character in a string.                                                           |
| `ft_strrchr`  | Locates the last occurrence of a character in a string.                                                            |
| `ft_strncmp`  | Compares two strings up to a specified number of characters.                                                       |
| `ft_strnstr`  | Locates the first occurrence of a substring within a string, searching up to a specified length.                   |
| `ft_strdup`   | Duplicates a string by allocating new memory and copying the contents.                                             |
| `ft_substr`   | Allocates memory and returns a substring from a source, given the substring start and size.                        |
| `ft_strjoin`  | Allocates memory and returns a new string, which is the result of concatenating `s1` and `s2`.                     |
| `ft_strtrim`  | Allocates memory and returns a copy of `s1` with characters from `set` removed from the beginning and the end.     |
| `ft_split`    | Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. |
| `ft_striteri` | Applies the function `f` to each character of the string passed as argument. It acts directly on the source.       |
| `ft_strmapi`  | Applies the function `f` to each character of the string passed as argument, and returns a new string as a result. |

### Memory Manipulation
This category includes functions for handling blocks of memory. They are used for copying, comparing, and searching within data.
| Function Name | Description                                                                                       |
| :------------ | :------------------------------------------------------------------------------------------------ |
| `ft_memset`   | Fills a block of memory with a specific byte value.                                               |
| `ft_bzero`    | Sets a block of memory to all zeros. (Note: This is similar to `memset` with a value of 0).       |
| `ft_memcpy`   | Copies a block of memory from a source to a destination.                                          |
| `ft_memmove`  | Copies a block of memory, handling overlapping source and destination regions safely.             |
| `ft_memchr`   | Scans a block of memory for the first occurrence of a specific character.                         |
| `ft_memcmp`   | Compares two blocks of memory.                                                                    |

### Memory Allocation
This category includes functions for memory allocation and management.
| Function Name | Description                                                                 |
| :------------ | :-------------------------------------------------------------------------- |
| `ft_calloc`   | Allocates a block of memory for an array and initialises all bytes to zero. |

### File Descriptor Functions
These functions write various data types to a specified file descriptor, which can be a file, standard output, or standard error. They are a common way to handle I/O in a modular and consistent manner.
| Function Name   | Description                                                                    |
| :-------------- | :----------------------------------------------------------------------------- |
| `ft_putchar_fd` | Outputs the character `c` to the specified file descriptor.                    |
| `ft_putstr_fd`  | Outputs the string `s` to the specified file descriptor.                       |
| `ft_putendl_fd` | Outputs the string `s` to the specified file descriptor followed by a newline. |
| `ft_putnbr_fd`  | Outputs the integer `n` to the specified file descriptor.                      |

### Linked Lists
These functions are specifically designed to teach you the basics of **linked lists**, a fundamental data structure in computer science. They teach you the creation, deletion, modification, and iteration of individual list nodes (or "links") and the list as a whole. All these functions are based on the same given structure.
| Function Name     | Description                                                                                                                                    |
| :---------------- | :--------------------------------------------------------------------------------------------------------------------------------------------- |
| `ft_lstnew`       | Creates a new node.                                                                                                                            |
| `ft_lstadd_front` | Adds the node `new` at the beginning of the list.                                                                                              |
| `ft_lstsize`      | Counts the number of nodes in the list.                                                                                                        |
| `ft_lstlast`      | Returns the last node of the list.                                                                                                             |
| `ft_lstadd_back`  | Adds the node `new` at the end of the list.                                                                                                    |
| `ft_lstdelone`    | Takes a node as a parameter and frees its content using the function `del`. Free the node itself, but does NOT free the next node.             |
| `ft_lstclear`     | Deletes and frees the given node and all its successors, using the function `del` and `free(3)`. Finally, set the pointer to the list to NULL. |
| `ft_lstiter`      | Iterates through the list `lst` and applies the function `f` to the content of each node.                                                      |
| `ft_lstmap`       | Iterates through the list `lst`, applies the function `f` to each node’s content, and creates a new list as a result.                          |
> [!TIP]
> The order of the functions follows a specific logic. Pay attention to it!
