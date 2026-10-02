/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:56:30 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/09/30 19:56:17 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
Array.tpp no necesita ningún #include, porque
ya los hemos puesto en Array.hpp, Y como Array.hpp incluye Array.tpp
el .tpp ya tiene acceso a todo lo que necesita.*/
template <typename T>
Array<T>::Array()
{
    // ARRAY VACIO
    _array = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    // GUARDA EL TAMAÑO
    _size = n;

    // CREA UN ARRAY DE N ELEMENTOS
    _array = new T[n]();
}
//Crea una copia independiente del array
template <typename T>
Array<T>::Array(const Array &other)
{
    // COPIA EL TAMAÑO
    _size = other._size;

    // CREA UN ARRAY NUEVO
    _array = new T[_size];

    // COPIA LOS ELEMENTOS
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = other._array[i];
}
//Copia un array en otro
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    // EVITA ASIGNARSE A SI MISMO
    if (this != &other)
    {
        // BORRA EL ARRAY ANTERIOR
        delete [] _array;

        // COPIA EL TAMAÑO
        _size = other._size;

        // CREA UN ARRAY NUEVO
        _array = new T[_size];

        // COPIA LOS ELEMENTOS
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }

    return *this;
}
//Libera la memoria
template <typename T>
Array<T>::~Array()
{
    // LIBERA LA MEMORIA
    delete [] _array;
}
//Accede a un elemento del array
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if(index >= _size)
        throw OutOfBoundsException();
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return "Index out of bounds";
}

