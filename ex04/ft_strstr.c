/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:10:48 by casampai          #+#    #+#             */
/*   Updated: 2026/04/18 00:35:05 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	// size do tofind para comparar com as ocorrencias de cada caractere ser igual
	// enquanto a str estiver sendo lida ele procura os caracteres do tofind verica com str e se forem igual acrescenta +1 para validar com o tamanho posteriormente
	int		len_to_find;
	char	*ptr_str;
	int		count;
	// int de index da primeira ocorrencia
	len_to_find = 0;
	ptr_str = str;
	count = 0;
	while (*(to_find + len_to_find))
		len_to_find++;
	while (*(ptr_str + count))
	{
		// if(*ptr_str)
	}
}
