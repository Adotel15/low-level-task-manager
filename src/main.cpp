
#include "../header/Todo.h"
#include <iostream>

using namespace std;

void print_menu() {

}

int main() {
	
	int opt;
	string name_list;

	cout << "Introduce el nombre de la lista : ";
	cin >> name_list;

	TodoList list_app(name_list);

	do {

		cout << "Introduce una opcion: ";
		cin >> opt;

		if (opt == 1) {
			cout << list_app.get_Name() << endl;
		}
		else if (opt == 2) {
			Task test = { 50, "Nombre generico", HIGH, true };
			list_app.add_Task(test);
		}
		else if (opt == 3) {
			list_app.list_Tasks();
		}

	} while (opt != 0);

	return 0;
}