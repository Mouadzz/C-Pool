/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:34:55 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/21 21:30:18 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(int grade, std::string const name);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat &copy);
    Bureaucrat &operator=(Bureaucrat const &copy);
    std::string getName();
    int getGrade();
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
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &c);

#endif