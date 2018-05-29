#ifndef _CONTEINERPRINT_H_
#define _CONTEINERPRINT_H_

#include <iostream>

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' '){

	std::cout << label;

	for(auto i = collection.begin(); i != collection.end(); i++) {
		std::cout << *i << separator;
	}
	std::cout << std::endl;
}

#endif // _CONTEINERPRINT_H_
