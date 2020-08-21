#include <iostream>
using namespace std;

class Mochila{
private:
	
public: //metodos
	Mochila(); // constructor
	void abrirMochila(); 
	void ingresarItem();
	void sacarItem();
	void cerrarMochila();	
};

void Mochila::abrirMochila(){
	cout<<"Abriendo la mochila"<<endl;
}

void Mochila::ingresarItem(){
	cout<<"Que item desea ingresar"<<endl;
}

void Mochila::cerrarMochila(){
	cout<<"Se ha cerrado la mochila"<<endl;
}

class Objeto{
	private: //atributos
	string tipo; 
	string nombre;
	int precio;
	int cantidad;
public: //metodos
	Objeto(string,string,int,int); //constructor		
	void setTipo(); //setters
	void setNombre(); //setters
	void setPrecio(); //setters
	void getTipo(); //getters
	void getNombre(); //getters
	void getPrecio(); //getterts
	bool verificar_cantidad();
};	

Objeto::Objeto(string _tipo,string _nombre, int _precio,int _cantidad){ //constructor
	tipo = _tipo;
	nombre = _nombre;
	precio = _precio;
	cantidad = _cantidad;
}

void Objeto::setTipo(){
	cout<<"Que tipo de objeto es: "<<endl;
	cin>>tipo;
}



class Pokeball : public Objeto{
};

class Obj : public Objeto{
};

class ObjClave : public Objeto{
};

class MT_MO : public Objeto{
	
};

int main(int argc, char *argv[]) {
	
	return 0;
}

