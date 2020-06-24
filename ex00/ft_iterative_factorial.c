/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:27:06 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/24 08:03:02 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i,f;

	if(nb == 0 || nb  == 1)
		return(1);
	i = 1;
	f = nb;
	while(i < nb)
	{
		f=f*i;
		i++;
	}
	return(f);
}

// int	main()
//{
//	int n,b;
//	n = 5;
//	b = ft_iterative_factorial(n);
//	printf("%d",b);
//	return(0);
//}
