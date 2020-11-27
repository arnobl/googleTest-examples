
#ifndef __Velo__
#define __Velo__

#include "Guidon.h"

class Velo {
	private:
		Guidon* guidon;

	public:
		Velo() {
			guidon = nullptr;
		}
		inline Guidon* getGuidon() const {
			return this->guidon;
		}
		inline void setGuidon(Guidon* g) {
			this->guidon = g;
		}
};

#endif
