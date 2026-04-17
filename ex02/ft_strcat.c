/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:23:39 by casampai          #+#    #+#             */
/*   Updated: 2026/04/17 14:47:00 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_src = src;
	ptr_dest = dest;
	while (*ptr_dest)
		ptr_dest++;
	while (*ptr_src)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return (dest);
}
