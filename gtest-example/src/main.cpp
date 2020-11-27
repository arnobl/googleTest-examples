
#include "Velo.h"
#include "Guidon.h"


int main() {
	Velo* v = new Velo();
	Guidon* g = new Guidon();
	
	g->setVelo(v);
	v->setGuidon(g);

	delete v;
	delete g;

	return 0;
}
