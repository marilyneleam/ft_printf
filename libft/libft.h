/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 05:01:33 by mleam             #+#    #+#             */
/*   Updated: 2021/08/23 14:40:49 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strrev(char *str);
char	*ft_strdup(const char *str);
char	*ft_itoa_base(long value, char *base);
char	*ft_ultoa_base(unsigned long value, char *base);
void	ft_putchar(const char c);
void	ft_putstr(const char *str);

#endif
