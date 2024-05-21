/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:52:20 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 14:29:40 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cheapest_cost_ba(t_stack **a, t_stack **b, int num)
{
	int	arr[5];

	arr[0] = rrarrb_a(*a, *b, num);
	arr[1] = rarb_a(*a, *b, num);
	arr[2] = rrarrb_a(*a, *b, num);
	arr[3] = rarrb_a(*a, *b, num);
	arr[4] = rrarb_a(*a, *b, num);
	return (ft_min_arr(arr, 5));
}

int	rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	int		current_cost;
	t_stack	*bstack;

	bstack = b;
	i = cheapest_cost_ba(&a, &b, bstack->num);
	while (bstack)
	{
		current_cost = cheapest_cost_ba(&a, &b, bstack->num);
		if (i > current_cost)
			i = current_cost;
		bstack = bstack->next;
	}
	return (i);
}

int	cheapest_cost(t_stack **a, t_stack **b, int num)
{
	int	arr[5];

	arr[0] = rrarrb_b(*a, *b, num);
	arr[1] = rarb_b(*a, *b, num);
	arr[2] = rrarrb_b(*a, *b, num);
	arr[3] = rarrb_b(*a, *b, num);
	arr[4] = rrarb_b(*a, *b, num);
	return (ft_min_arr(arr, 5));
}

int	rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	int		current_cost;
	t_stack	*astack;

	astack = a;
	i = cheapest_cost(&a, &b, astack->num);
	while (astack)
	{
		current_cost = cheapest_cost(&a, &b, astack->num);
		if (i > current_cost)
			i = current_cost;
		astack = astack->next;
	}
	return (i);
}
