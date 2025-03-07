#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
void *ft_memset(void *pointer, int value, int count);
void *ft_memcpy(void *dest, void *src, size_t n);
void *ft_memccpy(void *restrict dest, const void *restrict src, int ch, size_t n);
void ft_bzero(void *s, int n);
#endif
