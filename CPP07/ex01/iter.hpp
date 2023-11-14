/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:47:11 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/14 11:58:41 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename var> void	iter(var *list, unsigned int len, void (*func)(var const &))
{
	for (unsigned int i = 0; i < len; i++)
		func(list[i]);
};

#endif