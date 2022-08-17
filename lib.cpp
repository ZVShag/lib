
#include <iostream>
#include <fstream>
#include<string>
#include<vector>
/*Создать класс Airplane (самолет)
С помощью перегрузки операторов реализовать:
■ Проверка на равенство типов самолетов (операция = 🙂
■ Увеличение и уменьшение пассажиров в салоне самолета
(операции ++ и - - в префиксной форме)
■ Сравнение двух самолетов по максимально возможному количеству пассажиров на борту (операция>)*/
using namespace std;
class airplane
{
private:

	string model;
	string bort_num;
	int pass;
	int mpass;

public:
	airplane()
	{

	}
	airplane(string mod, string num, int pas,int mpas)
	{
		this->model = mod;
		this->bort_num = num;
		this->pass = pas;
		this->mpass = mpas;
	}
	void Print()
	{
		cout << this->model;
	}
	void set_mod(string mod)
	{
		this->model = mod;
	}
	string get_mod()
	{
		return this->model;
	}
	string get_serial()
	{
		return this->bort_num;
	}

	void add_pass()
	{
		cout << "Введите кол-во пассажиров для добавления:" << endl;
		int m;
		cin >> m;
		if (m + this->pass < this->mpass)
			this->pass = this->pass + m;
		else
			cout << "Самолет не резиновый!";
	}
	bool operator ==(airplane air1)
	{
		return this->model == air1.model;
	}

};
int main()
{/*
 1. Если вы хотите добавить самолет
 2. Сравнить самолеты по модели
 3. изменить кол-во пассажиров
 */
	string path = "samolet.txt";
	
	
	airplane superjet;
	while (true)
	{
		string model, serial;
		int pas = 0, mpas = 0;
		cout << "Если вы хотите добавить самолет введите 1: " << endl;
		cout << "Если вы хотите сравинить самолеты по типу введите 2: " << endl;
		cout << "Если вы хотите сравинить самолеты по кол-ву пассажиров введите 3: " << endl;
		cout << "Если вы хотите изменить кол-во пассажиров в самолете введите 4: " << endl;
		cout << "Для выхода введите 0: " << endl;
		int k;
		cin >> k;
		if (k == 0)break;
		if (k == 1)
		{
			cout << "Ведите модель самолета: " << endl;
			cin >> model;
			cout << "Ведите серийный номер самолета: " << endl;
			cin >> serial;
			cout << "Ведите кол-во пассажиров в самолете: " << endl;
			cin >> pas;
			cout << "Ведите пассажировместимость самолета: " << endl;
			cin >> mpas;
			airplane superjet(model, serial, pas, mpas);
			//Open file write from file
			ofstream fout;
			fout.open(path, ofstream::app);
			if (!fout.is_open())
			{
				cout << "bad!";
			}
			else
			{
				fout.write((char*)&superjet, sizeof(airplane));
			}
			fout.close();
		}
		if (k == 2)
		{
			cout << "Введите тип самолета:" << endl;
			string md;
			cin >> md;
			//Open file read from file
			ifstream fin;
			if (fin.is_open())
			{
				cout << "Damage file!";
			}
			else
			{
				airplane superjet;
				while (fin.read((char*)&superjet, sizeof(airplane)))
				{
					if (superjet.get_mod() == md)
						superjet.Print();
				}
			}
			fin.close();
		}
		if (k == 4)
		{
			cout << "Ведите серийный номер самолета;" << endl;
			string sr;
			cin >> sr;
			//Open file read from file
			ifstream fin;
			if (!fin.is_open())
			{
				cout << "Damage file!";
			}
			else
			{
				airplane superjet;
				while (fin.read((char*)&superjet, sizeof(airplane)))
				{
					if (superjet.get_serial() == sr)
					{
						cout << "Такой борт найден!" << endl;
						cout << "Если вы хотите добавить кол-во пассажиров введите 1:" << endl;
						cout << "Если вы хотите уменьшить кол-во пассажиров введите 2:" << endl;

					}
				}
			}fin.close();
		}
		
		
		
		
	} 
}
