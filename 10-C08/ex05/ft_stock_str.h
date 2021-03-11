/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:28:22 by wding-ha          #+#    #+#             */
/*   Updated: 2021/03/11 14:53:05 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct		s_stock_str
{
	int			size;
	char		*str;
	char		*copy;
}					t_stock_str;

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
