/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:47:36 by bfallah-          #+#    #+#             */
/*   Updated: 2023/11/16 13:43:07 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# include <stddef.h>

int		ft_isalpha(int a);
int		ft_isdigit(int a);
int		ft_isalnum(int a);
int		ft_isascii(int a);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy( char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
#endif
