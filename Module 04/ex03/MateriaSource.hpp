#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator=(const MateriaSource& obj);
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const& type);
};

#endif