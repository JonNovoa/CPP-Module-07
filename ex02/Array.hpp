/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:56:27 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/09/30 13:59:24 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>

template <typename T>

class Array
{
    private:
        T *_array;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        ~Array();
        //Acceso a los elementos
        T &operator[](unsigned int index);
        //Devuelve el tamaño
        unsigned int size() const;
        //Excepcion para indices fuera de rango
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        

};

/*Array.hpp dice qué es la clase y Array.tpp dice cómo funciona,
 así que ponemos el .tpp al final para que el compilador pueda ver ambas cosas juntas*/
#include "Array.tpp"


#endif