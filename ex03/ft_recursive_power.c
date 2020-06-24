/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:54:39 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/24 10:51:42 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb,int power)
{
	if(power == 0)
	{
		return (1);
	}
	else if(power < 0)
	{
		return (0);
	}
	else
	{
		return (nb*ft_recursive_power(nb,power -1));
	}
}

//int	main()
//{
//	printf("%d\n", ft_recursive_power(8,2));
//	return 0;
//}
