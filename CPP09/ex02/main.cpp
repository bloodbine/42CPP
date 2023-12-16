/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:47:51 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/16 16:35:41 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "VectorFJ.hpp"
#include "DequeFJ.hpp"
#include <iomanip>
#include <ios>

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		try
		{
			PmergeMe pmergeme(++argv);

			std::cout << "Before: ";
			pmergeme.displayVectorCont();
			std::cout << std::endl;

			pmergeme.recordVectorStart();
			VectorFJ vectorfj(pmergeme.getVectorCont());
			vectorfj.FordJohnsonSort();
			pmergeme.recordVectorEnd();

			std::cout << "After (std::vector): ";
			pmergeme.displayVectorCont();
			std::cout << std::endl;

			pmergeme.recordDequeStart();
			DequeFJ dequefj(pmergeme.getDequeCont());
			dequefj.FordJohnsonSort();
			pmergeme.recordDequeEnd();

			std::cout << "After (std::deque): ";
			pmergeme.displayDequeCont();
			std::cout << std::endl;

			std::cout << std::fixed;
			std::cout << "Time to process a range of " << pmergeme.getVectorSize() << " elements with std::vector : " << std::setprecision(5) << pmergeme.getVectorDelta() << " us" << std::endl;
			std::cout << "Time to process a range of " << pmergeme.getDequeSize() << " elements with std::deque : " << std::setprecision(5) << pmergeme.getDequeDelta() << " us" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
			return (1);
		}
	}
	return (0);
};
