/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:54:31 by pabonnin          #+#    #+#             */
/*   Updated: 2016/11/14 17:06:15 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;
	char	*str1;
	char	*str2;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 || !str2)
		return (NULL);
	dest = (char *)malloc(sizeof(char) *
			(ft_strlen(str1) + ft_strlen(str2) + 1));
	if (dest == NULL)
		return (NULL);
	while (str1[i] != '\0')
		dest[j++] = str1[i++];
	i = 0;
	while (str2[i] != '\0')
		dest[j++] = str2[i++];
	dest[j] = '\0';
	return (dest);
}
