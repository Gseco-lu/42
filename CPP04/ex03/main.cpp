/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:32:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/20 12:27:46 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* mat = new MateriaSource();
	ICharacter* x = new Character("xx");
	ICharacter* y = new Character("yy");
	AMateria* tmp;
	AMateria* tmp1;
	
	x->use(0, *y);
	x->use(1, *y);
	
	mat->learnMateria(new Ice());
	mat->learnMateria(new Cure());

	tmp = mat->createMateria("ice");
	x->equip(tmp);
	tmp = mat->createMateria("cure");
	x->equip(tmp);
	tmp = mat->createMateria("cure");
	x->equip(tmp);
	tmp = mat->createMateria("ice");
	x->equip(tmp);
	tmp = mat->createMateria("ice");
	x->equip(tmp);
	tmp = mat->createMateria("cure");
	x->equip(tmp);
	tmp = mat->createMateria("cure");
	x->equip(tmp);
	tmp1 = tmp->clone();
	x->equip(tmp1);
	
	x->use(0, *y);
	x->use(1, *y);
	x->use(2, *y);
	x->use(3, *y);
	x->use(4, *y);
		
	x->unequip(-1);
	x->unequip(0);
	x->use(0, *y);
	tmp = mat->createMateria("cure");
	x->equip(tmp);
	x->use(0, *y);
	x->unequip(1);
	
	delete y;
	delete x;
	delete mat;
}