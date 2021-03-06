/** @file */
#pragma once
#ifndef  Data_h
#define Data_h

#include <iostream>

using namespace std;

/**Klasa, po której dziedziczą trzy klasy pochodne
*/
class Data {
public:
	int id; ///< Zawiera numer id
	/**Konstruktor bezagrumentowy
	*/
	Data() : id(999999) {} 
	/**
	 Konstruktor jednoargumentowy
	 @param idT Zawiere numer id
	 */
	Data(int idT) : id(idT) {} 
	/**Metoda wirtualna przysłonięta w klasach pochodnych
	*/
	virtual void print() = 0;
};
#endif // ! Data_h
