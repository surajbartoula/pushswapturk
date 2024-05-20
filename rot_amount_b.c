/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_amount_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:00:27 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/19 11:15:37 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rarb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = ft_find_place_b(b, num);
	if (i < ft_find_index(a, num))
		i = ft_find_index(a, num);
	return (i);
}

int	rrarrb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, num))
		i = ft_lstsize(b) - ft_find_place_b(b, num);
	if (ft_find_index(a, num) && (i < (ft_lstsize(a) - ft_find_index(a, num))))
		i = ft_lstsize(a) - ft_find_index(a, num);
	return (i);
}

int	rarrb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, num))
		i = ft_lstsize(b) - ft_find_place_b(b, num);
	i = ft_find_index(a, num) + i;
	return (i);
}

int	rrarb_b(t_stack *a, t_stack *b, int num)
{
	int	i;

	i = 0;
	if (ft_find_index(a, num))
		i = ft_lstsize(a) - ft_find_index(a, num);
	i = ft_find_place_b(b, num) + i;
	return (i);
}
