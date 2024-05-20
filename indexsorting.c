/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexsorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:08:36 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/18 19:41:56 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[low];
	i = low;
	j = high;
	while (i < j)
	{
		while (arr[i] <= pivot && i <= high - 1)
			i++;
		while (arr[j] > pivot && j >= low + 1)
			j--;
		if (i < j)
			ft_swap(&arr[i], &arr[j]);
	}
	ft_swap(&arr[low], &arr[j]);
	return (j);
}

void	ft_quicksort(int *arr, int low, int high)
{
	int	partindex;

	if (low < high)
	{
		partindex = partition(arr, low, high);
		ft_quicksort(arr, low, partindex - 1);
		ft_quicksort(arr, partindex + 1, high);
	}
}

void	fill_a_index(t_stack **a, int *sortedarray, int len)
{
	int		i;
	t_stack	*current;

	i = 0;
	while (i < len)
	{
		current = *a;
		while (current)
		{
			if (sortedarray[i] == current->num)
			{
				current->p_index = i + 1;
				i++;
				break ;
			}
			else
				current = current->next;
		}
	}
}

int	*getarray(t_stack **a, int len)
{
	t_stack	*temp;
	int		*arr;
	int		i;

	if (*a == NULL)
		return (0);
	temp = *a;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	i = 0;
	while (temp != NULL)
	{
		arr[i] = temp->num;
		temp = temp->next;
		i++;
	}
	return (arr);
}

void	fill_postion_index(t_stack **a)
{
	int		*sortedarray;
	int		len;

	len = ft_lstsize(*a);
	sortedarray = getarray(a, len);
	if (arr_sorted(sortedarray, len))
	{
		ft_free_stack(a);
		free(sortedarray);
		exit(0);
	}
	else
		ft_quicksort(sortedarray, 0, len - 1);
	fill_a_index(a, sortedarray, len);
	free(sortedarray);
}
