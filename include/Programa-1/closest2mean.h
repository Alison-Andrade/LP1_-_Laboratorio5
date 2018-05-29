#ifndef _CLOSEST2MEAN_H_
#define _CLOSEST2MEAN_H_

#include <numeric>
#include <iterator>
#include <complex>

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	auto mean = std::accumulate(first, last, 0)/std::distance(first, last);

	InputIterator closest = first;
	first++;

	while(first != last) {
	    if(std::abs(*first-mean) < std::abs(*closest-mean)) {
	    	closest = first;
	    }

	    first++;
	}

	return closest;
}

#endif // _CLOSEST2MEAN_H_
