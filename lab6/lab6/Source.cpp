
#include "Test.h"
#include <iostream>
#include "UI.h"

#include <iostream>
//#include <fstream>

using namespace std;

void initService(Service& s) {
	RepoTemplate<Carte> r;
	//r.load();
	r.loadFromFile("Carti.txt");
	
	s.setRepo(r);
}

int main() {
	cout << "start..." << endl;
	/******TEST REPO FILE****/
	/*TestRepositoryFile test;
	test.testAddElem();
	test.testDelElem();
	test.testElemAtPos();
	test.testFindElem();
	test.testGetAll();
	test.testSize();
	test.testUpdateElem();*/

	/******** TEST SERVICE ******/
/*	TestService ts;
	ts.runTests();
	*/
	test();
	testservice();
	Service serv;
	initService(serv);
	showUI(serv);
	//cout << "succes";
	return 0;
}