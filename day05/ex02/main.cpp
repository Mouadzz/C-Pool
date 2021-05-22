/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:35:00 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 20:20:08 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    srand(time(0));

    int grade = 30;
    ShrubberyCreationForm shrubbery("Riot Games");
    PresidentialPardonForm president("Epic Games");
    RobotomyRequestForm robot("Arena Games");
    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        shrubbery.beSigned(obj);
        std::cout << shrubbery;
        obj.executeForm(shrubbery);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;
    grade = 50;
    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        president.beSigned(obj);
        std::cout << president;
        obj.executeForm(president);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;
    grade = 15;
    try
    {
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        robot.beSigned(obj);
        std::cout << robot;
        obj.executeForm(robot);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}