/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:44:18 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/15 11:51:30 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Outputs the integer ’n’ to the given file descriptor.
*/

#include "libft.h"

static void	ft_digit_fd(int n, int fd)
{
	if (n != 0)
	{
		ft_digit_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
		n = n / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		ft_digit_fd(-(n), fd);
	}
	if (n > 0)
		ft_digit_fd(n, fd);
}
