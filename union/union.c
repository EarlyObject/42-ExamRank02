/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:20:59 by asydykna          #+#    #+#             */
/*   Updated: 2021/04/15 13:15:46 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	arr[256] = {0};
	int	i;
	int	j;
	int	k;

	if (argc == 3)
	{
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				k = argv[i][j];
				if (arr[k] == 0)
					arr[k] = 1;
				j++;
			}
			i++;
		}
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				k = argv[i][j];
				if (arr[k] == 1)
				{
					ft_putchar(k);
					arr[k] = 0;
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
