/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_character_percent.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:16:59 by mleam             #+#    #+#             */
/*   Updated: 2021/08/18 12:33:14 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_printf_character_percent(const char *str, va_list pt_arg)
{
	int	character;

	if (*str == 'c' || *str == '%')
	{
		if (*str == 'c')
		{
			character = va_arg(pt_arg, int);
			ft_putchar(character);
		}
		else
			ft_putchar('%');
	}
	return (1);
}
