/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuniga- <czuniga-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:33:18 by czuniga-          #+#    #+#             */
/*   Updated: 2025/02/09 13:25:29 by czuniga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	result;

	len = 0;
	if (n > 9)
		len = len + ft_print_unsigned(n / 10);
	result = (n % 10) + '0';
	len = len + write(1, &result, 1);
	return (len);
}
