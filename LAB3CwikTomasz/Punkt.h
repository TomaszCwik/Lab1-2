#include "stdafx.h"
#include <iostream>
using namespace std;
class Punkt
{
private:
	float x;
	float y;

public:
	Punkt(Punkt& przekazywany);
	Punkt(float x=0, float y=0);
	void dodaj(Punkt &p); //dodawanie do siebie wsp�3rzednych wektora
	void dodaj(Punkt *p);
	void drukuj();
	~Punkt();
	float pobierzX();
	float pobierzY();
	Punkt operator+(Punkt &p);

};
class Tablica
{
	Punkt * w;
	int dl;								// dlugo�� Tablicy
public:

	Tablica(int dl );				// tworzy Tablice o zadanej d�ugo�ci i wype�nia punktami (0,0)  (1p)
	void  wypisz();
	Tablica(Tablica &w_);				//inicjalizacja za pomoc� Tablicy w_ (2p)
	Tablica(float *x, float *y,int dl);	// inicjalizacja tablicy� punkt�w� tablicami x -�w i y -�w (2p)
	~Tablica();							// (1p)
	void dodaj(Tablica &w_);					// dodaje do siebie Tablice w_ (2p)
	bool porownaj(Tablica &w);					// porownaie z Tablica w_; (2p)
};