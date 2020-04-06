#include "UI.h"
#include <iostream>
using namespace std;

void addCarte(Service& s) {
	Carte stud;
	cout << "Dati cartea:";
	cin >> stud;
	s.addCarte(stud);
	cout << "Cartea a fost adaugata cu succes!" << endl;
}


void findCarte(Service& serv) {
	Carte stud;
	cout << "Dati Cartea:";
	cin >> stud;
	int rez = serv.findOne(stud);
	if (rez>=0) cout << "Cartea a fost gasita!" << endl;
	else cout << "Cartea nu a fost gasita!" << endl;
}

void delCarte(Service& serv) {
	Carte stud;
	cout << "Dati studentul:";
	cin >> stud;
	int rez = serv.delCarte(stud);
	if (rez == 0) cout << "Cartea a fost  stearsa cu succes!" << endl;
	else cout << "Cartea NU a fost stearsa!" << endl;
}

void showAll(Service& serv) {
	deque<Carte> stud = serv.getAll();
	for (Carte s : stud)//"range based for loop"~Java,C#
		cout << s;
}

void update(Service& serv) {
	Carte c;
	char t[100], a[100];
	bool ok;
	cout << "Cartea de modificat:";
	cin >> c;
	cout << "Titlul:";
	cin >> t;
	cout << "Autor:";
	cin >> a;
	cout << "Statut:";
	cin >> ok;
	serv.update(c, t, a, ok);
}

void imprumut(Service& serv)
{
	
	char t[100], a[100];
	bool ok=0;
	cout << "Ce carte doriti?:"<<'\n';
	cout << "Titlul:";
	cin >> t;
	cout << "Autor:";
	cin >> a;
	Carte c(t, a, ok);
	int n = serv.findOne(c);
	if (n >= 0)
	{
		serv.update(c, t, a, 1);
		cout << "Cartea a fost imprumutata cu succes!";
	}
	else
	{
		deque<Carte> rez;
		rez = serv.filterByAutor(a);
		if (rez.size()) {
			cout << "Nu va putem decat recomanda alte carti scrise de acelasi autor:" << endl;
			for (Carte current : rez)
				cout << current << " ";
		}
		else
		{
			cout << "Va rugam alegeti alt autor";
		}
	}
}

void showUI(Service& serv)
{
	bool gata = false;
	while (!gata) {
		cout << endl;
		cout << "OPTIUNI: " << endl;
		cout << "	1. Adauga carte " << endl;
		cout << "	2. Cauta cartea " << endl;
		cout << "	3. Sterge carte " << endl;
		cout << "	4. Afiseaza toate cartile " << endl;
		cout << "	5. Update" << endl;
		cout << "	6. Imprumuta o carte" << endl;
		cout << "	0. EXIT!" << endl;
		cout << "Introduceti optiunea (prin numarul ei): " << endl;
		int opt;
		cin >> opt;
		switch (opt) {
		case 1: {addCarte(serv); break; }
		case 2: {findCarte(serv); break; }
		case 3: {delCarte(serv); break; }
		case 4: {showAll(serv); break; }
		case 5: {update(serv); break; }
		case 6: {imprumut(serv); break; }
		case 0: {gata = true; cout << "LA REVEDERE!" << endl; }
		}
	}
}
