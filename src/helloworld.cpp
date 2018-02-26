#include<iostream>
#include "krawtchouk.h"

int main(int argc, char *argv[]){
	std::cout << "Hello World!" << std::endl;
	std::cout << "Krawtchouk Objects!" << std::endl;
	Krawtchouk mykraw;
	std::cout << "var_n = " << mykraw.getVar_n() << ", var_p = " << mykraw.getVar_p() << std::endl;;
	mykraw.var_n = 120;
	mykraw.var_p = 0.3;
	std::cout << "var_n = " << mykraw.getVar_n() << ", var_p = " << mykraw.getVar_p() << std::endl;;

   return 0;
}