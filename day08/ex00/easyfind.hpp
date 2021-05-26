/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:27:50 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/26 12:24:11 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template <typename T>
int easyfind(T container, int i)
{
    typename T::iterator iterator = std::find(container.begin(), container.end(), i);
    if (iterator != container.end())
        return *iterator;
    else
        throw std::exception();
}

#endif