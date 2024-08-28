#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": is destroyed!" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}