/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:35:20 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 20:18:05 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *mem, int c, size_t size);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strchr(const char *string, int find);
char	*ft_strrchr(const char *string, int find);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_atoi(const char *str);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
int		ft_toupper(int character);
int		ft_tolower(int character);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *mem1, const void *mem2, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
size_t	*ft_memset(void *b, int c, size_t len);

#endif
