#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->name = "DiamondTrap";
    ClapTrap::name += "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), name(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap parameterized constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : FragTrap(obj), ScavTrap(obj), name(obj.name)
{
    std::cout << "DiamondTrap copy constructor called\n";
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    std::cout << "DiamondTrap copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->name  = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.hitPoints;
    this->attackDamage = obj.attackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called\n";
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}