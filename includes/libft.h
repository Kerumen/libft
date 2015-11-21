/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:30:21 by ypringau          #+#    #+#             */
/*   Updated: 2015/11/21 12:35:41 by ypringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdarg.h>

# define BUFF_SIZE 16

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_dllist
{
	void			*content;
	size_t			content_size;
	struct s_dllist	*next;
	struct s_dllist	*prev;
}					t_dllist;

typedef struct		s_printfd
{
	int				i;
	va_list			ap;
	size_t			ret;
	int				fd;
}					t_printfd;

typedef struct		s_read
{
	int				size;
	int				index;
	int				fd;
	char			*read;
	struct s_read	*next;
}					t_read;

typedef struct		s_atof
{
	double			ipart;
	double			fpart;
	int				divisor;
	int				sign;
	int				fraction;
}					t_atof;

typedef struct		s_opts
{
	int				d;
	char			c;
	char			*s;
	unsigned int	u;
	unsigned int	o;
	unsigned int	x;
	unsigned long	p;
}					t_opts;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strchrrev(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_tabsort(char **tab, int n);
void				ft_lstsort(t_list **root);
char				*ft_strrev(const char *s);
t_list				*ft_lst_get_elem_at(t_list *alst, unsigned int nbr);
void				ft_lstadd_end(t_list **alst, t_list *new);
int					get_next_line(int const fd, char **line);
void				ft_lstswap(t_list *s1, t_list *s2);
void				*ft_realloc(void *ptr, size_t size);
t_dllist			*ft_dllstnew(void const *content, size_t content_size);
void				ft_dllstadd_end(t_dllist **alst, t_dllist *new);
void				ft_dllstadd(t_dllist **alst, t_dllist *new);
void				ft_dllstdelitem(t_dllist **item);
t_dllist			*ft_dllstgetitemat(t_dllist *alst, unsigned int nbr);
int					ft_word_count(char *str);
char				*ft_itoa(int n);
double				ft_atof(char *n);
char				*ft_uitoa(unsigned int n);
char				*ft_uitooa(unsigned int n);
char				*ft_uitoxa(long int n);
char				*ft_luitoxa(unsigned long n);
int					ft_printf_fd(const char *format, int fd, ...);
#endif
