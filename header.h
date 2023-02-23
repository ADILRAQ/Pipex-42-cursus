/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:08:23 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/23 19:20:41 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <fcntl.h>
# include <errno.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/*  <-- PIPEX -->  */

typedef struct s_info
{
	int		fd[2];
	int		in_fd;
	int		out_fd;
	char	*check_path;
	char	*bin_path1;
	char	*bin_path2;
	char	**cmd1;
	char	**cmd2;
}	t_info;

t_info		*return_info(char **env, char **av);
void		ft_free(t_info **all);
void		exec_cmds(t_info **all);
void		ft_check(t_info **all, char *str);
void		ft_free_2d(char **str);

/*  <-- BONUS -->  */

// typedef struct s_list
// {
// 	char			**cmd;
// 	char			*bin_path;
// 	int				pid;
// 	struct s_list	*next;
// }	t_list;


/*  <-- PRINTF -->  */

int			ft_printf(const char *str, ...);
int			ft_putpointer(unsigned long nb);
void		ft_put_hex(int c, int *i, unsigned int nb);

/*  <-- LIBFT -->  */

int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		**ft_split(char const *s, char c);
void		*ft_memcpy(void *dst, const void *src, size_t n);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *s);
int			ft_putchar(char c);
int			ft_putnbr_length(int n);
int			ft_putstr(char *s);
char		*ft_strdup(const char *s1);


#endif