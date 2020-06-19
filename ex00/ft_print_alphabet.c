/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasitho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:09:10 by thasitho          #+#    #+#             */
/*   Updated: 2020/06/19 13:12:00 by thasitho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int ft_putchar(char ltr)
	{
		write(1, &ltr, 1);
		return 0;
	}

void ft_print_alphabet(void)
    {
        char ltr = 'a';
        while(ltr<='z')
	    {
			ft_putchar(ltr);
			ltr++;
	    }
    }
