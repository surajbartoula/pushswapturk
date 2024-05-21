/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_amount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:55:33 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 05:02:30 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rarb_a(t_stack *a, t_stack *b, int num)
{
	if (ft_find_place_a(a, num) < ft_find_index(b, num))
		return (ft_find_index(b, num));
	else
		return (ft_find_place_a(a, num));
}

int	rrarrb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	if (ft_find_place_a(a, num) > 0)
		i = ft_lstsize(a) - ft_find_place_a(a, num);
	else
		i = 0;
	if (ft_find_index(b, num) && (i < (ft_lstsize(b) - ft_find_index(b, num))))
		return (ft_lstsize(b) - ft_find_index(b, num));
	else
		return (i);
}

int	rarrb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	if (ft_find_index(b, num) > 0)
		i = ft_lstsize(b) - ft_find_index(b, num);
	else
		i = 0;
	return (ft_find_place_a(a, num) + i);
}

int	rrarb_a(t_stack *a, t_stack *b, int num)
{
	int	i;

	if (ft_find_place_a(a, num) > 0)
		i = ft_lstsize(a) - ft_find_place_a(a, num);
	else
		i = 0;
	return (ft_find_index(b, num) + i);
}
