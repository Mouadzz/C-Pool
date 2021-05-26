/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:52:35 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/26 16:42:22 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _container;

public:
    Span(unsigned int n);
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &copy);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif