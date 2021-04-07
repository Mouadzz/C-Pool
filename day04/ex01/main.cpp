/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:58:42 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/07 18:13:18 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character *me = new Character("me");
    std::cout << *me;
    Enemy *b = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    std::cout << "----" << std::endl;
    me->recoverAP();
    std::cout << *me;
    AWeapon *pls = new PlasmaRifle();
    AWeapon *pow = new PowerFist();
    Enemy *sup = new SuperMutant();
    me->attack(NULL);
    me->equip(pls);
    me->attack(sup);
    std::cout << *me;

    me->equip(pow);
    me->attack(sup);
    std::cout << *me;

    me->attack(sup);
    std::cout << *me;

    me->attack(sup);
    std::cout << *me;

    me->attack(sup);
    std::cout << *me;

    me->recoverAP();
    me->attack(sup);
    std::cout << *me;

    me->equip(pls);
    me->attack(sup);
    std::cout << *me;

    delete me;
    delete pr;
    delete pf;
    delete pls;
    delete pow;
    return 0;
}
