
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
    zhanr *n;
public:
    lib()
    {

    }

};
class zhanr
{
    string name;
    book *Book;
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
        cout << "Name of book:" << endl;
        cin >> this->name;
        cout << "Date of publish: " << endl;
        cin >> this->publish;
        cout << "Enter author count:" << endl;
        int n = 0;
        cin >> n;
        author* auth = new author[n];
        for (int i = 0; i < n; i++)
        {
            auth[i];
        }

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
        cout << "Enter name of author:" << endl;
        cin >> this->name;
        cout << "Enter surname:" << endl;
        cin >> this->surname;
        cout << "Enter old:" << endl;
        cin >> this->old;
    }
    string Get_surname()
    {
        return this->surname;
    }
    
};
int main()
{
    author Pushkin;
}

