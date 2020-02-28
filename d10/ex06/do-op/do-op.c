/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanchimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:18:24 by sanchimi          #+#    #+#             */
/*   Updated: 2020/02/18 16:11:47 by sanchimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_add(char *nb1, char *nb2);
int		ft_sub(char *nb1, char *nb2);
int		ft_div(char *nb1, char *nb2);
int		ft_mul(char *nb1, char *nb2);
int		ft_mod(char *nb1, char *nb2);

int		calculate(char *nb1, char *op, char *nb2)
{
int (*fptr[5])(char*, char*);

	fptr[0] = &ft_add;
	fptr[1] = &ft_sub;
	fptr[2] = &ft_div;
	fptr[3] = &ft_mul;
	fptr[4] = &ft_mod;
	if (op[0] == '+')
		fptr[0](nb1, nb2);
	else if (op[0] == '-')
		fptr[1](nb1, nb2);
	else if (op[0] == '/')
		fptr[2](nb1, nb2);
	else if (op[0] == '*')
		fptr[3](nb1, nb2);
	else if (op[0] == '%')
		fptr[4](nb1, nb2);
}

int		main(int argc, char **argv)
{
	if (argv[2] == "0")
	{
		my_putstr("Stop : division by zero");
		return (0);
	}
	if (argv[2] == "0")
	{ii
		my_putstr("Stop : modulo by zero");
		return (0);
	}
	if (argc == 4)
		calculate(argv[1], argv[2], argv[3]);
	else
		my_putstr("Usage : ./do-op number operator number\n");
	return (0);
}
