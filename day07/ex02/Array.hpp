/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:21:18 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/19 10:44:45 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
private:
    unsigned int _size;
    T *_array;

public:
    Array();
    Array(unsigned int n);
    Array(const Array<T> &copy);
    ~Array();
    Array &operator=(const Array<T> &copy);
    T &operator[](unsigned int a);
    unsigned int size() const;
};

template <typename T>
Array<T>::Array() : _size(0), _array(nullptr) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_size = n;
    this->_array = new T[n]();
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
Array<T>::Array(const Array<T> &copy)
{
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
    this->_size = copy._size;

    if (this->_array)
        delete[] this->_array;

    this->_array = new T[this->_size];
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = copy._array[i];

    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int a)
{
    if (a < this->_size)
        return this->_array[a];
    else
        throw std::exception();
}

template <typename T>
Array<T>::~Array()
{
    if (this->_array)
        delete[] this->_array;
}

#endif