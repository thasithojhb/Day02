/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasitho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:14:13 by thasitho          #+#    #+#             */
/*   Updated: 2020/06/21 14:33:25 by thasitho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char nbr)
{
write(1, &nbr, 1);
return 0;

}

void ft_print_number(void)
{
char nbr = '0';	
while(nbr <= '9')
{
ft_putchar(nbr);
nbr++;
}

}

