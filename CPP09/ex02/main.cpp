/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:47:51 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/13 14:24:42 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "VectorFJ.hpp"
#include "DequeFJ.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		PmergeMe pmergeme(++argv);
		pmergeme.displayVectorCont();
		std::cout << std::endl;
		VectorFJ vectorfj(pmergeme.getVectorCont());
		vectorfj.FordJohnsonSort();
		pmergeme.displayVectorCont();
		std::cout << std::endl;
	}
	return (0);
};
