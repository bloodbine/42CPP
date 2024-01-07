/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:48:35 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/07 16:02:22 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename var>
class	MutantStack: public std::stack<var>
{
	public:
		typedef typename std::stack<var>::container_type::iterator iterator;
		typedef typename std::stack<var>::container_type::const_iterator const_iterator;

		iterator begin() {return (std::stack<var>::c.begin());};
		iterator end() {return (std::stack<var>::c.end());};
		const_iterator begin() const {return (std::stack<var>::c.begin());};
		const_iterator end() const {return (std::stack<var>::c.end());};
};

#endif
