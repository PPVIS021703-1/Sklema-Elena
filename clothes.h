#pragma once
#include <iostream>
#include <string>

using namespace std;

//абстрактный класс 
class Clothes
{
private:
	string brend;
	int zena;

public:
	void SetBrend(string);//установка бренда
	void SetZena(int);

	string GetBrend();//получение бренда
	int GetZena();

	virtual void printKategorii() = 0;//должны функцию инициализировать(что делает)
};

class Dress:public Clothes//указываем что у него есть родитель
{
public:
	//конструктор
	Dress()
	{
		SetBrend("Нет информации");
		SetZena(0);
	};
	Dress(string, int);

	// вывод категории товуарар на экран 
	void printKategorii();

};

class Short :private Clothes//указываем что у него есть родитель
{
public:
	//конструктор
	Short(string, int);
	//вывод категории на экран
	void printKategorii();

	//сеттеры и геттеры
	void SetBrend(string);//установка бренда
	void SetZena(int);

	string GetBrend();//получение бренда
	int GetZena();
};

class Trousers :protected Clothes//указываем что у него есть родитель
{
public:
	//конструктор
	Trousers(string, int);

	//вывод категории на экран
	void printKategorii();

	//сеттеры и геттеры
	void SetBrend(string);//установка бренда
	void SetZena(int);

	string GetBrend();//получение бренда
	int GetZena();

};

class Shoes :public virtual Clothes
{
public:
	Shoes(string, int);
	void printKategorii();

	void SetBrend(string);
	void SetZena(int);

	string GetBrend();
	int GetZena();
};

class Jeans :public virtual Clothes
{
public:
	Jeans()
	{
		SetBrend("Нет информации");
		SetZena(0);
	};
	Jeans(string, int);
	void printKategorii();

};

class T_Shirt :public virtual Clothes
{
public:
	// конструкторы 
	T_Shirt()
	{
		SetBrend("Нет информации");
		SetZena(0);
	};
	T_Shirt(string, int);

	//вывод категории на экран
	void printKategorii();
};

class Jumpsuit :public virtual T_Shirt, public virtual Jeans
{
public:
	// конструктор
	Jumpsuit(string, int);

	//вывод на экран категории товара
	void printKategorii();

};

class Suit : public Clothes
{
public:
	Suit()
	{
		SetBrend("Нет информации");
		SetZena(0);
	};
	Suit (string, int);
	void printKategorii();

};

class Transformer :public Dress, public Suit   //указываем что у него есть родитель
{
public:
	//конструкторы
	Transformer()
	{
		Dress::SetBrend("Нет информации");
		Dress::SetZena(0);
		
	};
	Transformer(string, int);

	//геттеры для цены и бренда
	string GetBrend();
	int GetZena();
	//вывод категории на экран
	void printKategorii();
};

// пространство имен
namespace ShopSpace
{
	void PrintInfo(Clothes& clothes);
};