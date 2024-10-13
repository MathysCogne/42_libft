/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:35:20 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/13 19:25:28 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

size_t			ft_strlcat(char *dest, const char *src, size_t size);

unsigned int	ft_strlen(const char *s);

int				ft_atoi(const char *str);
int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *src);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);

void			*ft_memset(void *b, int c, unsigned int len);
void			bzero(void *s, unsigned int n);
void			*ft_memset(void *b, int c, unsigned int len);

#endif
