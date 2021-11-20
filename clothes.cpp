#include <iostream>
#include <string>
#include "clothes.h"

void Clothes::SetBrend(string brend)
{
	this->brend = brend;//даем указание

}

void Clothes::SetZena(int zena)
{
	this->zena = zena;

}


string Clothes::GetBrend()
{
	return this->brend;

}

int Clothes::GetZena()
{
	return this->zena;

}

void Dress::printKategorii()
{
	cout << "Dress" << endl;

}

Dress::Dress(string brend, int zena)//конструктор
{
	Dress::SetBrend(brend);
	Dress::SetZena(zena);

}

void Short::printKategorii()
{
	cout << "Short" << endl;

}

Short::Short(string brend, int zena)//конструктор
{
	Short::SetBrend(brend);
	Short::SetZena(zena);

}

void Trousers::printKategorii()
{
	cout << "Trousers" << endl;

}

Trousers::Trousers(string brend, int zena)//конструктор
{
	Trousers::SetBrend(brend);
	Trousers::SetZena(zena);

}
void Short::SetBrend(string brend)
{
	Clothes::SetBrend(brend);
}

string Short::GetBrend()
{
	return
		Clothes::GetBrend();
}

void Short::SetZena(int brend)
{
	Clothes::SetZena(brend);
}

int Short::GetZena()
{
	return 
		Clothes::GetZena();
}

void Trousers::SetBrend(string brend)
{
	Clothes::SetBrend(brend);

}

string Trousers::GetBrend()
{
	return
		Clothes::GetBrend();

}

void Trousers::SetZena(int brend)
{
	Clothes::SetZena(brend);
}

int Trousers::GetZena()
{
	return
		Clothes::GetZena();
}

void Jeans::printKategorii()
{
	cout << "Jeans" << endl;

}

Jeans::Jeans(string brend, int zena)//конструктор
{
	Jeans::SetBrend(brend);
	Jeans::SetZena(zena);

}

void Jumpsuit::printKategorii()
{
	cout << "Jumpsuit" << endl;

}

Jumpsuit::Jumpsuit(string brend, int zena)//конструктор
{
	Jumpsuit::SetBrend(brend);
	Jumpsuit::SetZena(zena);

}

void T_Shirt::printKategorii()
{
	cout << "T_Shirt" << endl;

}

T_Shirt::T_Shirt(string brend, int zena)//конструктор
{
	T_Shirt::SetBrend(brend);
	T_Shirt::SetZena(zena);

}

void Suit::printKategorii()
{
	cout << "Suit" << endl;

}

Suit::Suit(string brend, int zena)//конструктор
{
	Suit::SetBrend(brend);
	Suit::SetZena(zena);

}

void Transformer::printKategorii()
{
	cout << "Transformer" << endl;

}

Transformer::Transformer(string brend, int zena)//конструктор
{
	Dress::SetBrend(brend);
	Dress::SetZena(zena);
}

int Transformer::GetZena()
{
	return
		Dress::GetZena();
}

string Transformer::GetBrend()
{
	return
		Dress::GetBrend();
}

void  ShopSpace::PrintInfo(Clothes& clothes)
{
	cout << "Бренд:" << clothes.GetBrend() << endl;
	cout << "Цена (бел.руб) :" << clothes.GetZena() << endl;

	cout << "____________________" << endl;
}