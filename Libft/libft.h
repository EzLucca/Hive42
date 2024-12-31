#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
char ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_isascii(int c);
int isprint(int c);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int    ft_toupper(int c);
int    ft_tolower(int c);
int	ft_atoi(char *str);
void    ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif
