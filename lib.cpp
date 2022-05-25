
#include <iostream>
#include<string>
using namespace std;
// Создать класс библиотека
// Классы жанры
// Класс книга
// Класс авторы
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

