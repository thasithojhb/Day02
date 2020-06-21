/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasitho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:57:20 by thasitho          #+#    #+#             */
/*   Updated: 2020/06/21 10:48:36 by thasitho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
write(1, &c, 1);
return 0;
}

void ft_print_comb(void)
{
char a;
char b;
char c;
a = '0';
while(a<='7')
{
b=a+1;
while(b<='8')
{
c=b+1;
while(c<='9')
{
ft_putchar(a);
ft_putchar(b);
ft_putchar(c);
ft_putchar(',');
ft_putchar(' ');
c++;
}
b++;
}
a++;
}
}
int main()
{
ft_print_comb();
return 0;
}
