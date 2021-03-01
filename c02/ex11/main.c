/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:07:00 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/01 18:21:42 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char *string;
	
	string = "Coucou€tu vas bien ?";
	ft_putstr_non_printable(string);
}
