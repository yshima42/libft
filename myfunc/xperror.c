/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xperror.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimazu <yshimazu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:02:53 by yshimazu          #+#    #+#             */
/*   Updated: 2021/12/21 16:17:38 by hyoshie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myfunc.h"

void	xperror(char *s)
{
	perror(s);
	exit(EXIT_FAILURE);
}
