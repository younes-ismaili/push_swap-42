/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:06:33 by yismaili          #+#    #+#             */
/*   Updated: 2022/04/05 21:21:57 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 1 || argc <= 2)
		exit(1);
	check_dup(argv, argc -1);
	//check_max_min(argv, argc -1);
	if (argv[1][1] == 32 || (argv[1][1] >= 9 && argv[1][1] <= 13))
		ft_die("Error \n");
	ft_create_stack(&data, argc, argv);
	if (argc -1 < 10)
		ft_smoll_sort(&data);
	else
	{
		ft_create_temp(&data);
		ft_sort_temp(&data);
		while (data.stack_a->next != NULL)
		{
			if (argc -1 < 300)
				ft_comparet(&data);
			if (argc -1 >= 300)
				ft_comparet_big(&data);
			ft_create_temp(&data);
			ft_sort_temp(&data);
		}
			//	exit(1);
		ft_free_stack_temp(&data);
		ft_push_to_a(&data);
		ft_free_stack_a(&data);
	}
	//while (1);
	return (0);
}
