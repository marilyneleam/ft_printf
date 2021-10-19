/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:23:59 by mleam             #+#    #+#             */
/*   Updated: 2021/08/23 17:24:03 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_printf_string(const char *str, va_list pt_arg)
{
	str = va_arg(pt_arg, char *);
	if (str == NULL)
		str = "(null)";
	ft_putstr(str);
	return (ft_strlen(str));
}
