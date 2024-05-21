/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_amount_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:00:27 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 04:55:32 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rarb_b(t_stack *a, t_stack *b, int num)
{
	if (ft_find_place_b(b, num) < ft_find_index(a, num))
		return (ft_find_index(a, num));
	else
		return (ft_find_place_b(b, num));
}

int	rrarrb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	if (ft_find_place_b(b, num) > 0)
		i = ft_lstsize(b) - ft_find_place_b(b, num);
	else
		i = 0;
	if ((i < (ft_lstsize(a) - ft_find_index(a, num))) && ft_find_index(a, num))
		return (ft_lstsize(a) - ft_find_index(a, num));
	else
		return (i);
}

int	rarrb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	if (ft_find_place_b(b, num) > 0)
		i = ft_lstsize(b) - ft_find_place_b(b, num);
	else
		i = 0;
	return (ft_find_index(a, num) + i);
}

int	rrarb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	if (ft_find_index(a, num) > 0)
		i = ft_lstsize(a) - ft_find_index(a, num);
	else
		i = 0;
	return (ft_find_place_b(b, num) + i);
}
