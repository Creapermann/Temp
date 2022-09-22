#pragma once
#include <QObject>
#include <QString>


namespace adapters
{

class BookDto
{
    Q_GADGET
    Q_PROPERTY(QString name MEMBER m_name)
    
public:
    BookDto();
    BookDto(QString name);
    
private:
    QString m_name;
};

} // namespace adapters


Q_DECLARE_METATYPE(adapters::BookDto)