/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:34:27 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/09/29 18:51:04 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
/*void (*function)(T &), Recibimos una función que no devuelve 
nada (void) y que recibe un T por referencia*/
void iter(T *array, size_t length, void (*function)(T &))
{
    size_t i = 0;

    while(i < length)
    {
        function(array[i]);
        i++;
    }
}

#endif