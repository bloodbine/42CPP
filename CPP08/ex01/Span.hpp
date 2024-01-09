/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:57:14 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/09 15:01:41 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <vector>

class Span
{
	private:
		std::vector<int>	_cont;
		const unsigned int	_maxLen;

	public:
		Span(const unsigned int n);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();

		void	addNumber(const int num);
		void	addRange(const int numbers[], unsigned int len);
		void	addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		void	fillSpan(void);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
	
	class SpanFullException: public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
	class SpanNotEnoughElementsException: public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
};

#endif