#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "PrimeFunctor.h"

int main(int argc, char const *argv[]){
	
	if (argc < 2){
		std::cerr << "É necessário passar até que número deseja verificar via linha de comando." << std::endl
			<< "Exemplo: ./showprimos 50" << std::endl;
		exit(1); 
	}

	unsigned in = std::stoi(argv[1]);

	std::vector<unsigned> numeros;

	for(unsigned i = 1; i <= in; i++) {
		numeros.push_back(i);
	}

	auto it = std::find_if(numeros.begin(), numeros.end(), PrimeFunctor());

	std::cout << "Números primos [1-" << in << "]: ";

	while(it != numeros.end()) {
	    std::cout << *it << " ";
	    it = std::find_if(++it, numeros.end(), PrimeFunctor());
	}

	std::cout << std::endl;

	return 0;
}