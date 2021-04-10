/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:54:06 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/10 22:08:46 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    unsigned int _xp;
    std::string _type;

public:
    AMateria(std::string const &type);
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria &copy);
    AMateria &operator=(AMateria const &copy);

    void setXP(unsigned int xp);
    void setTYPE(std::string type);
    std::string const &getType() const; //Returns the materia type
    unsigned int getXP() const;         //Returns the Materia's XP

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif