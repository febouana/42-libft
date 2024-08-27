/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoet <apoet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:20:29 by febouana          #+#    #+#             */
/*   Updated: 2024/08/27 20:09:30 by apoet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_init_vars(size_t *i, size_t *j, int *start)
{
    *i = 0;
    *j = 0;
    *start = 0;
}

static void *ft_free_tabtab(char **result, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(result[i]);
        i++;
    }
    free(result);
    return (NULL);
}

static size_t count_words(char *str, char separator)
{
    size_t i;
    size_t counter;

    i = 0;
    counter = 0;
    while (str[i] != '\0')
    {
        if (str[i] != separator)
        {
            counter++;
            while (str[i] != separator && str[i] != '\0')
                i++;
        }
        else 
            while (str[i] == separator && str[i] != '\0')
                i++;
    }            
    return (counter);
}

static char *set_word(char *str, int start, int end)
{
    char *word;
    int i;

    i = 0;
    word = malloc((end - start + 1) * sizeof(char));
    while (start < end)
    {
        word[i] = str[start];
        start++;
        i++;
    }
    word[i] = '\0';
    return (word);
}

static char **ft_split(char *str, char audd)
{
    size_t i;
    size_t j;
    int start;
    char **result; 
    
    ft_init_vars(&i, &j, &start);
    result = ft_calloc(count_words(str, audd) + 1, sizeof(char *));
    if (!result)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] == audd)
            i++;
        else
        {   
            start = i;
            while (str[i] != audd && str[i] != '\0')
                i++;
            result[j++] = set_word(str, start, i);
            if (!result[j - 1])
                return (ft_free_tabtab(result, j));
        }
    }
    return (result);
}
