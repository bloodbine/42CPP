/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:01:18 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/09 15:01:33 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN
# define RPN

# include <iostream>
# include <stack>
# include <exception>

class ReversePolishNotation
{
	private:
		std::string		_inputLine;
		std::stack<int>	_data;
	
		void _ParseAndFormatData();
		void _EvaluateMember(char member);

	public:
		ReversePolishNotation(std::string input);
		~ReversePolishNotation();
		ReversePolishNotation(const ReversePolishNotation& obj);
		ReversePolishNotation& operator=(const ReversePolishNotation& obj);

		void Calculate();
		void DisplayResult();
};

#endif