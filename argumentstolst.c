/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argumentstolst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:00:29 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/24 05:08:31 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	argwithtwo(char *argv[], t_stack **a, int index)
{
	char	**string;
	int		i;
	int		numb;

	string = ft_split(argv[index], 32);
	i = -1;
	while (string[++i])
	{
		numb = ft_atoi(string[i]);
		ft_lstadd_back(a, ft_lstnew(numb));
	}
	ft_free(string);
}

void	returnlsta(int argc, char *argv[], t_stack **a)
{
	int		i;

	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		exit(0);
	else if (argc == 2)
		argwithtwo(argv, a, 1);
	else
	{
		i = 0;
		while (++i < argc)
			argwithtwo(argv, a, i);
	}
}
