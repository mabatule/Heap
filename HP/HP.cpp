#include "pch.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include "Heap.h"
#include "Nodo.h"
#include <vector>
#include <time.h>
#include "timer.h"
void menu() {
	cout << "1.- Insertar" << endl;
	cout << "2.- Numero de nodos" << endl;
	cout << "3.- Altura" << endl;
	cout << "4.- Ordenar vector" << endl;
	cout << "5.- Mostrar vector" << endl;
	cout << "6.- tiempos de ordenamiento" << endl;
	cout << "7.- Mostrar heapSort"<<endl;
	cout << "12.- Salir" << endl;
}

int main()
{
	
	Heap<int>* a = new Heap<int>();
	a->insert(80);
	a->insert(79);
	a->insert(15);
	a->insert(60);
	a->insert(70);
	a->insert(4);
	a->insert(12);
	a->insert(50);
	a->insert(8);
	a->insert(11);
	a->mostrar_Orden(1);
	/*
	timer r1, r2;
	Heap<int>* a = new Heap<int>();
	vector<int>vec1;
	vector<int>vec2;
	srand(time(NULL));
	int num;
	for (int i = 0; i < 10000; i++)
	{
		num = rand();
		a->insert(num);
		vec2.push_back(num);
	}



	int x;
	int y;
	do
	{
		
		
		menu();
		cin >> x;
		switch (x)
		{
		case 1: {
			system("cls");
			cout << "Ingrese el numero que desea ingresar" << endl;
			cin >> y;
			a->insert(y);

			system("cls");
			break;
		}
		case 2: {

			system("cls");
			cout << "El numero de nodos es: " << a->nodosCont();
			cout << endl;
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			int i = 0, tam = 0;
			vector<int> vec;
			system("cls");
			cout << "La altura del arbol es: " << a->alturaHeap(1);
			cout << endl;
			

			cout << endl;
			system("pause");
			system("cls");
			break;
		}
		case 4: {
			system("cls");
			r1.start();
			a->ordenar(vec1);
			r1.stop();
			cout << "HeapSort y vector ordenado Ordenado";
			r2.start();
			sort(vec2.begin(), vec2.end());
			r2.stop();
			cout << endl;
			system("pause");
			system("cls");
			break;
		}
		case 5: {
			system("cls");
			a->mostrarVector2(vec1);
			
			cout << endl;
			system("pause");
			system("cls");
			break;
		}
		case 6: {
			system("cls");
			cout << "El tiempo de HeapSort es: " << r1 << endl;
			cout << "El tiempo de VectorSort es: " << r2 << endl;
			system("pause");
			break;
		}
		case 7: {
			system("cls");
			a->mostrarVec();
			system("pause");
			system("cls");
			break;
		}
		default:
			break;
		}


	} while (x != 12);
	*/
	
};