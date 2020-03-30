#include "Repo.h"
#include "Test.h"
#include <iostream>

using namespace std;

int main() {

	test();

	Repo r;
	int i = 1;
	while (i)
	{
		cout << "Scrie 1 pentru adaugare,2 afisare, 3 modificare, 4 stergere"<<'\n';
		cin >> i;
		if (i == 1) {
			char titlu[100],autor[100];

			bool ok;
			cout << "Titlul:";
			cin >> titlu;
			cout << "Autor:";
			cin >> autor;
			cout<<"Statut:";
			cin >> ok;
			Carte p(titlu, autor, ok);
			r.addElem(p);
		}
		if (i == 2)
		{
			deque<Carte> carti = r.getAll();
			for (Carte s : carti)
				cout << s;
			cout << '\n';
		}
		if (i == 3)
		{
			char titlu[100], autor[100];

			bool ok;
			cout << "Titlul de modificat:";
			cin >> titlu;
			cout << "Autor de modificat:";
			cin >> autor;
			cout << "Statut de modificat:";
			cin >> ok;
			Carte p(titlu, autor, ok);
			cout << "Titlul:";
			cin >> titlu;
			cout << "Autor:";
			cin >> autor;
			cout << "Statut:";
			cin >> ok;

			r.updateElem(p, titlu, autor, ok);
		}
		if (i == 4)
		{
			char titlu[100], autor[100];

			bool ok;
			cout << "Titlul de modificat:";
			cin >> titlu;
			cout << "Autor de modificat:";
			cin >> autor;
			cout << "Statut de modificat:";
			cin >> ok;
			Carte p(titlu, autor, ok);
			r.delElem(p);
		}
	}
	return 0;
}
