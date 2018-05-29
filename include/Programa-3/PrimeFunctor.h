#ifndef _PRIMEFUNCTOR_H_
#define _PRIMEFUNCTOR_H_

class PrimeFunctor {
private:
	
public:
	PrimeFunctor() = default;

	bool operator()(unsigned in) const{
		if ((in < 2) || (in%2 == 0 && in != 2)) return false;

		for(unsigned i = 3; i <= in/2; i+=2) {
			if (in%i == 0) return false;
		}

		return true;
	}
};

#endif // _PRIMEFUNCTOR_H_
