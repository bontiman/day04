/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:07:47 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/24 08:13:03 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	 if(nb == 0 || nb == 1)
		 return(1);
	 return(nb*ft_recursive_factorial(nb-1));
}

//int	main()
//{
//	int n,b;
//	n = 0;
//	b = ft_recursive_factorial(n);
//	printf("%d",b);
//	return(0);
//}
