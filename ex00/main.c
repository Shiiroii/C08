/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:21:34 by liulm             #+#    #+#             */
/*   Updated: 2024/07/30 17:29:41 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main()
{
	int	test1 = 2;
	int	test2 = 4;
	int	ptr1;
	int	ptr2;

	ptr1 = test1;
	ptr2 = test2;

	ft_putchar('c');
	ft_swap(&ptr1, &ptr2);
	ft_putstr("Salut");
	ft_strlen("Salut");
	ft_strcmp("Salut", "salut");
}
