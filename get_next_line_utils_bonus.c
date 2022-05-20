/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:47:55 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/13 12:41:45 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned long	ss1;
	unsigned long	ss2;
	char			*new_s;
	unsigned long	count;

	count = 0;
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	new_s = malloc((sizeof(char) * (ss1 + ss2 + 1)));
	while (count < ss1 + ss2)
	{
		if (count < ss1)
			new_s[count] = s1[count];
		else if (count >= ss1)
			new_s[count] = s2[count - ss1];
		count++;
	}
	new_s[count] = '\0';
	free(s1);
	return (new_s);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long			i;
	unsigned char			*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return ((void *)p);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == __SIZE_MAX__ && size > 1)
		return (NULL);
	else if (size == __SIZE_MAX__ && count > 1)
		return (NULL);
	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, size * count);
	return (p);
}
