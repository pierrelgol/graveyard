/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_split_set.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:07:47 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:07:48 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

static int split_words_count(char *str, char *set)
{
	int words;

	words = 0;
	while (*str)
	{
		while (*str && set[(unsigned int) *str] == 1)
			++str;
		while (*str && set[(unsigned int) *str] == 0)
			++str;
		if (set[(unsigned int) *(str - 1)] != 1)
			++words;
	}
	return (words);
}

static char *split_word_create(char *str, char *set)
{
	char *word;
	int   wlen;

	wlen = 0;
	while (str[wlen] && set[(int) str[wlen]] != 1)
		++wlen;
	word = memory_zeroed_alloc(sizeof(char), (wlen + 1));
	if (!word)
		return (0);
	word = string_ncopy(word, str, wlen);
	return (word);
}

char **plib_string_split(char *str, char *charset)
{
	char **result;
	char  *set;
	int    word_count;
	int    index;

	set = boolset_create_from((char[255]){0}, charset);
	word_count = split_words_count(str, set);
	result = memory_zeroed_alloc(word_count + 1, sizeof(char *));
	if (!result)
		return (0);
	index = 0;
	while (*str)
	{
		while (*str && set[(unsigned int) *str] == 1)
			++str;
		if (*str && set[(unsigned int) *str] == 0)
			result[index++] = split_word_create(str, set);
		if (!result[index - 1])
			return (string_split_destroy(result, index - 1));
		while (*str && set[(unsigned int) *str] == 0)
			++str;
	}
	return (result);
}
