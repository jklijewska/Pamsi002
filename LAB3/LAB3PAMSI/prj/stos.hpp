#ifndef STOS_HPP
#define STOS_HPP

#include "tablica.hpp"
#include "lista.hpp"

enum TYP{ list, stack };  
   /*! 
	* \file
	* \brief Definicja klasy Stos
	*
	* Klasa odpowiadajaca za metody,, ktore wykonuja sie na stosie. Naleza do nich:
	* push, pop, Isempty, Size, Show
*/  
class Stos
{
private:
        
      Tablica tab;
      List lista;
      TYP T;
      
public:
      Stos(int typ) { if(typ == 0){T = list;} else {T = stack;} }
      
      void Push(double ele) { if(T == list){ lista.Push_Front(ele); } else { tab.Push(ele); } }
      double Pop() { if(T == list){ return lista.Pop_Front(); } else { return tab.Pop(); } }
      void Isempty() { if(T == list){ lista.Isempty(); } else { tab.Isempty(); } }
      int Size() { if(T == list){ return lista.Size(); } else { return tab.Size(); } } 
      
      void Show() { if(T == list){ lista.Show_List(); } else { tab.Show_Tab(); } }
      Stos & operator == (Stos & sto){ if(T == list){ lista == sto.lista; } else { tab == sto.tab; } }
      Stos & operator * (double M){ if(T == list){ lista*M; } else { tab*M; } }
      }; 

#endif
