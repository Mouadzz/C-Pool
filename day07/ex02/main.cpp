/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:20:55 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/19 10:35:02 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void print_array(Array<T> &arr)
{
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    Array<int> arrayInt1(10);
    Array<int> arrayInt2(10);
    Array<char> arrayChar1(15);
    Array<char> arrayChar2(15);
    try
    {
        {
            std::cout << "Array Int 1 -> ";
            print_array(arrayInt1);

            std::cout << "Array Int 2 -> ";
            print_array(arrayInt2);

            arrayInt1[0] = 9;
            arrayInt1[5] = 8;
            std::cout << "Array Int 1 -> ";
            print_array(arrayInt1);

            arrayInt2 = arrayInt1;
            std::cout << "Array Int 2 -> ";
            print_array(arrayInt2);

            Array<int> arrayInt3(arrayInt2);
            std::cout << "Array Int 3 -> ";
            print_array(arrayInt3);

            arrayInt3[1] = 3;

            std::cout << "Array Int 1 -> ";
            print_array(arrayInt1);

            std::cout << "Array Int 3 -> ";
            print_array(arrayInt3);

            Array<int> arrayInt4(50);

            std::cout << "Array Int 4 -> ";
            print_array(arrayInt4);

            arrayInt4 = arrayInt3;

            std::cout << "Array Int 4 -> ";
            print_array(arrayInt4);
        }
        std::cout << "------" << std::endl;
        {
            arrayChar1[0] = 'A';
            arrayChar1[5] = 'B';
            std::cout << "Array Char 1 -> ";
            print_array(arrayChar1);

            arrayChar2 = arrayChar1;

            std::cout << "Array Char 2 -> ";
            print_array(arrayChar2);
        }
        std::cout << "------" << std::endl;
        {
            arrayInt1[98] = 8;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}