/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:26:35 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/07 14:44:08 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename Container> typename Container::const_iterator easyFind(Container& cont, int num)
{
	typename Container::const_iterator it = std::find(cont.begin(), cont.end(), num);
	if (it == cont.end()) throw std::invalid_argument("value not found in container");
	return (it);
};

#endif