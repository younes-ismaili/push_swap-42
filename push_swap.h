/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:19:49 by yismaili          #+#    #+#             */
/*   Updated: 2022/03/03 18:23:21 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_push
{
    int           content;
    struct s_push   *next;
}   t_push;

void    ft_addback(t_push **lst, t_push *newlst);
void    ft_addfront(t_push **lst, t_push *newlst);
t_push  *ft_lstnew(int content);
t_push  *ft_lstlast(t_push *lst);

#endif
