/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:10:48 by casampai          #+#    #+#             */
/*   Updated: 2026/04/18 17:08:06 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		ptr_str = str;
		ptr_to_find = to_find;
		while (ptr_str && ptr_to_find && *ptr_str == *ptr_to_find)
		{
			ptr_str++;
			ptr_to_find++;
		}
		if (*ptr_to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
