/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 08:34:18 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/03 08:50:56 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_printable(char *c)
{
	if (*c >= 32 && *c < 127)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *add;
	
	*add = (char *)addr;
	while (*add != '\0')
	{
		ft_is_printable(*add)
	}
}
