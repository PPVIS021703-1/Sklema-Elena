#pragma once
#include <iostream>
#include <string>

using namespace std;

//����������� ����� 
class Clothes
{
private:
	string brend;
	int zena;

public:
	void SetBrend(string);//��������� ������
	void SetZena(int);

	string GetBrend();//��������� ������
	int GetZena();

	virtual void printKategorii() = 0;//������ ������� ����������������(��� ������)
};

class Dress:public Clothes//��������� ��� � ���� ���� ��������
{
public:
	//�����������
	Dress()
	{
		SetBrend("��� ����������");
		SetZena(0);
	};
	Dress(string, int);

	// ����� ��������� �������� �� ����� 
	void printKategorii();

};

class Short :private Clothes//��������� ��� � ���� ���� ��������
{
public:
	//�����������
	Short(string, int);
	//����� ��������� �� �����
	void printKategorii();

	//������� � �������
	void SetBrend(string);//��������� ������
	void SetZena(int);

	string GetBrend();//��������� ������
	int GetZena();
};

class Trousers :protected Clothes//��������� ��� � ���� ���� ��������
{
public:
	//�����������
	Trousers(string, int);

	//����� ��������� �� �����
	void printKategorii();

	//������� � �������
	void SetBrend(string);//��������� ������
	void SetZena(int);

	string GetBrend();//��������� ������
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
		SetBrend("��� ����������");
		SetZena(0);
	};
	Jeans(string, int);
	void printKategorii();

};

class T_Shirt :public virtual Clothes
{
public:
	// ������������ 
	T_Shirt()
	{
		SetBrend("��� ����������");
		SetZena(0);
	};
	T_Shirt(string, int);

	//����� ��������� �� �����
	void printKategorii();
};

class Jumpsuit :public virtual T_Shirt, public virtual Jeans
{
public:
	// �����������
	Jumpsuit(string, int);

	//����� �� ����� ��������� ������
	void printKategorii();

};

class Suit : public Clothes
{
public:
	Suit()
	{
		SetBrend("��� ����������");
		SetZena(0);
	};
	Suit (string, int);
	void printKategorii();

};

class Transformer :public Dress, public Suit   //��������� ��� � ���� ���� ��������
{
public:
	//������������
	Transformer()
	{
		Dress::SetBrend("��� ����������");
		Dress::SetZena(0);
		
	};
	Transformer(string, int);

	//������� ��� ���� � ������
	string GetBrend();
	int GetZena();
	//����� ��������� �� �����
	void printKategorii();
};

// ������������ ����
namespace ShopSpace
{
	void PrintInfo(Clothes& clothes);
};