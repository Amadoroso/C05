/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:58:58 by apinho-a          #+#    #+#             */
/*   Updated: 2025/08/16 19:58:28 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	i = 1;
	while (i < nb)
	{
		if (nb % i == 0 && i != 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	res;

	if (nb == 0 || nb == 1 || nb < 0)
		nb = 2;
	res = ft_is_prime(nb);
	if (res == 1)
		return (nb);
	i = 1;
	while (nb % i == 0)
	{
		nb++;
		i++;
	}
	return (nb);
}

/* int	main()
{
	printf("%d", ft_find_next_prime(-2));
	return (0);
} */