#include <iostream>
using namespace std;
class Mochila{
private:
	
public: 
	Mochila(); // constructor
	void abrirMochila();
	void ingresarItem();
	void sacarItem();
	void cerrarMochila();	
};

class Objetos{
	private: 
	string tipo;
	string nombre;
	int precio;
public:
	int cantidad;
	bool cantidad;
};	


class Pokeballs : public Objetos{
};

class Obj : public Objetos{
};

class ObjClave : public Objetos{
};

class MT_MO : public Objetos{
	
};

int main(int argc, char *argv[]) {
	
	return 0;
}

