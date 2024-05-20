/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rarbrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 07:56:00 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/15 07:51:34 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a, int j)
{
	t_stack	*tmp;

	while (j > 0)
	{
		if (*a == NULL || (*a)->next == NULL)
			return ;
		tmp = *a;
		*a = (*a)->next;
		ft_lstlast(tmp)->next = tmp;
		tmp->next = NULL;
		ft_printf("ra\n");
		j--;
	}
}

void	ft_rb(t_stack **b, int j)
{
	t_stack	*tmp;

	while (j > 0)
	{
		if (*b == NULL || (*b)->next == NULL)
			return ;
		tmp = *b;
		*b = (*b)->next;
		ft_lstlast(tmp)->next = tmp;
		tmp->next = NULL;
		ft_printf("rb\n");
		j--;
	}
}

void	ft_rr(t_stack **a, t_stack **b, int j)
{
	t_stack	*b_last;
	t_stack	*a_last;

	if (*a == NULL || ((*a)->next) == NULL || *b == NULL
		|| ((*b)->next) == NULL)
		return ;
	while (j > 0)
	{
		if (*a != NULL && (*a)->next != NULL)
		{
			a_last = *a;
			*a = (*a)->next;
			ft_lstlast(a_last)->next = a_last;
			a_last->next = NULL;
		}
		if (*b != NULL && (*b)->next != NULL)
		{
			b_last = *b;
			*b = (*b)->next;
			ft_lstlast(b_last)->next = b_last;
			b_last->next = NULL;
			ft_printf("rr\n");
		}
		j--;
	}
}

void	ft_rra(t_stack **a, int j)
{
	t_stack	*tmp;
	int		i;

	while (j > 0)
	{
		if (*a == NULL || (*a)->next == NULL)
			return ;
		i = 0;
		tmp = *a;
		while ((*a)->next)
		{
			*a = (*a)->next;
			i++;
		}
		(*a)->next = tmp;
		while (i > 1)
		{
			tmp = tmp->next;
			i--;
		}
		tmp->next = NULL;
		ft_printf("rra\n");
		j--;
	}
}

void	ft_rrb(t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	while (j > 0)
	{
		if (*b == NULL || (*b)->next == NULL)
			return ;
		i = 0;
		tmp = *b;
		while ((*b)->next)
		{
			i++;
			*b = (*b)->next;
		}
		(*b)->next = tmp;
		while (i > 1)
		{
			tmp = tmp->next;
			i--;
		}
		tmp->next = NULL;
		ft_printf("rrb\n");
		j--;
	}
}
