/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:23:05 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/07 12:41:28 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template<typename var> class Array
{
	public:
		Array(): _array(NULL), _size(0) {};

		Array(unsigned int n): _size(n)
		{this->_size == 0 ? _array = NULL : _array = new var[n];};

		Array(const Array& obj): _array(NULL), _size(0) {*this = obj;};

		Array& operator=(const Array& obj)
		{
			if (this != &obj)
			{
				if (this->_size != 0)
					delete[] this->_array;
				this->_size = obj._size;
				if (this->_size != 0)
				{
					this->_array = new var[this->_size];
					for (unsigned int i = 0; i < this->_size; i++) this->_array[i] = obj._array[i];
				}
				else
					this->_array = NULL;
			}
			return (*this);
		};

		var& operator[](const long i)
		{
			if (i < 0 || static_cast<unsigned int>(i) >= this->_size)
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