#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
  protected:
	std::string type;

  public:
	WrongAnimal();  // Constructor
	~WrongAnimal(); // Destructor

	std::string getType() const;

	void makeSound() const; // Non-virtual function (No polymorphism)
};

#endif