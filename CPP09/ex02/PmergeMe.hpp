/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:45:23 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/16 16:13:33 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

#include <deque>
#include <vector>
#include <ctime>
#include <iostream>
#include <stdexcept>

class PmergeMe
{
	private:
		std::vector<uint32_t>	_vectorCont;
		std::deque<uint32_t>	_dequeCont;
		std::clock_t			_vectorTime[2];
		std::clock_t			_dequeTime[2];

	public:
		PmergeMe(char **arguments);
		PmergeMe(const PmergeMe& obj);
		PmergeMe& operator=(const PmergeMe& obj);
		~PmergeMe();

		void	recordVectorStart(void);
		void	recordVectorEnd(void);
		void	recordDequeStart(void);
		void	recordDequeEnd(void);

		double	getVectorDelta(void);
		double	getDequeDelta(void);
		int		getVectorSize(void);
		int		getDequeSize(void);

		std::vector<uint32_t>& getVectorCont(void);
		std::deque<uint32_t>& getDequeCont(void);

		void	displayVectorCont(void);
		void	displayDequeCont(void);
};

#endif
