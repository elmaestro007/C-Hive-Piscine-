/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 04:09:34 by sanchimi          #+#    #+#             */
/*   Updated: 2020/02/19 06:17:06 by sanchimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct				s_list
{
	struct s_list			*next;
	void					*data;
}							t_list;

t_list						*ft_create_elem(void *data);

#endif
