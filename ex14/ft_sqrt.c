/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:23:51 by gualvare          #+#    #+#             */
/*   Updated: 2024/06/08 14:46:10 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
/*int main(void)
{
	printf("%i", ft_sqrt(5));
}
*/
