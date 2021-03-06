/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttrossea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 15:22:22 by ttrossea          #+#    #+#             */
/*   Updated: 2017/05/10 15:23:12 by ttrossea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			free_ptr(void **ptr)
{
	if (!ptr)
		return ;
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
