/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoshie <hyoshie@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:17:06 by hyoshie           #+#    #+#             */
/*   Updated: 2021/11/28 12:54:11 by hyoshie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myfunc.h"

char	*ft_strjoin3(const char *s1, const char *s2, const char *s3)
{
	char	*ret_m;
	char	*tmp_m;

	if (!s1 || !s2 || !s3)
		return (NULL);
	tmp_m = ft_strjoin(s1, s2);
	if (!tmp_m)
		return (NULL);
	ret_m = ft_strjoin(tmp_m, s3);
	free(tmp_m);
	if (!ret_m)
		return (NULL);
	return (ret_m);
}
