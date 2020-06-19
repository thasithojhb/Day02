/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasitho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:54:21 by thasitho          #+#    #+#             */
/*   Updated: 2020/06/19 15:50:08 by thasitho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char ltr)
{
write(1, &ltr, 1);
return 0;
}

void ft_is_negative(int n)
{
while(n<0)
{
ft_putchar('N');
ft_putchar('\n');
break;
}
while(n>0)
{
ft_putchar('P');
ft_putchar('\n');
break;
}
}
	
