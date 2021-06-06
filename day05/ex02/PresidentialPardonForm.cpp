/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:55:57 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/06 18:45:46 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade()), _target(copy._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    this->_target = copy._target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
    if (this->isSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
    {
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    else
    {
        throw NotExecutedException();
    }
}