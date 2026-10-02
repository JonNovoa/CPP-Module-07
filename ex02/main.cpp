/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 10:56:25 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/01 14:31:39 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
    //Creamos un array vacio
    Array<int> empty;
    //Comprobamos  que tiene tamaño 0
    std::cout << "Empty size: " << empty.size() << std::endl;
    //Creamos un array de 5 ints(debe tener exact. 5)
    Array<int> numbers(5);
    //Rellenamos el array para acceder luego con []
    for(unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i + 1;
    //Mostramos los elementos
    std::cout << "Numbers: " << std::endl;
    for(unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << std::endl;
    
    //Creamos una copia del array
    Array<int> copy(numbers);
    //Modificamos la copia, el orinal no se debe cambiar
    copy[0] = 42;
    std::cout << "Original first element: " << numbers[0] << std::endl;
    std::cout << "Copy first element: " << copy[0] << std::endl;

    //Creamos otro array
    Array<int> assigned(2);
    //Copiamos numbers dentro de assigned
    assigned = numbers;
    //Modificamos el array asignado, el original no debe cambiar
    assigned[0] = 99;
    //Mostramos que son arrays diferentes
    std::cout << "Original first element: " << numbers[0] << std::endl;
    std::cout << "Assigned first element: " << assigned[0] << std::endl;
    
    try
    {
        //Saltara el mensaje ya que intenta llegar a un 6to elemento pero tenmos 5
        std::cout << numbers[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}