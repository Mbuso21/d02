/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:03:01 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/19 10:38:41 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char a)
{
	write(1, &a, 1);
}

void 	ft_is_negative(int n)
{

	while(n >= -2147483648 && n <= 2147483647)
	{
		if (n < 0)
			write(1, "N", 1);
		else
			write(1, "P", 1);
		break;
	}
}

int main(void)

{
	int c;
	c = '1000';
	ft_is_negative(c);
	ft_putchar('\n');
	return(0);
}

