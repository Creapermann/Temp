#pragma once
#include <QObject>
#include "book_dto.hpp"


namespace adapters
{

class BookController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(BookDto* book READ getBook)
    
public:
    BookController();
    Q_INVOKABLE BookDto* getBook();
    Q_INVOKABLE void saySomething();
    
private:
    BookDto m_book;
};

} // namespace adapters