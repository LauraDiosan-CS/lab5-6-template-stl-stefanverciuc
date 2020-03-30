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
	assert(c[1] == 'i');
	assert(c[2] == 's');
	c = p.getAutor();
	assert(c[0] == 'd');
	assert(c[1] == 'a');
	assert(c[2] == 'n');



	r.addElem(p);

	

}