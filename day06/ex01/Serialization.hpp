/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:45:28 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/24 15:26:19 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>

struct Data
{
    std::string str1;
    std::string str2;
    int i;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif