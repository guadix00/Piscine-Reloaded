/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:42:42 by gualvare          #+#    #+#             */
/*   Updated: 2024/06/08 14:45:31 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
		return (0);
	if (nbl == 0 || nbl == 1)
		return (1);
	else
		return (nbl * ft_recursive_factorial(nbl - 1));
}
/*int main(void)
{
	int nb = 4;

	printf("%i", ft_recursive_factorial(nb));
}
*/
