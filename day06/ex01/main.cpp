/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:46:58 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/24 16:24:07 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    void *serializedData = serialize();

    std::cout << reinterpret_cast<char *>(serializedData) << std::endl;

    Data *deserializedData = deserialize(serializedData);

    std::cout << deserializedData->str1 << std::endl;
    std::cout << deserializedData->i << std::endl;
    std::cout << deserializedData->str2 << std::endl;

    delete deserializedData;
    return 0;
}