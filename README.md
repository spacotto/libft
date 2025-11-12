# Libft
A comprehensive and reusable C programming library re-implementing foundational functions, thereby deepening understanding of their mechanics and creating an essential toolkit for future projects.

> [!CAUTION]
> The structure of the project (and thus the Makefile) is custom. The Makefile required by the subject is much simpler.

The original 42 project is divided into 3 parts (2 mandatory and 1 bonus).
1. **Part 1:** Recreate a set of functions from the official C library.
2. **Part 2:** Create a customised set of functions.
3. **Bonus Part:** Create a set functions designed to introduce you to **linked lists**.

## Table of Contents

- [Part 1: C Library](https://github.com/spacotto/libft/blob/main/README.md#part-1)
- [Part 2: 42 Library](https://github.com/spacotto/libft/blob/main/README.md#part-2)
- [Bonus Part: Lists](https://github.com/spacotto/libft/blob/main/README.md#bonus-part)

> [!CAUTION]
> Some functions have been changed after passing the Moulinette! They might not be norm-compliant or subject-compliant! Never trust code blindly!

## Part 1
| **Function Name** | **Description**                                                                                  |
| :---------------- | :----------------------------------------------------------------------------------------------- | 
| `ft_isalpha`      | Checks if a character is an alphabet (a-z, A-Z).                                                 |
| `ft_isdigit`      | Checks if a character is a decimal digit (0-9).                                                  |
| `ft_isalnum`      | Checks if a character is alphanumeric (a-z, A-Z, 0-9).                                           |
| `ft_isascii`      | Checks if a character is a 7-bit ASCII character.                                                |
| `ft_isprint`      | Checks if a character is printable, including space.                                             |
| `ft_toupper`      | Converts a lowercase letter to its uppercase equivalent.                                         |
| `ft_tolower`      | Converts an uppercase letter to its lowercase equivalent.                                        |
| `ft_atoi`         | Converts a string to an integer.                                                                 |
| `ft_memset`       | Fills a block of memory with a specific byte value.                                              |
| `ft_bzero`        | Sets a block of memory to all zeros. (Note: This is similar to `memset` with a value of 0).      |
| `ft_memcpy`       | Copies a block of memory from a source to a destination.                                         |
| `ft_memmove`      | Copies a block of memory, handling overlapping source and destination regions safely.            |
| `ft_memchr`       | Scans a block of memory for the first occurrence of a specific character.                        |
| `ft_memcmp`       | Compares two blocks of memory.                                                                   |
| `ft_strlen`       | Calculates the length of a string, excluding the null terminator.                                |
| `ft_strlcpy`      | Copies a string with a size limit, ensuring the destination is null-terminated.                  |
| `ft_strlcat`      | Appends a string with a size limit, ensuring the destination is null-terminated.                 |
| `ft_strchr`       | Locates the first occurrence of a character in a string.                                         |
| `ft_strrchr`      | Locates the last occurrence of a character in a string.                                          |
| `ft_strncmp`      | Compares two strings up to a specified number of characters.                                     |
| `ft_strnstr`      | Locates the first occurrence of a substring within a string, searching up to a specified length. |
| `ft_strdup`       | Duplicates a string by allocating new memory and copying the contents.                           |
| `ft_calloc`       | Allocates a block of memory for an array and initialises all bytes to zero.                      |

## Part 2
| **Function Name** | **Description**                                                                                                    |
| :---------------- | :----------------------------------------------------------------------------------------------------------------- |
| `ft_substr`       | Allocates memory and returns a substring from a source, given the substring start and size.                        |
| `ft_strjoin`      | Allocates memory and returns a new string, which is the result of concatenating `s1` and `s2`.                     |
| `ft_strtrim`      | Allocates memory and returns a copy of `s1` with characters from `set` removed from the beginning and the end.     |
| `ft_split`        | Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. |
| `ft_itoa`         | Allocates memory and converts an integer to a string.                                                              |
| `ft_striteri`     | Applies the function `f` to each character of the string passed as argument. It acts directly on the source.       |
| `ft_strmapi`      | Applies the function `f` to each character of the string passed as argument, and returns a new string as a result. |
| `ft_putchar_fd`   |  Outputs the character `c` to the specified file descriptor.                                                       |
| `ft_putstr_fd`    | Outputs the string `s` to the specified file descriptor.                                                           |
| `ft_putendl_fd`   | Outputs the string `s` to the specified file descriptor followed by a newline.                                     |
| `ft_putnbr_fd`    | Outputs the integer `n` to the specified file descriptor.                                                          |

## Bonus Part
> [!TIP]
> The order of the functions follows a specific logic. Pay attention to it!

| **Function Name** | **Description**                                                                                                                                |
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

### What's a linked list?
A **linked list** in C is a **linear data structure** where elements (called **nodes**) are stored in **non-contiguous memory locations**. Each node contains (1) the **data** stored within and (2) a **pointer** to the next node in the sequence.

### Key Characteristics
- **Dynamic size:** Unlike arrays, linked lists can grow or shrink during runtime.
- **Non-contiguous memory:** Nodes are scattered in memory, connected by pointers.
- **Sequential access:** To reach the desired node, it must traverse all the nodes before.

> [!NOTE]
> Conventionally, a pointer named **HEAD** is used to traverse the list.

### Linked Lists OR Arrays?
| Feature                | Arrays                                                              | Linked Lists                                          |
| :--------------------- | :------------------------------------------------------------------ | :---------------------------------------------------- |
| **Memory Allocation**  | Contiguous (adjacent memory locations).                             | Non-contiguous (nodes can be anywhere in memory).     |
| **Size**               | Fixed (must be specified at creation, though dynamic arrays exist). | Dynamic (can grow or shrink easily at runtime).       |
| **Access**             | Direct access via index.                                            | Must traverse from the start/head.                    |
| **Insertion/Deletion** | Requires shifting elements.                                         | Requires updating pointers, if position is known.     |
| **Memory Usage**       | Less overhead (only data elements).                                 | Higher overhead (data element + pointer(s) per node). |
| **Cache Friendliness** | High (due to locality of reference).                                | Low (nodes are scattered in memory).                  |

When to use **ARRAYS**? 
- Implementing look-up tables, matrices, or when the size is known.

When to use **LINKED LISTS**? 
- Implementing queues, stacks, or when frequent insertions/deletions are needed.

