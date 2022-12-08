# libft - my personal C library
This project is a self coded C library. It contains a lot of general purpose functions my future programs will rely upon.

## recreated standard functions (rtfm 😉)
**isalpha**\
**isdigit**\
**isalnum**\
**isascii**\
**isprint**\
**strlen**\
**memset**\
**bzero**\
**memcpy**\
**memmove**\
**strlcpy**\
**strlcat**\
**toupper**\
**tolower**\
**strchr**\
**strrchr**\
**strncmp**\
**memchr**\
**memcmp**\
**strnstr**\
**atoi**\
**calloc**\
**strdup**

## additional functions
**substr** - returns substring of a string\
**strjoin** - returns concatenation of two strings\
**strtrim** - returns a copy of a string with the chars in 'set' removed from beginning and end\
**split** - returns array of strings obtained by splitting 's' using 'c' as delimiter\
**itoa** - returns a string representing the integer received as argument\
**strmapi** - returns a copy of a provided string with function 'f' applied to every char\
**striteri** - applies function 'f' to each char of the provided string\
**putchar_fd** - outputs char 'c' to given file descriptor\
**putstr_fd** - outputs string 's' to given file descriptor\
**putendl_fd** - outputs string 's' to given file descriptor followed by a newline\
**putnbr_fd** - outputs integer 'n' to given file descriptor\

## singly linked list
**lstnew** - create new node\
**lstadd_front** - add node to front\
**lstsize** - returns number of nodes of a list\
**lstlast** - returns last node of list\
**lstadd_back** - add node to back\
**lstdelone** - remove a specified single node of list\
**lstclear** - delete a whole list\
**lstiter** - iterate over list and apply function 'f' to every nodes content\
**lstmap** - iterate over list and return a copy with function 'f' applied to every nodes content\
