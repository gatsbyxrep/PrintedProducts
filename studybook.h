#ifndef STUDYBOOK_H
#define STUDYBOOK_H

#include "printedproduct.h"
class StudyBook : public PrintedProduct
{
protected:
    // Дисциплина учебника
    std::string discipline;
public:
    StudyBook(const std::string &name, const std::string &author, const std::string &publisher, const std::string &discipline);
    StudyBook();
    void show() override;
    std::string getDiscipline() const;
    void setDiscipline(const std::string &value);
};

#endif // STUDYBOOK_H

