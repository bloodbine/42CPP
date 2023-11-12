/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:10:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 14:13:56 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	private:
		int	_num;
	
	public:
		Data();
		Data(int num);
		Data(const Data& obj);
		Data& operator=(const Data& obj);
		~Data();

		int		getNum(void);
		void	setNum(int num);
};

#endif