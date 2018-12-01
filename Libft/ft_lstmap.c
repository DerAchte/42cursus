/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdervil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:54:09 by thdervil          #+#    #+#             */
/*   Updated: 2018/12/01 21:22:24 by thdervil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	int		i;
	t_list	*result;
	t_list	*buf_lst;

	buf_lst = lst;
	i = 0;
	while (lst->next != NULL)
	{
		f(lst);
		lst = lst->next;
		i++;
	}
	if (!(result = (t_list*)malloc(sizeof(t_list) * i + 1)))
		return (NULL);
	result = lst;
	return (result);
}
