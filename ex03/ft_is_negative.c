/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:03:01 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/21 12:38:41 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char a)
{
	write(1, &a, sizeof(char));
}

void 	ft_is_negative(int n)
{

		if (n < 0)
			ft_putchar('N');
		else if (n == '\0' || n >= 0)
			ft_putchar('P');
}
