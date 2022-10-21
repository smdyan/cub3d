/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadarys <loadarys@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:10:51 by loadarys          #+#    #+#             */
/*   Updated: 2022/10/18 15:02:51 by loadarys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp_begin;
	int		count;

	count = 0;
	temp_begin = lst;
	while (temp_begin != NULL)
	{
		count++;
		temp_begin = temp_begin->next;
	}
	return (count);
}
