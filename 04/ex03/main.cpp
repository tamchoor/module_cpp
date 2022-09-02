#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp0;
	tmp0 = src->createMateria("ice");
	me->equip(tmp0);
	me->unequip(3);
	AMateria* tmp1;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	AMateria* tmp2;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	AMateria* tmp3;
	tmp3 = src->createMateria("cure");
	me->equip(tmp3);

	me->unequip(0);
	AMateria* tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}