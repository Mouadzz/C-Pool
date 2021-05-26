/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:11:11 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/26 21:15:48 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) { *this = copy; }

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
    (void)copy;
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}
