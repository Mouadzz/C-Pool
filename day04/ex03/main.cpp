/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:19:49 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/11 13:16:58 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    //-------------------------------
    std::cout << std::endl;
    IMateriaSource *source = new MateriaSource();
    ICharacter *victor = new Character("Victor");
    ICharacter *ryze = new Character("Ryze");
    AMateria *temp;

    temp = source->createMateria("bro");

    source->learnMateria(new Ice());
    source->learnMateria(new Ice());
    source->learnMateria(new Ice());
    source->learnMateria(new Cure());
    source->learnMateria(new Cure());

    temp = source->createMateria("dude");
    ryze->equip(temp);
    ryze->use(0, *victor);
    temp = source->createMateria("ice");
    ryze->equip(temp);
    ryze->use(0, *victor);

    ryze->unequip(0);
    ryze->use(0, *victor);

    temp = source->createMateria("cure");
    victor->equip(temp);
    victor->use(0, *ryze);
    victor->use(0, *ryze);
    victor->use(0, *ryze);
    victor->use(0, *ryze);
    victor->use(0, *ryze);
    victor->use(0, *ryze);

    std::cout << std::endl;
    victor->equip(temp);
    ryze->equip(temp);
    *ryze = *victor;
    victor->unequip(0);
    ryze->use(0, *victor);
    victor->use(0, *ryze);


    delete source;
    delete victor;
    delete ryze;

    return 0;
}