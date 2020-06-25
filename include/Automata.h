#ifndef Automata_H
#define Automata_H
//#include <iostream>
//#include <string>
#include <vector>

//-----------------------------------------------------------//
//
//     THE STATE DIAGRAM CORRESPONDS TO THE PROPOSED ONE
//
//-----------------------------------------------------------//

enum STATES {
	STATE_OFF,
	STATE_WAIT,
	STATE_ACCEPT,
	STATE_CHECK,
	STATE_COOK
};

class Automata {
private:
	STATES State;
	double cash;
	std::vector <std::string> menu;
	std::vector <double> prices;

public:
	Automata(){ off(); }
	void on();
	void off();
	void coin(int addcoin);
	void printMenu();
	void printState();
	void choise();
	void check(int choise);
	void cancel();
	void cook();
	void finish();
	void associate();

	int getState();
	void setState(int x);
};

//std::vector <std::string> menu;

#endif