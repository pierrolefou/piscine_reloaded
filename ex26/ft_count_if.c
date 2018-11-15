/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:05:45 by pthan             #+#    #+#             */
/*   Updated: 2018/11/06 20:11:42 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	res;

	res = 0;
	if (tab == 0)
		return (0);
	while (*tab != 0)
	{
		if ((*f)(*tab) == 1)
			res++;
		(tab)++;
	}
	return (res);
}