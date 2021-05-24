/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:40:05 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/24 16:20:57 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <sstream>

void *serialize(void)
{
    std::string alphabets = "abcdefghijklmnopqrstuvwxyz";
    std::string integers = "0123456789";
    std::string str1;
    std::string str2;
    char *data = new char[31];
    srand(time(0));

    for (int i = 0; i < 15; i++)
        data[i] = alphabets[std::rand() % 26];

    data[15] = integers[std::rand() % 10];

    for (int i = 16; i < 31; i++)
        data[i] = alphabets[std::rand() % 26];

    return reinterpret_cast<void *>(data);
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    std::string tmp;

    tmp = reinterpret_cast<char *>(raw);

    data->str1 = tmp.substr(0, 15);
    data->str2 = tmp.substr(16, 15);
    tmp = tmp.substr(15, 1);
    std::stringstream n(tmp);
    int x;
    n >> x;
    data->i = x;

    return data;
}
