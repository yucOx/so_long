/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin <mehaydin@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 01:14:36 by mehaydin          #+#    #+#             */
/*   Updated: 2023/03/03 01:14:36 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*buffer1;
	char		*buffer2;

	i = 0;
	buffer1 = (char *)src;
	buffer2 = dst;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		buffer2[i] = buffer1[i];
		i++;
	}
	return (dst);
}
