/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DequeFJ.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:20:03 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/15 15:20:49 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUEFJ
# define DEQUEFJ

#include <deque>

class DequeFJ
{
	private:
		std::deque<uint32_t>&	_dequeRef;
		uint32_t				_looseEnd;
		bool					_isEven;

		void	_sortPairs(void);
		void	_sortByPairFirst(void);
		void	_insertSortBack(std::deque<uint32_t>::iterator current);
		void	_mergeInsertSecond(void);

	public:
		DequeFJ(std::deque<uint32_t>& dequeRef);
		DequeFJ(const DequeFJ& obj);
		DequeFJ& operator=(const DequeFJ& obj);
		~DequeFJ();

		void	FordJohnsonSort();
};

#endif