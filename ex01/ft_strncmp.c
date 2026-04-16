/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:23:46 by casampai          #+#    #+#             */
/*   Updated: 2026/04/16 16:20:40 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (*s1 && *s2 && *s1 == *s2 && count < n)
	{
		s1++;
		s2++;
		count++;
	}
	if (count == n)
		return (0);
	return (*s1 - *s2);
}
