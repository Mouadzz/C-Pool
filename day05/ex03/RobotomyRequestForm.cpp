/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:49:49 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 20:08:36 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : _target(copy._target), Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade())
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    this->_target = copy._target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->isSigned() && executor.getGrade() <= this->getExecuteGrade())
    {
        if (std::rand() % 2 == 0)
        {
            std::cout << "AOUUUUUUUUUUUUUUUUCH ! " << this->_target << " has been robotomized successfully." << std::endl;
        }
        else
        {
            std::cout << "Failed to robotimized " << this->_target << "." << std::endl;
        }
    }
    else
    {
        throw NotExecutedException();
    }
}