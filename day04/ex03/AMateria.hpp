/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:54:06 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/09 23:11:37 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class AMateria
{
protected:
    unsigned int _xp;
    std::string _type;

public:
    AMateria(std::string const &type);
    AMateria();
    ~AMateria();
    std::string const &getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif