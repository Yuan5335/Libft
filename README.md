*This project has been created as part of the 42 curriculum by <aybaassi>.*

# Libft
## Description
Libft is my first project in the 42 curriculum: a personal C library that
re-implements a set of standard libc functions and adds extra utility
functions that I can reuse in later projects. The goal is to understand how
these functions work internally, to practice memory management and pointer
manipulation, and to build a library compiled as a static archive (libft.a).

The library is organized in three parts:

## Part 1 - Libc re-implementations

- Character checks and conversion: ft_isalpha, ft_isdigit, ft_isalnum,ft_isascii, ft_isprint, ft_toupper, ft_tolower
- String functions: ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup
- Memory functions: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc
- Conversion: ft_atoi

## Part 2 - Additional functions

- String manipulation: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri
- Conversion: ft_itoa
- File descriptor output: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd


## Part 3 - Linked lists

- Using the t_list structure: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap


## Instructions
## Compilation
The library is compiled with cc and the flags -Wall -Wextra -Werror.

**make || make all : builds libft.a**

**make clean       : removes the object files**

**make fclean      : removes the object files and libft.a**

**make re          : fclean + all**



## Usage
I included the header file libft.h in all my c files using:

#include "libft.h"



I compiled my program and linked it using:

cc libft.a



## Resources

- man pages for the re-implemented functions (man 3 strlcpy, man 3 memmove, ...)
- GNU Make manual
- The 42 Norm and the libft subject (PDF)


## Use of AI
AI was used to help me with the README.md file and to explain the compilation process and how make works. All code was written, tested and understood by me.
