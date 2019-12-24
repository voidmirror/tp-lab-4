#include <iostream>
#include <string>
#include "Automata.h"

void Automata::on() {
	State = STATE_WAIT;
	cash = 0;
}

void Automata::off() {
	State = STATE_OFF;
	cash = 0;
}

void Automata::coin(int addcoin) {
	State = STATE_ACCEPT;
	printState();
	cash += addcoin;
}

void Automata::printState() {
	if (State == STATE_OFF) {
		std::cout << "Off" << std::endl;
	}
	else if (State == STATE_WAIT) {
		std::cout << "Waiting" << std::endl;
	}
	else if (State == STATE_ACCEPT) {
		std::cout << "Accepting money" << std::endl;
	}
	else if (State == STATE_CHECK) {
		std::cout << "Checking money" << std::endl;
	}
	else if (State == STATE_COOK) {
		std::cout << "Cooking" << std::endl;
	}
}

void Automata::cancel() {
	std::cout << "Cancel" << std::endl;
	on();
}

void Automata::choise() {
	std::cout << "Choise your coffee:" << std::endl;
	Automata::printMenu();
}

void Automata::printMenu() {
	for (int i = 0; i < prices[0]; i++) {
		std::cout << i + 1 << ") " << menu[i] << " " << prices[i + 1] << std::endl;
	}
}

void Automata::associate() {
	menu.push_back("Espresso");
	menu.push_back("Americano");
	menu.push_back("Glasse");
	menu.push_back("Arabica");
	menu.push_back("Irish");

	prices.push_back(5);
	prices.push_back(90);
	prices.push_back(120);
	prices.push_back(160);
	prices.push_back(190);
	prices.push_back(150);
}

void Automata::cook() {
	State = STATE_COOK;
	printState();
	std::cout << "Your coffee is ready!" << std::endl;
}

void Automata::check(int choise) {
	State = STATE_CHECK;
	printState();
	if (cash < prices[choise]) {
		std::cout << "Please, add more money, not enough" << std::endl;
	}
	else {
		std::cout << "Starting..." << std::endl;
	}
}

void Automata::finish() {
	std::cout << "Thank you!" << std::endl;
	on();
}