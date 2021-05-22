/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:35:00 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 13:36:06 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int grade = 5;
    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        Form form("Top", 20, 10);
        std::cout << form;
        form.beSigned(obj);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;

    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        Form form("Top", 3, 10);
        std::cout << form;
        form.beSigned(obj);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;

    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        Form form("Top", 10, 10);
        std::cout << form;
        obj.signForm(form);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;

    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        Form form("Top", 3, 10);
        std::cout << form;
        obj.signForm(form);
        std::cout << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}