/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:35:00 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/06 20:30:43 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    srand(time(0));

    int grade = 30;
    try
    {
        Intern intern;
        Form *rrf;
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        rrf = intern.makeForm("shrubbery creation", "Epic Games");
        rrf->beSigned(obj);
        std::cout << *rrf;
        obj.executeForm(*rrf);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;
    grade = 5;
    try
    {
        Intern intern;
        Form *rrf;
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        rrf = intern.makeForm("robotomy request", "Arena Games");
        rrf->beSigned(obj);
        std::cout << *rrf;
        obj.executeForm(*rrf);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "***********************" << std::endl;
    grade = 5;
    try
    {
        Intern intern;
        Form *rrf;
        Bureaucrat obj(grade, "Zed");
        std::cout << obj;
        rrf = intern.makeForm("presidential pardon", "Riot Games");
        rrf->beSigned(obj);
        std::cout << *rrf;
        obj.executeForm(*rrf);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // system("leaks a.out");
    return 0;
}