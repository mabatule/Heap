#pragma once
template <class T>
class Nodo
{
private:
	T dato;

public:
	bool libre;
	Nodo() {
		libre = true;
	};
	void setDato(T d) {
		dato = d;
	}
	T getDato() {
		return dato;
	}

	~Nodo() {
	};
};

