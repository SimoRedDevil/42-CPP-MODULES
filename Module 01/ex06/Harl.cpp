#include "Harl.hpp"

Harl::Harl(void)
{
    /*NOTHING*/
}

Harl::~Harl(void)
{
    /*NOTHING*/
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now.\n";
}

static e_level getLevel(std::string level)
{
    e_level lvl = NONE;
    if (level == "DEBUG")
        lvl = DEBUG;
    else if (level == "INFO")
        lvl = INFO;
    else if (level == "WARNING")
        lvl = WARNING;
    else if (level == "ERROR")
        lvl = ERROR;
    return lvl;
}

void Harl::complain(std::string level)
{
    void (Harl::*funcPtr[4])(void) = 
    {   
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    switch (getLevel(level))
    {
        case DEBUG:
            (this->*funcPtr[0])();
        case INFO:
            (this->*funcPtr[1])();
        case WARNING:
            (this->*funcPtr[2])();
        case ERROR:
            (this->*funcPtr[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}