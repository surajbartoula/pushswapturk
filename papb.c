/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   papb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 07:54:27 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/20 05:30:57 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	while (j > 0 && *b != NULL)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
		ft_printf("pa\n");
		j--;
	}
}

void	ft_pb(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;

	if ((*a) == NULL)
		return ;
	while (j > 0 && *a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
		ft_printf("pb\n");
		j--;
	}
}

void	rra_part(t_stack **a)
{
	t_stack	*tmp;
	int		i;

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
}

void	ft_rrr(t_stack **a, t_stack **b, int j)
{
	t_stack	*tmp;
	int		i;

	while (j > 0)
	{
		rra_part(a);
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
		ft_printf("rrr\n");
		j--;
	}
}
