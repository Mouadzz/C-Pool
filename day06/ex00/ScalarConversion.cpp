/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 11:07:31 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/24 16:27:19 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void convert_float(char *stock)
{
    long double n;

    try
    {
        n = std::stold(stock);
        if (n < std::numeric_limits<float>::lowest())
            std::cout << "float: -inff" << std::endl;
        else if (n > std::numeric_limits<float>::max())
            std::cout << "float: +inff" << std::endl;
        else
        {
            if (n - static_cast<int>(n) != 0.0f)
            {
                std::cout << "float: " << n << "f" << std::endl;
            }
            else
            {
                std::cout << "float: " << n << ".0f" << std::endl;
            }
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "float: impossible" << std::endl;
    }
}

void convert_double(char *stock)
{
    long double n;

    try
    {
        n = std::stold(stock);
        if (n < std::numeric_limits<double>::lowest())
            std::cout << "double: -inf" << std::endl;
        else if (n > std::numeric_limits<double>::max())
            std::cout << "double: +inf" << std::endl;
        else
        {
            if (n - static_cast<int>(n) != 0.0)
                std::cout << "double: " << n << std::endl;
            else
                std::cout << "double: " << n << ".0" << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "double: impossible" << std::endl;
    }
}

void convert_int(char *stock)
{
    long int n;
    char *end;

    n = std::strtol(stock, &end, 10);
    if (n >= INT_MIN && n <= INT_MAX && strcmp(stock, end) != 0)
    {
        std::cout << "int: " << static_cast<int>(n) << std::endl;
    }
    else
        std::cout << "int: impossible" << std::endl;
}

void convert_char(char *stock)
{
    long int n;
    char *end;

    n = std::strtol(stock, &end, 10);
    if (strcmp(stock, end) == 0 || n < CHAR_MIN || n > CHAR_MAX)
    {
        std::cout << "char: impossible" << std::endl;
    }
    else
    {
        if (std::isprint(static_cast<char>(n)))
        {
            std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
        }
        else
            std::cout << "char: Not displayable" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        convert_char(argv[1]);
        convert_int(argv[1]);
        convert_float(argv[1]);
        convert_double(argv[1]);
    }
    return 0;
}
