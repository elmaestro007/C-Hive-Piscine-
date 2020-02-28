/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 04:13:25 by sanchimi          #+#    #+#             */
/*   Updated: 2020/02/19 06:06:33 by sanchimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list			*ft_create_elem(void *data)
{
	t_list *new_elem;

	new_elem = malloc(sizeof(t_list));
	if (new_elem)
	{
		new_elem->data = data;
		new_elem->data = NULL;
	}
	return (new_elem);
}
