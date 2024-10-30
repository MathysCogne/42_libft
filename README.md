<a name="readme-top"></a>
<div align="center">
<h1>42 - LIBFT</h1>
<p><strong>Your personal C library</strong></a></p>
<p><a href="https://github.com/MathysCogne/42_libft/blob/main/subject/subject_libft.pdf"><strong>Subject</strong></a></p>
</br>
</div>

This repository contains my implementations of essential C library functions, including the standard library, and additional utilities.

Explore my complete library, which includes Libft, Extra, Printf, and Get Next Line (GNL) here: [MyLibft_GNL_Printf](https://github.com/MathysCogne/MyLibft_GNL_Printf).


</br>

## Standard Library Functions

| **Function**                     | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `void ft_bzero(void *s, size_t n)` | Sets the first `n` bytes of the memory area pointed to by `s` to zero.                           | `ft_bzero(buffer, size);`                        |
| `void *ft_calloc(size_t count, size_t size)` | Allocates memory for an array of `count` elements of `size` bytes and initializes it to zero.    | `void *array = ft_calloc(count, size);`         |
| `void *ft_memchr(const void *mem, int c, size_t size)` | Locates the first occurrence of `c` in the first `size` bytes of the memory area pointed to by `mem`. | `ft_memchr(mem, 'A', size);`                     |
| `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of memory areas `s1` and `s2`.                                      | `int result = ft_memcmp(s1, s2, n);`            |
| `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from memory area `src` to memory area `dest`.                                    | `ft_memcpy(dest, src, size);`                   |
| `void *ft_memmove(void *dest, const void *src, size_t n)` | Moves `n` bytes from memory area `src` to memory area `dest`, handling overlapping regions.      | `ft_memmove(dest, src, size);`                  |
| `void *ft_memset(void *s, int c, size_t n)` | Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`.        | `ft_memset(buffer, 'A', size);`                 |
| `size_t ft_strlen(const char *s)`  | Calculates the length of the string `s`, not including the null terminator.                       | `size_t len = ft_strlen("Hello");`               |
| `char *ft_strdup(const char *src)` | Returns a pointer to a new string which is a duplicate of the string `src`.                       | `char *dup = ft_strdup("Hello");`                |
| `char *ft_strchr(const char *string, int find)` | Locates the first occurrence of `find` in `string`.                                               | `char *ptr = ft_strchr("Hello", 'e');`          |
| `char *ft_strjoin(char const *s1, char const *s2)` | Allocates and returns a new string which is the result of the concatenation of `s1` and `s2`.     | `char *result = ft_strjoin("Hello", " World");` |
| `size_t ft_strlcat(char *dest, const char *src, size_t size)` | Appends the `src` string to `dest`, ensuring to not exceed `size` total.                         | `ft_strlcat(dest, src, size);`                  |
| `size_t ft_strlcpy(char *dest, const char *src, size_t size)` | Copies the string `src` to `dest`, with size limit.                                               | `size_t copied = ft_strlcpy(dest, src, size);`  |
| `int ft_atoi(const char *str)`    | Converts the string `str` to an integer.                                                           | `int num = ft_atoi("42");`                        |
| `int ft_isalpha(int character)`   | Checks if `character` is an alphabetic character.                                                  | `int is_alpha = ft_isalpha('A');`                |
| `int ft_isalnum(int character)`   | Checks if `character` is alphanumeric.                                                             | `int is_alnum = ft_isalnum('4');`                |
| `int ft_isdigit(int character)`   | Checks if `character` is a digit.                                                                   | `int is_digit = ft_isdigit('4');`                |
| `int ft_isascii(int character)`   | Checks if `character` is an ASCII character.                                                       | `int is_ascii = ft_isascii('A');`                |
| `int ft_isprint(int character)`   | Checks if `character` is a printable character.                                                    | `int is_print = ft_isprint(' ');`                |
| `char *ft_itoa(int n)`           | Converts an integer to a string.                                                                    | `char *str = ft_itoa(42);`                       |
| `void ft_putchar_fd(char c, int fd)` | Outputs the character `c` to the file descriptor `fd`.                                            | `ft_putchar_fd('A', 1);`                         |
| `void ft_putstr_fd(char *s, int fd)` | Outputs the string `s` to the file descriptor `fd`.                                               | `ft_putstr_fd("Hello", 1);`                      |
| `void ft_putendl_fd(char *s, int fd)` | Outputs the string `s` followed by a newline to the file descriptor `fd`.                          | `ft_putendl_fd("Hello", 1);`                     |
| `void ft_putnbr_fd(int n, int fd)` | Outputs the integer `n` to the file descriptor `fd`.                                              | `ft_putnbr_fd(42, 1);`                           |
| `char **ft_split(char const *s, char c)` | Splits a string into an array of strings based on a delimiter `c`.                                 | `char **array = ft_split("Hello World", ' ');`  |
| `char *ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies the function `f` to each character of the string `s`.                                      | `ft_striteri(str, function);`                    |
| `char *ft_strmapi(char *s, char (*f)(unsigned int, char))` | Applies the function `f` to each character of the string `s` and returns a new string.            | `char *new_str = ft_strmapi(str, function);`    |
| `char *ft_strrchr(const char *string, int find)` | Locates the last occurrence of `find` in `string`.                                                | `char *ptr = ft_strrchr("Hello", 'o');`         |
| `char *ft_strtrim(char const *s1, char const *set)` | Removes the characters in `set` from the beginning and end of `s1`.                               | `char *trimmed = ft_strtrim("!!Hello!!", "!");` |
| `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares the first `n` characters of the strings `s1` and `s2`.                                   | `int cmp = ft_strncmp(s1, s2, n);`               |
| `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates the first occurrence of `needle` in `haystack` within `len` bytes.                       | `char *ptr = ft_strnstr(haystack, needle, len);` |
| `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates and returns a substring from `s`, starting at `start`, of length `len`.                 | `char *sub = ft_substr(s, start, len);`         |
| `int ft_tolower(int c)`         | Converts `c` to lowercase if it is an uppercase letter.                                             | `int lower = ft_tolower('A');`                   |
| `int ft_toupper(int c)`         | Converts `c` to uppercase if it is a lowercase letter.                                             | `int upper = ft_toupper('a');`                   |

## Linked List Functions

| **Function**                     | **Description**                                                                                     | **Usage**                                         |
|----------------------------------|-----------------------------------------------------------------------------------------------------|--------------------------------------------------|
| `t_list *ft_lstnew(void *content)` | Allocates and returns a new node with the given `content`.                                        | `t_list *new_node = ft_lstnew(content);`        |
| `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds the node `new` at the beginning of the list `lst`.                                          | `ft_lstadd_front(&head, new_node);`             |
| `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds the node `new` at the end of the list `lst`.                                                | `ft_lstadd_back(&head, new_node);`              |
| `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Deletes the node `lst` and frees its content using `del`.                                        | `ft_lstdelone(node, del_function);`              |
| `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees all nodes of the list `lst` and sets the pointer to NULL.                      | `ft_lstclear(&head, del_function);`              |
| `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies the function `f` to each node of the list `lst`.                                         | `ft_lstiter(head, function);`                    |
| `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Applies the function `f` to each node and creates a new list with the results.                  | `t_list *new_list = ft_lstmap(head, function, del_function);` |

</br>

## Disclaimer
> At 42 School, most projects must comply with the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).