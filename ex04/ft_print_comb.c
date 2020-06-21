/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:11:25 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/21 14:57:49 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char u)
{
	write(1, &u, sizeof(char));
}

void ft_print_comb(void)
{
	char h, t, d;
	
	h = '0';

	while(h <= '7')
	{
		t = h + 1;
		while(t <= '8')
			{
				d = t + 1;
					while(d <= '9')
					{	
						
						if(h != t && h != d  && t != d)
						{	
							ft_putchar(h);
							ft_putchar(t);
							ft_putchar(d);
							ft_putchar(',');
							ft_putchar(' ');
						}

						d++;

					}

				t++;
			}

		h++;
	}
}
	
