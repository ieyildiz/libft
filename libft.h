#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_updated_ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(const char *str);
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void ft_bzero1(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
#endif
