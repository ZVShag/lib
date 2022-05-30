
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




class author
{
    string name;
    string surname;
    string old;
public:
    author()
    {
        // Проверка ввода имени автора книги
        cout << "Enter name of author:" << endl;
        while (true)
        {
            getline(cin, this->name);
            if (this->name == "")
            {
                cout << "Enter name of author:" << endl;
               
            }
            else
                break;
        }
        // Проверка ввода фамилии автора книги
        cout << "Enter surname:" << endl;
        while (true)
        {
            getline(cin, this->surname);
            if (this->surname == "")
            {
                cout << "Enter surname of author:" << endl;

            }
            else
                break;
        }
        // Проверка ввода возраста автора книги
        cout << "Enter old:" << endl;
        while (true)
        {
            getline(cin, this->old);
            if (this->old == "")
            {
                cout << "Enter old:" << endl;

            }
            else
                break;
        }
       
    }
    string Get_surname()
    {
        return this->surname;
    }
    string Get_name()
    {
        return this->name;
    }
    string Get_old()
    {
        return this->old;
    }

};
class book
{
    string name;
    int publish;
    author *auth;
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
        this->auth = new author[n];
        for (int i = 0; i < n; i++)
        {
            auth[i];
        }

    }
    ~book()
    {
        ;
    }

};
class zhanr
{
    string name;
    book* Book;
public:
    zhanr()
    {
        cout << "Enter name of zhanr: " << endl;
        cin >> this->name;
        int n;
        cout << "Enter count of book: " << endl;
        cin >> n;
        this->Book = new book[n];
        for (int i = 0; i < n; i++)
        {
            Book[i];
        }
    }

};
class lib
{
    zhanr* a;
public:
    lib()
    {
        this->a = new zhanr[5];
    }

};

int main()
{
    author Pushkin;
}

