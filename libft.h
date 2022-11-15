/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:20:20 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/15 16:49:01 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	unsigned int start;
	unsigned int length;
}				t_split_next;

int				ft_atoi(const char *str); /* OK */
void			ft_bzero(void *s, unsigned int n); /* OK */
void			*ft_calloc(size_t count, size_t size); /* OK */
int				ft_isalnum(int c); /* OK */
int				ft_isalpha(int c); /* OK */
int				ft_isascii(int c); /* OK */
int				ft_isdigit(int c); /* OK */
int				ft_isprint(int c); /* OK */
char			*ft_itoa(int n); /*  OK --> P2*/
void			ft_lstadd_back(t_list **lst, t_list *new); /* OK -------> Bonus*/
void			ft_lstadd_front(t_list **lst, t_list *new); /* OK -------> Bonus*/
void			ft_lstclear(t_list **lst, void (*del)(void*)); /* OK -------> Bonus*/
void			ft_lstdelone(t_list *lst, void (*del)(void*)); /* OK -------> Bonus*/
void			ft_lstiter(t_list *lst, void (*f)(void*)); /* OK -------> Bonus*/
t_list			*ft_lstlast(t_list *lst); /* OK -------> Bonus*/
t_list			*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *)); /* OK -------> Bonus*/
t_list			*ft_lstnew(void *content); /* OK  -------> Bonus*/
int				ft_lstsize(t_list *lst); /* OK -------> Bonus*/
void			*ft_memchr(const void *s, int c, unsigned int n); /* OK */
int				ft_memcmp(const void *s1, const void *s2, unsigned int n); /* OK */
void			*ft_memcpy(void *dst, const void *src, size_t n); /* OK */
void			*ft_memmove(void *dst, const void *src, size_t len); /* OK */
void			*ft_memset(void *b, int c, unsigned int len); /* OK */
void			ft_putchar_fd(char c, int fd); /* OK --> P2*/
void			ft_putendl_fd(char *s, int fd); /* OK --> P2*/
void			ft_putnbr_fd(int n, int fd); /* OK --> P2*/
void			ft_putstr_fd(char *s, int fd); /* OK --> P2*/
char			**ft_split(char const *s, char c); /* OK --> P2*/
char			*ft_strchr(const char *s, int c); /* OK */
char			*ft_strdup(const char *s1); /* OK */
void			ft_striteri(char *s, void (*f)(unsigned int, char*)); /* OK --> P2*/
char			*ft_strjoin(char const *s1, char const *s2); /* OK --> P2*/
size_t			ft_strlcat(char *dst, const char *src, size_t size); /* OK */
size_t			ft_strlcpy(char *dst, const char *src, size_t size); /* OK */
size_t			ft_strlen(const char *s); /* OK */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char)); /* OK --> P2*/
int				ft_strncmp(const char *s1, const char *s2, unsigned int n); /* OK */
char			*ft_strnstr(const char *haystack, const char *needle, size_t len); /* OK */
char			*ft_strrchr(const char *s, int c); /* OK */
char			*ft_strtrim(char const *s1, char const *set); /* OK --> P2*/
char			*ft_substr(char const *s, unsigned int start, size_t len); /* OK --> P2*/
int				ft_tolower(int c); /* OK */
int				ft_toupper(int c); /* OK */



#endif