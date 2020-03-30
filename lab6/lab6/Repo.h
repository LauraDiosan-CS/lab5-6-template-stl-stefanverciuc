#pragma once
#include "Carte.h"
#include <deque>
using namespace std;

class Repo
{
private:
	deque<Carte> elem;
	const char* fis;
public:
	Repo();
	Repo(const char* fileName);
	
	void addElem(Carte);
	void updateElem(Carte, char*,char*, bool);
	
	int delElem(Carte);
	
	deque<Carte> getAll();
	int size();
	
	
};


