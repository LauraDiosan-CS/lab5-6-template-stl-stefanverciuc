#include "Repo.h"
#include <fstream>
#include <string>
using namespace std;


Repo::Repo(){}



void Repo::addElem(Carte s)
{
	elem.push_back(s);
}

void Repo::updateElem(Carte s, char* newTitlu,char* newAutor, bool newStatut)
{
	deque<Carte>::iterator it;
	it = find(elem.begin(), elem.end(), s);
	if (it != elem.end()) {
		(*it).setTitlu(newTitlu);
		(*it).setAutor(newAutor);
		(*it).setStatut(newStatut);
	}

}



//sterge elementul s din repository, returneaza 0 la succes, -1 altfel
int Repo::delElem(Carte s)
{
	deque<Carte>::iterator it;
	it = find(elem.begin(), elem.end(), s);
	if (it != elem.end()) {
		elem.erase(it);
		return 0;
	}
	return -1;

}


deque<Carte> Repo::getAll()
{
	return elem;
}

int Repo::size()
{
	return elem.size();
}





