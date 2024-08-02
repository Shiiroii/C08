/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:35:13 by liulm             #+#    #+#             */
/*   Updated: 2024/08/03 01:18:10 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		lensrc;
	char	*dup;

	i = 0;
	lensrc = ft_strlen(src);
	dup = (char *)malloc((sizeof(char) * lensrc) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*array;
	int					i;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

// ---------------------------------------------------

/*#include <stdio.h>

int	main(int ac, char **av)
{
	int					i;
	struct s_stock_str	*str;

	i = 0;
	str = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		printf("%d\n", i);
		printf("%s\n", str[i].str);
		printf("%s\n", str[i].copy);
		printf("%d\n", str[i].size);
		i++;
	}
}*/
