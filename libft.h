/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:48:05 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/03 03:16:10 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	*ft_memset(void *dest, int ch, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memccpy(void *dest, const void *src, int ch, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *ptr, int ch, size_t count);
int		ft_memcmp(const void *s1, const void *s2, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t count);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_iscntrl(int c);
int		ft_isgraph(int c);
int		ft_isprint(int c);

int		ft_toupper(int ch);
int		ft_tolower(int ch);

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t count);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *str, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char const *str, int ch);
char	*ft_strrchr(char const *str, int ch);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void	*ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_strnstr(const char *big, const char *little, size_t max);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

char	**ft_split(char const *str, char c);

void	*ft_calloc(size_t num, size_t size);

#endif
