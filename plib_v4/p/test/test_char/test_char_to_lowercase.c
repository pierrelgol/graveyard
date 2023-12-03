/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_char_to_lowercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 10:49:30 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/12/02 10:49:31 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../build/plib_test.h"

int	test_char_to_lowercase(void)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < 128)
	{
		if (char_to_lowercase(asciiTable[i]) == (i + 32))
			++count;
		++i;
	}
	test_print_verbose_start((char *) __FUNCTION__);
	test_print_verbose_test("test1", count == 26);
	test_print_verbose_end();
	return (count == 256);
}
