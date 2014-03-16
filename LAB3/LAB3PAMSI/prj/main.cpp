/*! 
   \mainpage Dokumentacja zadania PAMSI LAB 3
   \author Justyna Klijewska
   \date 16.03.2014
   \version 0.1

 */

#include <iostream>
#include "zegar.hpp"
#include "stos.hpp"
#include "kolejka.hpp"
#include "plik.hpp"
using namespace std;


int main()
{
    Stos sto1(0), sto2(0);    // 0 - lista, 1 - tablica
    Queue que1(0), que2(0);
    Zegar zeg_sto, zeg_que;    
    const char * plik1 = "plik1.txt";  // Plik odczytu 1
    const char * plik2 = "plik2.txt";  // Plik odczytu 2
    const char * plik3 = "plik3.txt";  // Plik zapisu 1
    const char * plik4 = "plik4.txt";  // Plik zapisu 2
    
	zeg_sto.Start();			// Rozpoczêcie pracy zegara
    
    Read(plik1, &sto1);		// Wczytujemy pliki do stosu
    Read(plik2, &sto2);		// ...
    
    zeg_sto.Koniec();		// Koniec pracy zegara
    zeg_sto.Wynik();		// Wynik pracy zegara
    
    /*
    sto1 == sto2;
    sto1.Show();
    sto2.Show();
    sto1*2;
    sto1.Show();
    sto1 == sto2;
    Write(plik3, &sto1);
    Write(plik4, &sto2);
    */
    
    
    //que1 == que2;
    
    zeg_que.Start();		// Rozpoczynamy pracê zegara
    
	Read(plik1, &que1);
    Read(plik2, &que2);
    
	zeg_que.Koniec();			// Koniec pracy zegara
	zeg_que.Wynik();			// Wynik pracy zegara
	
	/*
	que1.Show();
    que2.Show();
    que1 == que2;
    que1*2;
    que1 == que2;
    que1.Show();
    Write(plik3, &que1);
    Write(plik4, &que2);
    */
    
    /*****************************/
    
    cin.get();
    
    return 0;
    }
