#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
    ICharacter *simo = new Character("Simo");
    delete simo;
    return 0;
}