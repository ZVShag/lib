﻿
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
int n = 0;
string Input(string mess)
{
    string str;
    cout << mess << endl;
    while (true)
    {
        cin.ignore();
        getline(cin, str);
        if (str == "")
        {
            cout << mess << endl;

        }
        else
            break;
    }
    return str;

}
// 3 5
//0.5
// two
// два
int Num_input(string mess)
{
    int k = 0;
    cout << mess << endl;
    while (true)
    {
        try
        {
            cin >> k;
            return k;
            break;

        }
        catch (...)
        {
            cout << mess << endl;
        }
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
        int acount = 0;
        this->name = Input("Name of book:");
        this->publish=Num_input("Date of publish: ");
        acount = Num_input("Enter author count:");
        this->auth = new author[acount];
        for (int i = 0; i < acount; i++)
        {
            auth[i];
        }
        n++;

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
    int n;
public:
    zhanr()
    {
        this->name = Input("Name of zhanr:");
        this->n = Num_input("Enter count of book: ");
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
    bool Get_element_name(string name)
    {
        for (int i = 0; i < n; i++)
        {
            if (Book[i].Get_name() == name)
            {
                return true;
            }
        }
    }
};
class lib
{
    zhanr* a;
    string name;
    int countzhanr;
  
public:
    lib()
    {
        this->name = Input("Enter name of lib: ");
        this->countzhanr = Num_input("Enter Count of zhanr in this lib:");
        this->a = new zhanr[this->countzhanr];
    }
    void Serach_name_book(string sname)
    {
        for (int i = 0; i < countzhanr; i++)
        {
            if (a[i].Get_element_name(sname))
                cout << "Ok";

        }
    }
    int Cet_countzhanr() { return this->countzhanr; }


};

int main()
{
    int z = 0;
   cout << "Create lib press 1:";
   cin >> z;
   if (z==1)
   {
       lib Mendeleev;
   }
    

    
}

