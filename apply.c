/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:10:08 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/20 05:33:22 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_rarb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != num && ft_find_place_b(*b, num) > 0)
			ft_rr(a, b, 1);
		while ((*a)->num != num)
			ft_ra(a, 1);
		while (ft_find_place_b(*b, num) > 0)
			ft_rb(b, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		while ((*b)->num != num && ft_find_place_a(*a, num) > 0)
			ft_rr(a, b, 1);
		while ((*b)->num != num)
			ft_rb(b, 1);
		while (ft_find_place_a(*a, num) > 0)
			ft_ra(a, 1);
		ft_pa(a, b, 1);
	}
	return (-1);
}

int	do_rrarrb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != num && ft_find_place_b(*b, num) > 0)
			ft_rrr(a, b, 1);
		while ((*a)->num != num)
			ft_rra(a, 1);
		while (ft_find_place_b(*b, num) > 0)
			ft_rrb(b, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		while ((*b)->num != num && ft_find_place_a(*a, num) > 0)
			ft_rrr(a, b, 1);
		while ((*b)->num != num)
			ft_rrb(b, 1);
		while (ft_find_place_a(*a, num) > 0)
			ft_rra(a, 1);
		ft_pa(a, b, 1);
	}
	return (-1);
}

int	do_rrarb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != num)
			ft_rra(a, 1);
		while (ft_find_place_b(*b, num) > 0)
			ft_rb(b, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		while (ft_find_place_a(*a, num) > 0)
			ft_rra(a, 1);
		while ((*b)->num != num)
			ft_rb(b, 1);
		ft_pa(a, b, 1);
	}
	return (-1);
}

int	do_rarrb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->num != num)
			ft_ra(a, 1);
		while (ft_find_place_b(*b, num) > 0)
			ft_rrb(b, 1);
		ft_pb(a, b, 1);
	}
	else
	{
		while (ft_find_place_a(*a, num) > 0)
			ft_ra(a, 1);
		while ((*b)->num != num)
			ft_rrb(b, 1);
		ft_pa(a, b, 1);
	}
	return (-1);
}
