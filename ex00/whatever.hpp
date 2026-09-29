/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:17:15 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/09/29 11:38:37 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

/*template <typename T> le dice al compilador que T 
será un tipo que se decidirá cuando utilicemos la función,
se declaran en cada funcion, porque solo existe para esa funcion*/
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

#endif