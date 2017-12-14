#include "stdafx.h"
#include "Punkt.h"
using namespace std;

Punkt::Punkt(float PunktX, float PunktY)
{
	this->x = PunktX;
	this->y = PunktY;
}
Punkt::Punkt(Punkt& p)
{
	cout << "Wywolano kunstruktor kopiujacy" << endl;
	this->x = p.x;
	this->y = p.y;
}
Punkt Punkt::operator+(Punkt &p)
{
	cout << "okon";
}


void Punkt::dodaj(Punkt &nowy)
{
	cout << "Wywolano dodawanie" << endl;
	this->x += nowy.x;
	this->y += nowy.y;
}
void Punkt::dodaj(Punkt *nowy)
{
	cout << "Wywolano dodawanie" << endl;
	this->x += nowy->x;
	this->y += nowy->y;
}
void Punkt::drukuj()
{	
	cout << "X: " << this->x<<" "<< "Y: " << this->y << endl;;
}
float Punkt::pobierzX()
{
	return this->x;
}
float Punkt::pobierzY()
{
	return this->y;
}




 Punkt::~Punkt()
{
	 cout << "Destruktor";
}

 Tablica::Tablica(int dl ) // tworzy Tablice o zadanej d³ugoœci i wype³nia punktami (0,0)  (1p)
 {
 this->dl = dl;
 if  (dl > 0)
	 {
		 this->w = new Punkt[dl];
	 }
	 else
	 {
		 w = NULL;
		 this->dl = dl;
	 }

 }


Tablica::Tablica(Tablica& w_)
 {
	 if (this->dl > 0)
	 {
		 this->w = new Punkt[dl];
		 for (int i = 0; i < this->dl; i++)
			 {
				w[i] = w_.w[i];
			 }
	 }
}

//Tablica::Tablica(float *x, float *y,int dl)
//{
//	this->dl = dl;
//	if (dl > 0)
//	{
//		w = new Punkt[dl];
//		for (int i = 0; i < dl; i++)
//		{
//			w[i].dodaj(Punkt(x[i], y[i]));
//		}
//	}
//}

//Tablica::~Tablica()
//{
//	delete w;
//	w = NULL;
//
//}

//void Tablica::dodaj(Tablica &w_)
//{
//	this->w = new Punkt[dl];
//	for (int i = 0; i < this->dl; i++)
//		{
//		this->w[i] = w_.w[i];
//		}
//	
//}
//
//bool Tablica::porownaj(Tablica &w)
//{
//	int i = 0;
//	while (i <= dl)
//	{
//		if ((this->w[i].pobierzX != w.w[i].pobierzX()) ||( this->w[i].pobierzY != w.w[i].pobierzY()))
//		{
//			return false;
//		}
//		i++;
//	}
//	return true;
//	
//	
//
//}

void Tablica::wypisz()
{
	for (int i = 0; i < dl; i++)
	{
		w->drukuj();
	}
}
