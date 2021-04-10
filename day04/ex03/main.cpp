/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:19:49 by mouadlas          #+#    #+#             */
/*   Updated: 2021/04/10 17:49:09 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

// int main()
// {
//     IMateriaSource *src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter *me = new Character("me");
//     AMateria *tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter *bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//     /*---------- My tests ----------*/
//     Character *mbani = new Character("mbani");
//     Character *mamoussa = new Character("mamoussa");
//     mbani->equip(tmp); // cure at index 0
//     tmp = src->createMateria("ice");
//     mbani->equip(tmp); // ice at index 1
//     tmp = src->createMateria("ice");
//     mbani->equip(tmp); // ice at index 2
//     mbani->use(0, *me);
//     mbani->use(1, *bob);
//     mbani->use(2, *mbani);
//     *mamoussa = *mbani;
//     mbani->unequip(2); // remove ice at index 2 from mbani
//     mamoussa->use(0, *me);
//     mamoussa->use(1, *bob);
//     mamoussa->use(2, *mbani);
//     delete mbani;
//     delete mamoussa;
//     /*---------- End ----------*/

//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

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


    *ryze = *victor;
    ryze->use(0, *ryze);
    
    
    victor->unequip(0);
    victor->use(0, *ryze);

    delete source;
    delete victor;
    delete ryze;

    // system("leaks a.out");
    return 0;
}