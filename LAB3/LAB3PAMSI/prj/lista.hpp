#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
/*! 
	* \file
	* \brief Definicja Struktury ListEle
	*
	* Struktura, w kt�rej zdefiniowany jest wskaznik na kolejny element listy oraz zmienna dane, ktora przechowuje dane
	* w tym elemencie*/
struct ListEle
{
       ListEle *next;   
       double dane;     
       };
/*! 
	* \file
	* \brief Definicja klasy Lista
	*
	* Klasa zawira wska�niki na 1 i ostani element listy )(front, back) oraz metody takie jak: is empty, size, push, pop show.
	*/
class List
{
private:
        ListEle * front, * back;   // Wska�niki na pierwszy i ostatni element listy
        unsigned counter;          // Zawiera ile element�w ma lista
      
public:
       List();
      ~List();
      
      void Isempty();                 // Sprawdza czy lista zawiera elementy
      int Size();                              //Wyswietla ilosc elementow
      void Push_Front(double number);            //Dodaje element na poczatek listy
      double Pop_Front();                        //Usuwa element z poczatku listy
      double Pop_Back();
      void Show_List();                              //Wyswietla liste
      
      List & operator == (List & lista);
      List & operator* (double M);
    
};

#endif
