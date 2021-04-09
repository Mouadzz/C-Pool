/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 22:58:58 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/09 23:00:40 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {}
AMateria::AMateria() {}
AMateria::~AMateria() {}
std::string const &AMateria::getType() const {} //Returns the materia type
unsigned int AMateria::getXP() const {}         //Returns the Materia's XP

AMateria *AMateria::clone() const {}
void AMateria::use(ICharacter &target) {}