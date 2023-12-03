#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    *this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
    if (this == &obj)
        return *this;
    for (int i = 0; i < 4; i++)
        if (this->_materia[i])
            delete this->_materia[i];
    for (int i = 0; i < 4; i++)
        this->_materia[i] = obj._materia[i]->clone();
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->_materia[i])
            delete this->_materia[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materia[i])
        {
            this->_materia[i] = m;
            break;;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
    }
    return NULL;
}