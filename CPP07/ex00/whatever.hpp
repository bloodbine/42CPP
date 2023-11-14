/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:04:55 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/14 11:28:40 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename var> void	swap(var& A, var& B)
{
	var temp = A;
	A = B;
	B = temp;
};

template<typename var> var	min(var& A, var& B)
{
	return ((A < B) ? A : B);
};

template<typename var> var	max(var& A, var& B)
{
	return ((A > B) ? A : B);
};

#endif