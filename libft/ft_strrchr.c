/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:57:40 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 15:01:12 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*found;

	found = (char *)str;
	i = 0;
	while (str[i] != '\0')
		i++;
	i += 1;
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
			return (found + i);
	}
	return (NULL);
}
