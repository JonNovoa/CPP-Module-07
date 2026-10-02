/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:57:08 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/09/29 19:15:57 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void printInt(int &number)
{
    std::cout << number << std::endl;
}

void printString(std::string &text)
{
    std::cout << text << std::endl;
}

int main(void)
{
    int numbers[] = {1,2,3,4,5};

    std::cout << "INT:" << std::endl;
    iter(numbers, 5, printInt);

    std::string words[] = {"Hola", "Mundo", "42"};

    std::cout << "STRING:" << std::endl;
    iter(words, 3, printString);

    return 0;
}
