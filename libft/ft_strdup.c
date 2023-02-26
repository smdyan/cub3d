/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:10:21 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 13:49:36 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		c;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	c = 0;
	while (s1[c] != '\0')
	{
		dest[c] = s1[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
