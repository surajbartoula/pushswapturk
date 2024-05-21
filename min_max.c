/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 10:55:40 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 11:00:53 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *lst)
{
	int	num;

	num = lst->num;
	while (lst)
	{
		if (lst->num < num)
			num = lst->num;
		lst = lst->next;
	}
	return (num);
}

int	ft_max(t_stack *lst)
{
	int	num;

	num = lst->num;
	while (lst)
	{
		if (lst->num > num)
			num = lst->num;
		lst = lst->next;
	}
	return (num);
}

int	ft_min_arr(int *arr, int len)
{
	int	i;
	int	min;

	i = 0;
	min = arr[0];
	while (i < len)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return (min);
}
