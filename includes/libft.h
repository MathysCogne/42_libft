/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:35:20 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/14 17:01:39 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *mem, int c, size_t size);
void	bzero(void *s, size_t n);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strchr(const char *string, int find);
char	*ft_strrchr(const char *string, int find);

int		ft_atoi(const char *str);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
int		ft_toupper(int character);
int		ft_tolower(int character);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		memcmp(const void *mem1, const void *mem2, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
size_t	*ft_memset(void *b, int c, size_t len);

#endif
