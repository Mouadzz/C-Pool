/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:28:07 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/19 11:48:51 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main()
{
    std::list<int> l;

    l.push_back(0);
    l.push_back(5);
    l.push_back(10);
    l.push_back(15);

    try
    {
        int ret = easyfind(l, 15);

        std::cout << ret << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}