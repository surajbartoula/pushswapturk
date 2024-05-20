/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:52:20 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/20 03:53:00 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*bstack;

	bstack = b;
	i = rrarrb_a(a, b, b->num);
	while (bstack)
	{
		if (i > rarb_a(a, b, bstack->num))
			i = rarb_a(a, b, bstack->num);
		if (i > rrarrb_a(a, b, bstack->num))
			i = rrarrb_a(a, b, bstack->num);
		if (i > rarrb_a(a, b, bstack->num))
			i = rarrb_a(a, b, bstack->num);
		if (i > rrarb_a(a, b, bstack->num))
			i = rrarb_a(a, b, bstack->num);
		bstack = bstack->next;
	}
	return (i);
}

int	rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*astack;

	astack = a;
	i = rrarrb_b(a, b, a->num);
	while (astack)
	{
		if (i > rarb_b(a, b, astack->num))
			i = rarb_b(a, b, astack->num);
		if (i > rrarrb_b(a, b, astack->num))
			i = rrarrb_b(a, b, astack->num);
		if (i > rarrb_b(a, b, astack->num))
			i = rarrb_b(a, b, astack->num);
		if (i > rrarb_b(a, b, astack->num))
			i = rrarb_b(a, b, astack->num);
		astack = astack->next;
	}
	return (i);
}
