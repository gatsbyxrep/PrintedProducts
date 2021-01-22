#include <iostream>
#include <list>
#include <memory>
#include "book.h"
#include "studybook.h"
#include "magazine.h"

int main()
{
    StudyBook studyBook("Elementary physics", "Einstein", "MIR", "physics");
    std::list<std::unique_ptr<PrintedProduct>> printedProducts;
    printedProducts.push_back(std::make_unique<Book>("War and Piece", "Tolstoy", "MIR", "Novel epic"));
    printedProducts.push_back(std::make_unique<Magazine>("Vouge", "Vouge", "Cond Nast Publications", 15.0));
    printedProducts.push_back(std::make_unique<StudyBook>("Elementary physics", "Einstein", "MIR", "physics"));
    for(auto& product : printedProducts)
        product->show();
    return 0;
}



