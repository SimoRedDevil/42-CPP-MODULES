#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

enum e_level
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    NONE
};

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

#endif