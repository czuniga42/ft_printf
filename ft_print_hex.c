/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czuniga- <czuniga-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:34:02 by czuniga-          #+#    #+#             */
/*   Updated: 2025/02/10 15:08:20 by czuniga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, char format)
{
	char	*hex_lower;
	char	*hex_upper;
	int		len;
	char	*digits;

	len = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (format == 'x')
		digits = hex_lower;
	else
		digits = hex_upper;
	if (n >= 16)
		len += ft_print_hex(n / 16, format);
	len += write(1, &digits[n % 16], 1);
	return (len);
}
