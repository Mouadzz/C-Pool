/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:34:55 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 12:16:38 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;

public:
    Bureaucrat(int &grade, std::string const &name);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat &copy);
    Bureaucrat &operator=(Bureaucrat const &copy);
    std::string const &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };

    void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &c);

#endif