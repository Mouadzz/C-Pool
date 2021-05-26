/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:28:07 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/26 12:20:00 by mouadlas         ###   ########.fr       */
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
        int ret = easyfind(l, 0);

        std::cout << ret << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}