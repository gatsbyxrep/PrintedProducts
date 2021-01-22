#include "studybook.h"

std::string StudyBook::getDiscipline() const
{
    return discipline;
}

void StudyBook::setDiscipline(const std::string &value)
{
    if(value != "")
        discipline = value;
}

StudyBook::StudyBook(const std::string &name, const std::string &author, const std::string &publisher, const std::string &discipline)
    : PrintedProduct(name, author, publisher), discipline(discipline) { }

StudyBook::StudyBook()
    : PrintedProduct(), discipline("NoDiscipline") { }

void StudyBook::show()
{
    PrintedProduct::show();
    std::cout << " Discipline:" << discipline << std::endl;
}


