/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:17:49 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 13:49:36 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	dest_len = ft_strlen(dst);
	i = dest_len;
	src_len = ft_strlen(src);
	if (dstsize < dest_len + 1)
		return (src_len + dstsize);
	else
	{
		dstsize = dstsize - dest_len - 1;
		while (src[c] != '\0' && dstsize > 0)
		{
			dst[i++] = src[c++];
			dstsize--;
		}
		dst[i] = '\0';
	}
	return (dest_len + src_len);
}
