/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:23:39 by casampai          #+#    #+#             */
/*   Updated: 2026/04/16 18:08:14 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr_dest;
	char	*ptr_src;
	int		size;

	ptr_src = src;
	size = sizeof(dest) - 1;
	while(*ptr_dest)
		ptr_dest++;
	while (*ptr_src)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return dest;
}

int	main(void)
{
	char string1[] = "42";
	char string2[] = "NetWork";
	char * str = ft_strcat(string1, string2);
	return (0);
}