/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortafterfour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:40:40 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 05:55:10 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_till_3(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*stacka;

	while (ft_lstsize(*a) > 3 && !stack_sorted(*a))
	{
		stacka = *a;
		i = rotate_type_ab(*a, *b);
		ft_loop_a(i, a, b, stacka);
	}
}

t_stack	**ft_sort_b(t_stack **a, t_stack **b)
{
	if (!stack_sorted(*a) && ft_lstsize(*a) > 3)
	{
		ft_pb(a, b, 2);
		b_till_3(a, b);
		ft_tiny_sort(a);
	}
	return (b);
}

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*stackb;

	while (*b)
	{
		stackb = *b;
		i = rotate_type_ba(*a, *b);
		ft_loop_b(i, a, b, stackb);
	}
	return (a);
}

void	sort_after_four(t_stack **a, t_stack **b)
{
	int	i;

	b = ft_sort_b(a, b);
	a = ft_sort_a(a, b);
	i = ft_find_index(*a, ft_min(*a));
	if (i < ft_lstsize(*a) - i)
	{
		while ((*a)->num != ft_min(*a))
			ft_ra(a, 1);
	}
	else
	{
		while ((*a)->num != ft_min(*a))
			ft_rra(a, 1);
	}
}
