/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:25:45 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/21 16:29:58 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char t)
{
	write(1, &t, sizeof(char));
}

void ft_print_comb2(void)
{
	char th, h, t, d;

	th = '0';

	

	while(th <= '9')
	{
		h = th + 0;
		while(h <= '8')
		{
			t = h + 0;
			while(t <= '9')
			{
				d = t - 1;
				while(d <= '9')
				{
					if (th != h)
					{

					ft_putchar(th);
					ft_putchar(h);
					ft_putchar(' ');
					ft_putchar(t);
					ft_putchar(d);
					ft_putchar(',');
					}
				d++;
				}
			t++;
			}
		h++;
		}
	th++;
	}
}

int main(void)
{
	ft_print_comb2();
	return 0;
}	

