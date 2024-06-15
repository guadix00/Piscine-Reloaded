/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:35:32 by gualvare          #+#    #+#             */
/*   Updated: 2024/06/08 17:55:01 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				ft_putchar(argv[i][x]);
				x++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
