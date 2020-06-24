/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:20:05 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/24 08:48:07 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb,int power)
{
	int i;

	if(power < 0 || power == 0 || nb == 0 || nb == 1)
		return(1);
	i = 1;
	power = nb;
	while(power > 0)
	{
		i = i * nb;
		power--;
	}
	return(i);
}

//int	main()
//{
//	int n,b;
//	n = 3;
//	b = ft_recursive_power(n,b);
//	printf("%d",b);
//	return(0);
//}
