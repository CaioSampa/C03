/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:10:48 by casampai          #+#    #+#             */
/*   Updated: 2026/04/19 15:24:04 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ps;
	char	*pf;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		ps = str;
		pf = to_find;
		while (*ps && *pf && *ps == *pf)
		{
			ps++;
			pf++;
		}
		if (*pf == '\0')
			return (str);
		str++;
	}
	return (0);
}
