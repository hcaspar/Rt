/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_float4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttrossea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 15:46:28 by ttrossea          #+#    #+#             */
/*   Updated: 2017/05/12 19:44:25 by ttrossea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

cl_float4			vec_float4(t_vec v)
{
	cl_float4		ret;

	((float*)&ret)[0] = v.x;
	((float*)&ret)[1] = v.y;
	((float*)&ret)[2] = v.z;
	((float*)&ret)[3] = 1;
	return (ret);
}
