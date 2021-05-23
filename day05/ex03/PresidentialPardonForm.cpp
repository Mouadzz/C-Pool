/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:55:57 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 20:01:50 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target), Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : _target(copy._target), Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade())
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    this->_target = copy._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->isSigned() && executor.getGrade() <= this->getExecuteGrade())
    {
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    else
    {
        throw NotExecutedException();
    }
}