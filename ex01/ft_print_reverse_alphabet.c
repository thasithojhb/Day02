/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasitho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:48:52 by thasitho          #+#    #+#             */
/*   Updated: 2020/06/19 13:11:44 by thasitho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char ltr)
{
    write(1, &ltr, 1);
    return (0);
}	
void ft_print_reverse_alphabet(void)
    {
        char ltr = 'z';
        while(ltr>='a')
            {
               ft_putchar(ltr);
			   ltr--;
            }	
    }
