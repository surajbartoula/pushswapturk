/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_amount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:55:33 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/19 11:13:49 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rarb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = ft_find_place_a(a, num);
	if (i < ft_find_index(b, num))
		i = ft_find_index(b, num);
	return (i);
}

int	rrarrb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, num))
		i = ft_lstsize(a) - ft_find_place_a(a, num);
	if (ft_find_index(b, num) && (i < (ft_lstsize(b) - ft_find_index(b, num))))
		i = ft_lstsize(b) - ft_find_index(b, num);
	return (i);
}

int	rarrb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_index(b, num))
		i = ft_lstsize(b) - ft_find_index(b, num);
	i = ft_find_place_a(a, num) + i;
	return (i);
}

int	rrarb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, num))
		i = ft_lstsize(a) - ft_find_place_a(a, num);
	i = ft_find_index(b, num) + i;
	return (i);
}
