#ifndef CLOSEST2MEAN_H
#define CLOSEST2MEAN_H

#include <numeric>
#include <iterator>
#include <complex>

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	auto mean = std::accumulate(first, last, 0)/std::distance(first, last);

	InputIterator closest = first;
	first++;

	std::cout << *first - mean << std::endl;

	while(first != last) {
	    if(std::abs(*first-mean) < std::abs(*closest-mean)) {
	    	closest = first;
	    }

	    first++;
	}

	return closest;
}

#endif // CLOSEST2MEAN_H
