#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);
void	ft_bzero(void *add, unsigned int n); // size_t!
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strlcpy(char *dest, const char *src);
char	*ft_strdup(const char *str);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_tolower(int lett);
int		ft_toupper(int lett);

// missing: P1 - all mems; strncat; strlcat; P2 - all except for putnbr, putchar, putstr