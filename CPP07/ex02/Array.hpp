/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:23:05 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/14 16:46:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <atomic>
#include <stdexcept>

template<typename var> class Array
{
	public:
		Array(): _array(NULL), _size(0) {};

		Array(unsigned int n): _array(new var[n]), _size(n) {};

		Array(const Array& obj): _array(new var[obj._size]), _size(obj._size)
		{*this = obj;};

		Array& operator=(const Array& obj)
		{
			if (this != &obj)
			{
				delete[] this->_array;
				this->_size = obj._size;
				this->_array = new var[obj._size];
				for (unsigned int i = 0; i < this->_size;)
					this->_array[i] = obj._array[i];
			}
			return (*this);
		};

		var& operator[](const int i)
		{
			if (i < 0 || i > static_cast<int>(this->_size))
				{throw std::out_of_range("error: index out of range");};
			return(this->_array[i]);
		};

		~Array() {delete[] this->_array;};

		unsigned int size(void) {return (this->_size);};

	private:
		var				*_array;
		unsigned int	_size;
};

#endif