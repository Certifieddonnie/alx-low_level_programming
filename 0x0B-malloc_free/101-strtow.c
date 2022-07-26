#include "main.h"
#include <stdlib.h>

/**
 * word_len - Function to count the length of each word in the
 * string i.e without the spaces.
 * @str: string.
 *
 * Return: the length of the word.
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (str[i] != ' ')
	{
/*Loop to increase the length of word as long there isn't a space */
		len++;
		i++;
	}
	return (len);
}

/**
 * word_count - Function that counts each word in the string
 * ensuring the removal of the spaces.
 * @str: string.
 *
 * Return: number of words.
 */

int word_count(char *str)
{
	int i, word = 0, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
/*Loop to run through string and get the length of string */
	for (i = 0; i < len; i++)
	{
/*Loop to count the words avoiding the spaces between each word. */
		if (str[i] != ' ') /*Checker to omit spaces */
		{
			word++;
			i += word_len(str + i);
/*increment,making int i move to the index of the beginning next word.*/
		}
	}
	return (word);
}

/**
 * strtow - Function that splits a string into words.
 * @str: string
 *
 * Return: pointer to string.
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, words = 0, j, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
/*Checker to reject null or empty string */
	words = word_count(str);
/*Get the number of words in the string str */
	if (words == 0)
		return (NULL);/*Checker to reject 0 words in the string */
	s = malloc((words + 1) * sizeof(char *));
/*Mem alloc of s, using number of words + 1 for null terminator */
	if (s == NULL)
		return (NULL);
/*Checker to reject NULL bytes variable s */
	for (j = 0; j < words; j++)
	{/*Loop through the number of words */
		while (str[i] == ' ')
			i++;
/* Loop to go to the beginning of the next word in the string. */
		letters = word_len(str + i);
	/*How many letter are in the word. */
		s[j] = malloc((letters + 1) * sizeof(char));
/*Allocating bytes for word + 1 for null terminator */
		if (s[j] == NULL)
		{
/*Checker to reject NULL bytes for words */
			for (; j >= 0; j--)
				free(s[j]);
			/*Deaalocating of mem space */
			free(s);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			s[j][l] = str[i++];
/*Loop go through each letter of the word and assign \0 at d end */
		s[j][l] = '\0';
	}
	s[j] = NULL;/*NULL for the last element */
	return (s);
}
