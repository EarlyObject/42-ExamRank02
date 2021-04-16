/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:28:44 by asydykna          #+#    #+#             */
/*   Updated: 2021/04/16 14:56:21 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int
	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*str++)
		i++;
	return (i);
}

char
	*ft_strjoin(char *str1, char *str2)
{
	char	*result;
	int		i;
	int		j;

	if (!str1 || !str2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	free(str1);
	j = 0;
	while (str2[j])
	{
		result[i] = str2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char
	*ft_make_str(int size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	return (str);
}

int
	get_next_line(char **line)
{
	char	*buf;
	int		n;

	buf = (char *)malloc(sizeof(char) * 2);
	if (!line || read(0, buf, 0) < 0)
		return (-1);
	*line = ft_make_str(0);
	n = 0;
	while ((n = read(0, buf, 1)))
	{
		if (n < 0)
			return (-1);
		if (buf[0] == '\n')
		{
			free(buf);
			return (1);
		}
		buf[n] = '\0';
		*line = ft_strjoin(*line, buf);
	}
	free(buf);
	return (0);
}
