/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttrossea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:52:40 by ttrossea          #+#    #+#             */
/*   Updated: 2015/12/17 22:31:26 by ttrossea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*next_arg(char *p)
{
	while (*p && ((*p == '-' && ft_isdigit(*(p + 1))) || ft_isalnum(*p)))
		p++;
	if (!(*p) || *p == '\n')
		return (NULL);
	while (*p && (*p == ' ' || *p == '\t'))
		p++;
	if (!(*p) || *p == '\n')
		return (NULL);
	return (p);
}
