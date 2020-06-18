/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:59:09 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/18 10:22:40 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) 
{ 
	write(1, &c, 1); 
}

void ft_print_alphabet(void) {
  char letter;

  letter = 'a';
  while (letter <= 'z') {
    ft_putchar(letter);
    letter++;
  }
}

int main(void) {
  ft_print_alphabet();
  ft_putchar('\n');
  return 0;
}
