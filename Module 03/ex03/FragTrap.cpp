#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called\n";
    *this = obj;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap parameterized constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called\n";
}

void FragTrap::attack(const std::string& target)
{
    if (!hitPoints)
        std::cout << "FragTrap has no hit points\n";
    else if (!energyPoints)
        std::cout << "FragTrap has no energy points\n";
    else
    {
        energyPoints--;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap high fives!\n";
}