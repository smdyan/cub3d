/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:25:11 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 13:49:36 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!s2)
		s2 = "";
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		join[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
