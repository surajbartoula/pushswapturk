/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:15:29 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/20 06:26:26 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_stack *a, int num)
{
	int	i;

	i = 0;
	while (a->num != num)
	{
		i++;
		a = a->next;
	}
	a->p_index = 0;
	return (i);
}

int	ft_find_place_b(t_stack *b, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push > b->num && nbr_push < ft_lstlast(b)->num)
		i = 0;
	else if (nbr_push > ft_max(b) || nbr_push < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->num < nbr_push || tmp->num > nbr_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *a, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push < a->num && nbr_push > ft_lstlast(a)->num)
		i = 0;
	else if (nbr_push > ft_max(a) || nbr_push < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->num > nbr_push || tmp->num < nbr_push)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}
