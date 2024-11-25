/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:37:36 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/10/11 22:02:37 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"

typedef struct freeing_memory
{
	char					*address;
	struct freeing_memory	*next;
}				t_freeing_memory;

char	*search(char *s, int c);
int		ft_isdigit(int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	ft_lstclear(t_freeing_memory **lst);
void	ft_lstadd_back(t_freeing_memory **lst, t_freeing_memory *new);
char	**ft_split(char *s, char c);
int		ft_strncmp(const char *s1, const char *s2);
void	ft_lstclear(t_freeing_memory **lst);
char	*ft_strtrim(char *s1, char *set);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
#endif