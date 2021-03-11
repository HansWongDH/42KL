/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:40:31 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 17:47:46 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str		*ft_strs_to_tab(int ac, char **av);
void					ft_show_tab(struct s_stock_str *par);

int					main(void)

{

		int					index;
		int					ac;
		char				**av;
		struct s_stock_str	*structs;
			ac = 10;
			av = (char **)malloc((ac + 1) * sizeof(char *));
			index = 0;
			while (index < ac)
			{
				av[index] = (char *)malloc((2 + 1) * sizeof(char));
				av[index][0] = 'x';
				av[index][1] = (char)(index + 'a');
				av[index][2] = '\0';
				index++;
			}
			structs = ft_strs_to_tab(ac, av);
			index = 0;
			while (index < ac)
			{
				printf("%d\n", index);
				printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
				printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
				printf("\t|     size : %d\n", structs[index].size);
				index++;
			}
			printf("---- SHOW TAB\n");
			ft_show_tab(structs);
}
