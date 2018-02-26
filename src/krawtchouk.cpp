#include "krawtchouk.h"

Krawtchouk::Krawtchouk(){
	
	cout <<"Constructor called." << endl;
	var_n = 150;
	var_p = 0.5;
	cout <<"Constructor done." << endl;
};

int Krawtchouk::getVar_n(){
	return this->var_n;
};

double Krawtchouk::getVar_p(){
	return this->var_p;
};