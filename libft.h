#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*Libc functions*/

/*CHECK*/
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);

/*CONVERT*/
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *nptr);

/*MANIPULATE*/
size_t	ft_strlen(const char *s);
void*	ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void*	ft_memcpy(void *dest, const void *src, size_t n);
void*	ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*SEARCH*/
char*	ft_strchr(const char *s, int c);
char*	ft_strrchr(const char *s, int c);
void*	ft_memchr(const void *s, int c, size_t n);
char*	ft_strnstr(const char *big, const char *little, size_t len);

/*COMPARE*/
int	ft_strncmp(size_t n, const char s1, const char s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/*MALLOC*/
void*	ft_calloc(size_t n, size_t size);
char*	ft_strdup(const char *s);
