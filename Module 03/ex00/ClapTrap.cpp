#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("Simo"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "ClapTrap copy constructor called\n";
    *this = obj; 
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
    //ClapTrap <name> attacks <target>, causing <damage> points of damage!
    if (!hitPoints)
        std::cout << "ClapTrap has no hit points\n";
    else if (!energyPoints)
        std::cout << "ClapTrap has no energy points\n";
    else
    {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " take " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!hitPoints)
        std::cout << "ClapTrap has no hit points\n";
    else if (!energyPoints)
        std::cout << "ClapTrap has no energy points\n";
    else
    {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " be repaired " << amount << " hit points\n";
    }   
}

const std::string& ClapTrap::getName(void)
{
    return this->name;
}