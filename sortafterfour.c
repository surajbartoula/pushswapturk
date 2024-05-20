/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortafterfour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:40:40 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/19 16:41:15 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void print_stack(t_stack *stack, const char *name) {
    if (stack == NULL) {
        printf("%s is empty\n", name);
        return;
    }

    printf("Contents of stack %s:\n", name);
    while (stack != NULL) {
        printf("%d -> ", stack->num);
        stack = stack->next;
    }
    printf("NULL\n");
}

void	b_till_3(t_stack **a, t_stack **b)
{
	t_stack	*stacka;
	int		i;

	while (!stack_sorted(*a) && ft_lstsize(*a) > 3)
	{
		stacka = *a;
		i = rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == rarb_b(*a, *b, stacka->num))
				i = do_rarb(a, b, stacka->num, 'a');
			else if (i == rrarrb_b(*a, *b, stacka->num))
				i = do_rrarrb(a, b, stacka->num, 'a');
			else if (i == rarrb_b(*a, *b, stacka->num))
				i = do_rarrb(a, b, stacka->num, 'a');
			else if (i == rrarb_b(*a, *b, stacka->num))
				i = do_rrarb(a, b, stacka->num, 'a');
			else
				stacka = stacka->next;
		}
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
		while (i >= 0)
		{
			if (i == rarb_a(*a, *b, stackb->num))
				i = do_rarb(a, b, stackb->num, 'b');
			else if (i == rarrb_a(*a, *b, stackb->num))
				i = do_rarrb(a, b, stackb->num, 'b');
			else if (i == rrarrb_a(*a, *b, stackb->num))
				i = do_rrarrb(a, b, stackb->num, 'b');
			else if (i == rrarb_a(*a, *b, stackb->num))
				i = do_rrarb(a, b, stackb->num, 'b');
			else
				stackb = stackb->next;
		}
	}
	return (a);
}

void	sort_after_four(t_stack **a, t_stack **b)
{
	int	i;

	b = ft_sort_b(a, b);
	print_stack(*b, "b");
	a = ft_sort_a(a, b);
	print_stack(*a, "a");
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
