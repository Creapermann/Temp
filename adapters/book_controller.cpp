#include "book_controller.hpp"
#include <QString>
#include <QDebug>


namespace adapters
{

BookController::BookController()
    : m_book("SomeName")
{
}


BookDto* BookController::getBook()
{
    return &m_book;
}

void BookController::saySomething()
{
    qDebug() << "Something!";
}

} // namespace adapters