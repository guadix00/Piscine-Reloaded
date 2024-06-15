/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:20:00 by gualvare          #+#    #+#             */
/*   Updated: 2024/06/08 14:44:06 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
/*int main(void)
{
	int nb;

	nb = 5;
	printf("%i", ft_iterative_factorial(nb));
}
*/
