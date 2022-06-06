
#include <iostream>
#include<string>
#include<vector>
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
    void Print_auth()
    {
        cout << endl << "Author name: " << this->Get_name() << endl << "Author surname: " << this->Get_surname() <<
            endl << "Author age: " << this->Get_old() << endl;
    }

};
class book
{
    string name;
    int publish;
    author *auth;
    int acount;
public:
   
    book()
    {
        
        this->name = Input("Name of book:");
        this->publish=Num_input("Date of publish: ");
        this->acount = Num_input("Enter author count:");
        this->auth = new author[this->acount];
        for (int i = 0; i < this->acount; i++)
        {
            auth[i];
        }
        n++;

    }
    string Get_name() { return this->name; }
    int Get_Publish() { return this->publish; }
    string Get_author()
    {
        for (int i = 0; i < this->acount; i++)
            return this->auth[i].Get_name();
    }
    void Print_book()
    {
        cout << endl<<this->name << endl << "Date of publish: " << this->publish << endl <<this->Get_author()<<endl;
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
                Book[i].Print_book();
                return true;
            }
        }
    }
    bool Get_author(string aname)
    {
        for (int i = 0; i < this->n; i++)
        {
            if (Book[i].Get_author() == aname)
            {
                return true;
            };
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
        
    }
    void NewLib()
    {
        this->name = Input("Enter name of lib: ");
        this->countzhanr = Num_input("Enter Count of zhanr in this lib:");
        this->a = new zhanr[this->countzhanr];

    }
    void Serach_name_book()
    {
        string sname;
        cout << "Enter name of book : " << endl;
        cin >> sname;
        //vector <book> sbook;
        int k = 0;
        for (int i = 0; i < countzhanr; i++)
        {
            if (a[i].Get_element_name(sname))
                k++;

        }
        if (k == 0)
            cout << "Not found this book"<<endl;
        else
            cout << "There is such a book!"<<endl;
    }
    void Serach_name_author()
    {
        string sname;
        cout << "Enter name of author : " << endl;
        cin >> sname;
        int k = 0;
        for (int i = 0; i < countzhanr; i++)
        {
            if (a[i].Get_author(sname))
                k++;
        }
        if (k==0)
            cout << "Not found this author" << endl;
        else
            cout << "There is such a author!" << endl;
    }
    int Cet_countzhanr() { return this->countzhanr; }


};

int main()
{
    lib Mendeleev;
    while (true)
    {
        int z = 0;
        cout << "Create lib press 1:" << endl << "Upload lib press 2:" << endl << "Find name of book 3:" << endl
            << "Find name of author 4:" << endl << "Find name of zhanr 5:" << endl << "Find date of publish 6:" << endl;
        cin >> z;
        if (z == 1)
        {
            Mendeleev.NewLib();
        }
        if (z == 2)
        {
            cout << "ok";
        }
        if (z == 3)
        {
            Mendeleev.Serach_name_book();
        }
        if (z == 4)
        {
            Mendeleev.Serach_name_author();

        }
    }
    

    
}

