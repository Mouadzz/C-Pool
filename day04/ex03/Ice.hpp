/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:04:49 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/10 11:25:27 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    Ice(Ice &copy);
    Ice &operator=(Ice const &copy);
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif