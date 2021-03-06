/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:19:49 by yismaili          #+#    #+#             */
/*   Updated: 2022/04/06 01:01:17 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# define MAX_INT 2147483647
# define MIN_INT -2147483648
# define BUFFER_SIZE	1000

typedef struct s_stack
{
	long int		content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*stack_end_a;
	t_stack	*stack_end_b;
	t_stack	*temp;
	char	**splited;
	int		min;
	int		max;
	int		index_min;
	int		index_max;
	int		min_getf;
	int		gitf_index;
	int		gits_index;
	int		mx;
	int		len_temp;
}	t_data;

void		ft_create_stack(t_data *data, char **splt);
void		ft_die(char *str);
int			ft_sa_move(t_data *ptr, char c);
int			ft_sb_move(t_data *ptr, char c);
int			ft_rra_move(t_data *ptr, char c);
int			ft_rrb_move(t_data *ptr, char c);
int			ft_pa_move(t_data *ptr, char c);
int			ft_pb_move(t_data *ptr, char c);
int			ft_ra_move(t_data *ptr, char c);
int			ft_rb_move(t_data *ptr, char c);
void		ft_smoll_two(t_data *ptr);
int			ft_get_min(t_data *ptr);
int			check_sorted(t_stack *stack, int mode);
int			ft_smoll_sort(t_data *ptr);
int			ft_len_stack(t_data *ptr);
void		t_sort_temp(t_data *ptr);
int			len_temp(t_data *ptr);
int			get_frst_index(t_data *ptr);
int			get_scnd_index(t_data *ptr);
int			ft_comparet(t_data *ptr);
void		ft_create_temp(t_data *data);
int			ft_get_max(t_data *ptr);
int			check(t_stack *stack, int mode);
int			ft_push_to_a(t_data *ptr);
void		ft_rr_move(t_data *ptr);
int			get_frst_big_index(t_data *ptr);
int			get_scnd_big_index(t_data *ptr);
int			ft_comparet_big(t_data *ptr);
void		ft_free_stack_a(t_data *ptr);
void		ft_free_stack_temp(t_data *ptr);
int			check_dup( char **number);
void		ft_putstr_fd(char *s, int fd);
size_t		ft_strlen(const char *s);
void		ft_sort_temp(t_data *ptr);
long int	ft_atoi(const char *str);
void		ft_ss_move(t_data *ptr);
void		ft_rrr_move(t_data *ptr);
void		ft_scnd_smoll_sort(t_data *ptr);
void		check_args(char **splited);
void		ft_comparet_utils(t_data *ptr, t_stack *node, int i, int len);
void		ft_comparet_util(t_data *ptr, t_stack *node, int i, int len);
char		*ft_itoa(int n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			check_max_min(char *number, char *max, char *min);
void		arg_is_int(char **argv);
char		*get_next_line(int fd);
char		*ft_read(int fd, char *left_str);
size_t		ft_strlenn(char *s);
char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *left_str, char *buff);
char		*ft_next_str(char *left_str);
char		*ft_get_line(char *left_str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_lenwrd(const char *s, char c);
void		*ft_free(char **dest, int j);
char		**ft_checkalocc(char **dest, const char *s, char c);
char		**ft_split(char const *s, char c);
char		**ft_splited(char **argv);
#endif
