/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:13:02 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 15:17:25 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"
#include <cstring>
#include <iostream>

using std::cout;

template <typename T>

Array<T>::Array() : _elements(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : _elements(new T[copy._size]), _size(copy._size)
{
	memcpy(this->_elements, copy._elements, this->_size);
}

template <typename T>
Array<T>::~Array()
{
	delete[] (this->_elements);
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& copy)
{
	this->_size = copy._size;
	delete[] this->_elements;
	this->_elements = new T[this->_size];
	memcpy(this->_elements, copy._elements, this->_size);
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](size_t n)
{
	if (n >= this->_size)
		throw std::exception();
	return (this->_elements[n]);
}

template <typename T>
const T&	Array<T>::operator[](size_t n) const
{
	if (n >= this->_size)
		throw std::exception();
	return (this->_elements[n]);
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (this->_size);
}

#endif