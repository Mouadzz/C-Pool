/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:34:47 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/06 15:39:34 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int &grade, std::string const &name) : _name(name), _grade(grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
    this->_grade = copy._grade;
    return *this;
}

std::string const &Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() { return this->_grade; }

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 >= 1)
    {
        this->_grade -= 1;
    }
    else
    {
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 <= 150)
    {
        this->_grade += 1;
    }
    else
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low!";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &c)
{
    out << c.getName() << ", bureaucrat grade " << c.getGrade() << "." << std::endl;
    return out;
}