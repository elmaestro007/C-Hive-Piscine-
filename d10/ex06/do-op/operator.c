/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:19:15 by sanchimi          #+#    #+#             */
/*   Updated: 2020/02/18 16:18:18 by sanchimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_addadd(char *nb1, char *nb2)
{
	int   n;
	n = getnbr(nb1) + getnbr(nb2);
	put_nbr(n);
	putchar('\n');
	return (0);
}

int		ft_sub(char *nb1, char *nb2)
{
  int   n;

  n = getnbr(nb1) - getnbr(nb2);
  put_nbr(n);
  putchar('\n');
  return (0);
}

int		ft_div(char *nb1, char *nb2)
{
	int   n;
	
	n = my_getnbr(nb1) / my_getnbr(nb2);
	my_put_nbr(n);
	my_putchar('\n');
	return (0);
}

int		ft-mul(char *nb1, char *nb2)
{
	int   n;

  n = getnbr(nb1) * getnbr(nb2);
  my_put_nbr(n);
  my_putchar('\n');
  return (0);
}
int		ft_mod(char *nb1, char *nb2)
{
	int   n;

   	n = getnbr(nb1) % getnbr(nb2);
  	put_nbr(n);
  	my_putchar('\n');
 	 return (0);
}
