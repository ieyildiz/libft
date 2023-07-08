#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void ft_bzero1(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
#endif
