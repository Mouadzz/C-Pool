/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:05:51 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/22 20:19:34 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : _target(copy._target), Form(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    this->_target = copy._target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::fstream file;

    if (this->isSigned() && executor.getGrade() <= this->getExecuteGrade())
    {
        file.open(this->_target + "_shrubbery", std::fstream::out);
        if (file)
        {
            file << "   oxoxoo    ooxoo " << std::endl
                 << " ooxoxo oo  oxoxooo" << std::endl
                 << " oooo xxoxoo ooo ooox" << std::endl
                 << " oxo o oxoxo  xoxxoxo" << std::endl
                 << " oxo xooxoooo o ooo" << std::endl
                 << "     ooo\\oo\\  /o/o" << std::endl
                 << "         \\  \\/ /" << std::endl
                 << "         |   /" << std::endl
                 << "         |  |" << std::endl
                 << "         |  |" << std::endl
                 << "         |  |" << std::endl
                 << "         |  |" << std::endl
                 << "  ______/____\\____ " << std::endl;
        }
        file.close();
    }
    else
    {
        throw NotExecutedException();
    }
}