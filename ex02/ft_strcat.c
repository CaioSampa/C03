/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:23:39 by casampai          #+#    #+#             */
/*   Updated: 2026/04/16 17:29:14 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strcat(char *dest, char *src)
{
	char	*ptr_dest;
	char	*ptr_src;
	int		size;

	ptr_dest = dest;
	ptr_src = src;
	size = sizeof(dest) / sizeof(dest[0])
	while (*ptr_src)
	{
		ptr_dest[size-1]
	}
}

