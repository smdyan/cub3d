/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:32:37 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 13:49:36 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*arr;
	int				i;

	arr = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		arr[i++] = (unsigned char)c;
		len--;
	}
	return (b);
}
