#include "Nodo.h"
#include <vector>
#include <iostream>
using namespace std;
template <class T>
class Heap
{
private:
	Nodo<T>* vec;
	int UltimaHoja;
public:
	Heap() {
		vec = new Nodo<T>[16385];
		UltimaHoja = 0;
	};
	void insert(T ele) {
		insertHeap(ele, 1);
	}
	int eliminar_MB(int n){
		int mayor;
		if (vec[n].libre) {
			mayor = -1;
		}
		else {
			mayor = vec[1].getDato();
			vec[1].setDato(vec[UltimaHoja].getDato());
			vec[UltimaHoja].libre = false;
			UltimaHoja--;
			Recuperar_Arriba_Abajo(1);
		}
		return mayor;
	};
	void ordenar(vector<int> &vec1) {
		int asd;
		for (int i = UltimaHoja; i >=1; i--)
		{
			asd = eliminar_MB(1);
			vec1.push_back(asd);
	
		}
	}
	void mostrarVec() {
		for (int i = 1; i <= UltimaHoja; i++)
		{
			cout << vec[i].getDato() <<"  ";
		}
	};
	void mostrarVector2(vector<int> vec) {
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
	}
	void insertHeap(T ele, int raiz) {
		if (vec[raiz].libre) {
			UltimaHoja = 1;
			vec[UltimaHoja].setDato(ele);
			vec[UltimaHoja].libre = false;

		}
		else {
			UltimaHoja++;
			vec[UltimaHoja].setDato(ele);
			vec[UltimaHoja].libre = false;
			Recuperar_Abajo_Arriba(UltimaHoja);
		}
	}
	void mostrar_Orden(int raiz) {

		if (vec[raiz].libre != true) {
			mostrar_Orden(raiz * 2);
			cout << vec[raiz].getDato() << " ";
			mostrar_Orden(raiz * 2 + 1);
		}

	}

	void mostrar_PosOrden(int raiz) {

		if (vec[raiz].libre != true) {
			mostrar_PosOrden(raiz * 2);
			mostrar_PosOrden(raiz * 2 + 1);
			cout << vec[raiz].getDato() << " ";
		}

	}
	void mostrar_PreOrden(int raiz) {

		if (vec[raiz].libre != true) {
			cout << vec[raiz].getDato() << " ";
			mostrar_PreOrden(raiz * 2);
			mostrar_PreOrden(raiz * 2 + 1);
		}

	};
	int nodosCont() {
		return UltimaHoja;
	}
	int altura(int raiz, int n)
	{
		if (vec[raiz].libre) {
			return 0;
		}
		else {
			return 1 + altura(2 * raiz + n, n);
		}
	}
	int alturaHeap(int raiz) {
		return altura(1, 1) > altura(1, 0) ? altura(1, 1) : altura(1, 0);
	}
	void Recuperar_Abajo_Arriba(int r) {
		if (!vec[r / 2].libre) {
			if (vec[r].getDato() > vec[r / 2].getDato()) {
				int aux = vec[r / 2].getDato();
				vec[r / 2].setDato(vec[r].getDato());
				vec[r].setDato(aux);
				Recuperar_Abajo_Arriba(r / 2);
			}
		}
	};
	void Recuperar_Arriba_Abajo(int n) {

		if (!vec[n*2].libre && !vec[n*2 + 1].libre) {

			if (vec[n * 2].getDato() > vec[n * 2 + 1].getDato()) {
				if (vec[n * 2].getDato() > vec[n].getDato()) {

					int aux = vec[n].getDato();
					//vec[n] = vec[n * 2];
					vec[n].setDato(vec[n * 2].getDato());
					vec[n * 2].setDato(aux);
					Recuperar_Arriba_Abajo(n);
				}

			}
			else {
				if (vec[n * 2 + 1].getDato() > vec[n].getDato()) {

					int aux = vec[n].getDato();
					//vec[n] = vec[n * 2 + 1];
					vec[n].setDato(vec[n * 2+1].getDato());
					vec[n * 2].setDato(aux);
					Recuperar_Arriba_Abajo(n);
				}
			}
		}
		else {
			if (!vec[n * 2].libre) {
				if (vec[n * 2].getDato() > vec[n].getDato()) {
					int aux = vec[n].getDato();
					//vec[n] = vec[n * 2];
					vec[n].setDato(vec[n * 2].getDato());
					vec[n * 2].setDato(aux);
					Recuperar_Arriba_Abajo(n);
				}
			}
		}

	};

	~Heap() {

	};

};
