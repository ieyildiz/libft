#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void ft_bzero1(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
#endif
