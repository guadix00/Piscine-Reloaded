/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:10:18 by gualvare          #+#    #+#             */
/*   Updated: 2024/06/08 14:42:50 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int div_result;
	int mod_result;

	ft_div_mod(20, 5, &div_result, &mod_result);
	printf("division %d \n", div_result);
	printf("modulo %d \n", mod_result);
}*/
