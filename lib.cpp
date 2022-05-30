
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

string Input(string mess)
{
    string str;
    cout << mess << endl;
    while (true)
    {
        getline(cin, str);
        if (str == "")
        {
            cout << mess << endl;

        }
        else
            break;
    }

}



class author
{
    string name;
    string surname;
    string old;
public:
    author()
    {
        this->name = Input("Enter name of author:");
        this->surname = Input("Enter surname:");
        this->old = Input("Enter old:");
       
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
        this->name = Input("Name of book:");
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
    string Get_name() { return this->name; }
    int Get_Publish() { return this->publish; }
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
        this->name = Input("Name of zhanr:");
        int n;
        cout << "Enter count of book: " << endl;
        cin >> n;
        this->Book = new book[n];
        for (int i = 0; i < n; i++)
        {
            Book[i];
        }
    }
    string Get_name()
    {
        return this->name;
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

