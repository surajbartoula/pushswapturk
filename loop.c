/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 05:25:56 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 05:53:07 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_loop_a(int i, t_stack **a, t_stack **b, t_stack *stacka)
{
	while (stacka)
	{
		if (i == rarb_b(*a, *b, stacka->num))
		{
			do_rarb(a, b, stacka->num, 'a');
			break ;
		}
		else if (i == rrarrb_b(*a, *b, stacka->num))
		{
			do_rrarrb(a, b, stacka->num, 'a');
			break ;
		}
		else if (i == rarrb_b(*a, *b, stacka->num))
		{
			do_rarrb(a, b, stacka->num, 'a');
			break ;
		}
		else if (i == rrarb_b(*a, *b, stacka->num))
		{
			do_rrarb(a, b, stacka->num, 'a');
			break ;
		}
		else
			stacka = stacka->next;
	}
}

void	ft_loop_b(int i, t_stack **a, t_stack **b, t_stack *stackb)
{
	while (stackb)
	{
		if (i == rarb_a(*a, *b, stackb->num))
		{
			do_rarb(a, b, stackb->num, 'b');
			break ;
		}
		else if (i == rarrb_a(*a, *b, stackb->num))
		{
			do_rarrb(a, b, stackb->num, 'b');
			break ;
		}
		else if (i == rrarrb_a(*a, *b, stackb->num))
		{
			do_rrarrb(a, b, stackb->num, 'b');
			break ;
		}
		else if (i == rrarb_a(*a, *b, stackb->num))
		{
			do_rrarb(a, b, stackb->num, 'b');
			break ;
		}
		else
			stackb = stackb->next;
	}
}
