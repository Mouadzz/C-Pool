/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:46:40 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 12:23:12 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;
class Form
{
private:
    std::string const _name;
    bool _isSigned;
    int const _signGrade;
    int const _executeGrade;

public:
    Form(std::string const &name, int const &signGrade, int const &executeGrade);
    ~Form();
    Form(Form &copy);
    Form &operator=(const Form &copy);
    std::string const &getName() const;
    int const &getSignGrade() const;
    int const &getExecuteGrade() const;
    bool isSigned();

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };

    void beSigned(Bureaucrat const &bureau);
};

std::ostream &operator<<(std::ostream &out, Form &c);

#endif