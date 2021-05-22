/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:46:38 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 17:45:45 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int const &signGrade, int const &executeGrade) : _name(name), _executeGrade(executeGrade), _signGrade(signGrade)
{
    if (signGrade < 1 || executeGrade < 1)
    {
        throw Form::GradeTooHighException();
    }
    if (signGrade > 150 || executeGrade > 150)
    {
        throw Form::GradeTooLowException();
    }
    this->_isSigned = false;
}

Form::~Form() {}

Form::Form(Form &copy) : _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
    this->_isSigned = copy._isSigned;
    *this = copy;
}

Form &Form::operator=(const Form &copy)
{
    this->_isSigned = copy._isSigned;
    *this = copy;
    return *this;
}

std::string const &Form::getName() const { return this->_name; }

int const &Form::getSignGrade() const { return this->_signGrade; }

int const &Form::getExecuteGrade() const { return this->_executeGrade; }

bool Form::isSigned() const { return this->_isSigned; }

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low!";
}

const char *Form::NotExecutedException::what() const throw()
{
    return "Can't Be Executed!";
}

void Form::beSigned(Bureaucrat const &bureau)
{
    if (bureau.getGrade() <= this->_signGrade)
    {
        this->_isSigned = true;
    }
    else
    {
        this->_isSigned = false;
        throw Form::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, Form &c)
{
    out << c.getName() << "| Sign Grade: " << c.getSignGrade() << " | Execute Grade: " << c.getExecuteGrade() << " | State: " << ((c.isSigned() == true) ? "Signed." : "Unsigned.") << std::endl;
    return out;
}