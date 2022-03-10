/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:08:26 by yismaili          #+#    #+#             */
/*   Updated: 2022/03/10 16:12:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sa_move(t_data *ptr)
{
	int	temp;

	if (ptr->stack_a && ptr->stack_a->next)
	{
		temp = ptr->stack_a->content;
		ptr->stack_a->content = ptr->stack_a->next->content;
		ptr->stack_a->next->content = temp;
		ft_putstr_fd("sa\n", 1);
		return (1);
	}
	return (0);
}

int ft_sb_move(t_data *ptr)
{
	int	temp;

	if (ptr->stack_b && ptr->stack_b->next)
	{
		temp = ptr->stack_b->content;
		ptr->stack_b->content = ptr->stack_b->next->content;
		ptr->stack_b->next->content = temp;
		ft_putstr_fd("sb\n", 1);
		return (1);
	}
	return (0);
}

int	ft_rra_move(t_data *ptr)
{
	t_stack *temp;

	temp = ptr->stack_a;
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;
	ptr->stack_end_a->next = ptr->stack_a;
	ptr->stack_a = ptr->stack_end_a;	
	ft_putstr_fd("rra\n", 1);
	return (0);
}

int	ft_rrb_move(t_data *ptr)
{
	t_stack	*temp;

	temp = ptr->stack_b;
	while (temp->next->next)
		temp = temp->next;
	temp->next = NULL;
	ptr->stack_end_b->next = ptr->stack_b;
	ptr->stack_b = ptr->stack_end_b;
	ft_putstr_fd("rrb\n", 1);
	return (0);
}