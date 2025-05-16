/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:09:43 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 15:06:51 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdio>

template <typename T> class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		~Array();
		Array&			operator=(const Array& copy);
		T&				operator[](size_t n);
		const T&		operator[](size_t n) const;

		size_t			size(void) const;

	private:
		T			*_elements;
		size_t	_size;
};

#include "Array.tpp"

#endif