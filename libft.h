/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:20:20 by jarregui          #+#    #+#             */
/*   Updated: 2022/11/02 19:05:50 by jarregui         ###   ########.fr       */
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
void			*ft_calloc(unsigned int count, unsigned int size); /* OK */
int				ft_isalnum(int c); /* OK */
int				ft_isalpha(int c); /* OK */
int				ft_isascii(int c); /* OK */
int				ft_isdigit(int c); /* OK */
int				ft_isprint(int c); /* OK */
char			*ft_itoa(int n); /*  OK --> P2*/
void			ft_lstadd_back(t_list **alst, t_list *new); /* MISSING -------> Bonus*/
void			ft_lstadd_front(t_list **alst, t_list *new); /* MISSING -------> Bonus*/
void			ft_lstclear(t_list **lst, void (*del)(void*)); /* MISSING -------> Bonus*/
void			ft_lstdelone(t_list *lst, void (*del)(void*)); /* MISSING -------> Bonus*/
void			ft_lstiter(t_list *lst, void (*f)(void*)); /* MISSING -------> Bonus*/
t_list			*ft_lstlast(t_list *lst); /* MISSING -------> Bonus*/
t_list			*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *)); /* MISSING -------> Bonus*/
t_list			*ft_lstnew(void *content); /*MISSING  -------> Bonus*/
int				ft_lstsize(t_list *lst); /* MISSING -------> Bonus*/
void			*ft_memchr(const void *s, int c, unsigned int n); /* OK */
int				ft_memcmp(const void *s1, const void *s2, unsigned int n); /* OK */
void			*ft_memcpy(void *dst, const void *src, unsigned int n); /* OK */
void			*ft_memmove(void *dst, const void *src, unsigned int len); /* OK */
void			*ft_memset(void *b, int c, unsigned int len); /* OK */
void			ft_putchar_fd(char c, int fd); /* MISSING --> P2*/
void			ft_putendl_fd(char *s, int fd); /* MISSING --> P2*/
void			ft_putnbr_fd(int n, int fd); /* MISSING --> P2*/
void			ft_putstr_fd(char *s, int fd); /* MISSING --> P2*/
char			**ft_split(char const *s, char c); /* MISSING --> P2*/
char			*ft_strchr(const char *s, int c); /* OK */
char			*ft_strdup(const char *s1); /* OK */
void			ft_striteri(char *s, void (*f)(unsigned int, char*)); /* MISSING --> P2*/
char			*ft_strjoin(char const *s1, char const *s2); /* OK --> P2*/
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size); /* OK */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size); /* OK */
unsigned int	ft_strlen(const char *s); /* OK */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char)); /* MISSING --> P2*/
int				ft_strncmp(const char *s1, const char *s2, unsigned int n); /* OK */
char			*ft_strnstr(const char *haystack, const char *needle, unsigned int len); /* OK */
char			*ft_strrchr(const char *s, int c); /* OK */
char			*ft_strtrim(char const *s1, char const *set); /* MISSING --> P2*/
char			*ft_substr(char const *s, unsigned int start, unsigned int  len); /* MISSING --> P2*/
int				ft_tolower(int c); /* OK */
int				ft_toupper(int c); /* OK */



#endif