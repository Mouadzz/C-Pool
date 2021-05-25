/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:53:14 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/25 17:19:42 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, T length, void (*function)(T &))
{
    for (int i = 0; i < length; i++)
        function(arr[i]);
}

template <typename T>
void addtwo(T &n)
{
    n += 2;
}
#endif