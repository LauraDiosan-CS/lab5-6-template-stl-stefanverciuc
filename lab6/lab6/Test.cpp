#include "Repo.h"
#include <assert.h>
#include <iostream>

using namespace std;

void test()
{
	Repo r;
	char t[]="vis", a[]="dan";
	bool ok = 0;
	Carte p(t, a, ok);
	assert(p.getStatut() == ok);
	char* c;
	c = p.getTitlu();
	assert(c[0]=='v');
	r.addElem(p);
	

}