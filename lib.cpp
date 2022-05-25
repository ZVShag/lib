
#include <iostream>
#include<string>
using namespace std;
// Создать класс библиотека
// Класс жанры
// Класс книга
// Класс авторы
// реализовать возможность:
// 1.Создавать библиотеку, со всеми вытекающими
// 2. Добавлять книги
// 3. Поиск книги
//      a) по названию
//      b) по автору(авторам)
//      c) по жанру
//      d) по точной дате публикации или периоду
// 4. Редактировать информации о книгах
// 5. Удалять книги из библиотеки
class lib
{
    zhanr* n;
public:
    lib()
    {

    }

};
class zhanr
{
    book* Book;
public:
    zhanr()
    {

    }

};
class book
{
    string name;
    int publish;
    author* auth;
public:
    book()
    {

    }
    ~book()
    {
        delete [] auth;
   }

};
class author
{
    string name;
    string surname;
    string old;
public:
    author()
    {

    }
    
};
int main()
{
    
}

