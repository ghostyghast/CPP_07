/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:01:40 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/15 16:15:17 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdio>

template <typename T> void  iter(T *array, size_t len, void(*f)(T*))
{
    if (!array || !f)
        return ;
    for (size_t i = 0; i < len; i++)
        f(array + i);
}

#endif