/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:52:15 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/19 12:03:26 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try
    {
        Span mp = Span(50);
        std::vector<int> container;

        for (int i = 0; i < 50; i += 5)
            container.push_back(i);

        for (size_t i = 0; i < container.size(); i += 1)
            std::cout << container[i] << ",";
        std::cout << "\n";

    
        mp.addNumber(container.begin(), container.end());

        std::cout << mp.shortestSpan() << std::endl;
        std::cout << mp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}