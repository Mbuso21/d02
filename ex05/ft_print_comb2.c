/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_countdown.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:17:42 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/22 10:54:46 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void ft_print_comd2(void)
{
	char f, s;

	f = 0;
	while(f < 99)
	{
		s = f + 1;
		while(s <= 99)
		{
			ft_putchar(f / 10 + '0');
			ft_putchar(f % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if(f != 98)
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
			s++;
		}
	f++;
	}

}
