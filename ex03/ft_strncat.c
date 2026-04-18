/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:54:37 by casampai          #+#    #+#             */
/*   Updated: 2026/04/17 16:10:19 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr_dest;
	char			*ptr_src;
	unsigned int	count;

	ptr_src = src;
	ptr_dest = dest;
	count = 0;
	while (*ptr_dest)
		ptr_dest++;
	while (*ptr_src && count < nb)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		count++;
	}
	*ptr_dest = '\0';
	return (dest);
}
