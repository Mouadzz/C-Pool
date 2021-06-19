/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:53:15 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/19 12:06:42 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::~Span() {}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    this->_n = copy._n;
    this->_container = copy._container;
    return *this;
}

void Span::addNumber(int number)
{
    if (this->_container.size() >= this->_n)
        throw std::exception();
    this->_container.push_back(number);
}

int Span::shortestSpan()
{
    if (this->_container.size() <= 1)
        throw std::exception();

    int shortest;

    std::sort(this->_container.begin(), this->_container.end());
    for (unsigned int i = 0; i < this->_container.size() - 1; i++)
    {
        if ((this->_container[i + 1] - this->_container[i]) < shortest)
            shortest = this->_container[i + 1] - this->_container[i];
    }
    return shortest;
}

int Span::longestSpan()
{
    if (this->_container.size() <= 1)
        throw std::exception();

    std::sort(this->_container.begin(), this->_container.end());
    int longest = this->_container[this->_container.size() - 1] - this->_container[0];
    return longest;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_container.size() >= this->_n)
        throw std::exception();

    for (std::vector<int>::iterator i = begin; i < end; i++)
    {
        if (this->_container.size() >= this->_n)
            throw std::exception();
        this->_container.push_back(*i);
    }
}
