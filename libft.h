/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:20:20 by jarregui          #+#    #+#             */
/*   Updated: 2022/10/28 16:04:58 by jarregui         ###   ########.fr       */
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

int				ft_atoi(const char *str); /* */
void			ft_bzero(void *s, unsigned int n); /* */
void			*ft_calloc(unsigned int count, unsigned int size); /* */
int				ft_isalnum(int c); /* */
int				ft_isalpha(int c); /* */
int				ft_isascii(int c); /* */
int				ft_isdigit(int c); /* */
int				ft_isprint(int c); /* */
char			*ft_itoa(int n); /*  --> P2*/
void			ft_lstadd_back(t_list **alst, t_list *new); /*  -------> Bonus*/
void			ft_lstadd_front(t_list **alst, t_list *new); /*  -------> Bonus*/
void			ft_lstclear(t_list **lst, void (*del)(void*)); /*  -------> Bonus*/
void			ft_lstdelone(t_list *lst, void (*del)(void*)); /*  -------> Bonus*/
void			ft_lstiter(t_list *lst, void (*f)(void*)); /*  -------> Bonus*/
t_list			*ft_lstlast(t_list *lst); /*  -------> Bonus*/
t_list			*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *)); /*  -------> Bonus*/
t_list			*ft_lstnew(void *content); /*  -------> Bonus*/
int				ft_lstsize(t_list *lst); /*  -------> Bonus*/

		void			*ft_memccpy(void *dst, const void *src, int c, unsigned int n);
		void			*ft_memchr(const void *s, int c, unsigned int n);


int				ft_memcmp(const void *s1, const void *s2, unsigned int n); /* */
void			*ft_memcpy(void *dst, const void *src, unsigned int n); /* */

			void			*ft_memmove(void *dst, const void *src, unsigned int len);

void			*ft_memset(void *b, int c, unsigned int len); /* */
void			ft_putchar_fd(char c, int fd); /*  --> P2*/
void			ft_putendl_fd(char *s, int fd); /*  --> P2*/
void			ft_putnbr_fd(int n, int fd); /*  --> P2*/
void			ft_putstr_fd(char *s, int fd); /*  --> P2*/
char			**ft_split(char const *s, char c); /*  --> P2*/

char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);


char			*ft_strdup(const char *s1); /* */
void			ft_striteri(char *s, void (*f)(unsigned int, char*)); /*  --> P2*/
char			*ft_strjoin(char const *s1, char const *s2); /*  --> P2*/
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size); /* */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size); /* */
unsigned int	ft_strlen(const char *s); /* */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char)); /*  --> P2*/
int				ft_strncmp(const char *s1, const char *s2, unsigned int n); /* */
char			*ft_strnstr(const char *haystack, const char *needle, unsigned int len); /* */
char			*ft_strchr(const char *s, int c); /*  ????????*/

char			*ft_strrchr(const char *s, int c); /* */
char			*ft_strtrim(char const *s1, char const *set); /*  --> P2*/
char			*ft_substr(char const *s, unsigned int start, unsigned int  len); /*  --> P2*/
int				ft_tolower(int c); /* */
int				ft_toupper(int c); /* */



#endif