/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:34:27 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 15:00:59 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (needle[c] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len >= i)
	{
		c = 0;
		if (needle[0] == haystack[i])
		{
			while ((needle[c] != '\0')
				&& (needle[c] == haystack[i + c]) && (i + c < len))
			{
				c++;
				if (needle[c] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
