#include "Character.hpp"


Character::Character(void) : name("noName")
{
	std::cout << "Character default constructor\n";
	this->inventory = new AMateria*[SLOTS];
	for (int i = 0; i < SLOTS; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string const _name) : name(_name)
{
	std::cout << "Character name constructor\n";
	this->inventory = new AMateria*[SLOTS];
	for (int i = 0; i < SLOTS; i++)
	{
		this->inventory[i] = NULL;
	}

}

Character::Character(const Character & ref_Character) : name(ref_Character.name)
{
	std::cout << "Character copy constructor\n";
	this->inventory = new AMateria*[SLOTS];
	for (int i = 0; i < SLOTS; i++)
	{
		this->inventory[i] = ref_Character.inventory[i]->clone();
	}
}

Character	&Character::operator=(Character const & ref_Character)
{
	std::cout << "Character assignement operator\n";
	if (this == &ref_Character)
		return *this;
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->inventory[i])
			delete inventory[i];
		inventory[i] = ref_Character.inventory[i]->clone();
	}
	return *this;
}

Character::~Character(void)
{
	std::cout << "Character destructor\n";
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->inventory[i])
			delete inventory[i];
	}
	delete [] inventory;
}

std::string const & Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	int	i;

	if (!m)
		return ;
	i = 0;
	while (i < SLOTS)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
		i++;
	}

	// inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < SLOTS)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < SLOTS && inventory[idx])
		inventory[idx]->use(target);
}
