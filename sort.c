/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:46:33 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/20 06:19:38 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tiny_sort(t_stack **a)
{
	t_stack	*f;
	t_stack	*m;
	t_stack	*l;

	f = *a;
	m = (*a)->next;
	l = (*a)->next->next;
	if (m->num > f->num && m->num > l->num && f->num < l->num)
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}
	else if (m->num < f->num && m->num < l->num && f->num < l->num)
		ft_sa(a, 1);
	else if (m->num > f->num && m->num > l->num && f->num > l->num)
		ft_rra(a, 1);
	else if (m->num < f->num && m->num < l->num && f->num > l->num)
		ft_ra(a, 1);
	else if (m->num < f->num && m->num > l->num)
	{
		ft_ra(a, 1);
		ft_sa(a, 1);
	}
}
