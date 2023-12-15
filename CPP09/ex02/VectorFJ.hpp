/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VectorFJ.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:33:39 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/13 17:24:11 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORFJ
# define VECTORFJ

#include <vector>

class VectorFJ
{
	private:
		std::vector<uint32_t>&	_vectorRef;
		uint32_t				_looseEnd;
		bool					_isEven;

		void	_sortPairs(void);
		void	_sortByPairFirst(void);
		void	_insertSortBack(std::vector<uint32_t>::iterator current);
		void	_mergeInsertSecond(void);

	public:
		VectorFJ(std::vector<uint32_t>& vectorRef);
		VectorFJ(const VectorFJ& obj);
		VectorFJ& operator=(const VectorFJ& obj);
		~VectorFJ();

		void	FordJohnsonSort();
};

#endif