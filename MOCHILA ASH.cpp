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
protected: //atributos
	int numero;
	string nombre;
	int precio;
	int cantidad;
public: //metodos
	Objeto(int,string,int,int); //constructor		
	void setDatos(); //setters
	void getNombre(); //getters
	void getPrecio(); //getterts
	void getDatos(); //getters
	bool verificar_cantidad();
};	

Objeto::Objeto(int _numero,string _nombre, int _precio,int _cantidad){ //constructor
	numero = _numero;
	nombre = _nombre;
	precio = _precio;
	cantidad = _cantidad;
}

void Objeto::setDatos(){
	cout<<"Numero del objeto: "<<endl;
	cin>>numero;
	cout<<"Cual es el nombre del objeto: "<<endl;
	cin>>nombre;
	cout<<"Cual es el precio: "<<endl;
	cin>>precio;
	cout<<"Cuantos ingresa: "<<endl;
	cin>>cantidad;
}


void Objeto::getDatos(){
	cout<<"N°: "<<numero<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Cantidad: "<<cantidad<<endl;
}

void Objeto::getPrecio(){
	cout<<"Precio: "<<precio<<endl;
}

void Objeto::getNombre(){
	cout<<"Nombre: "<<nombre<<endl;
}

class Pokeball : public Objeto{
	public:
		Pokeball(int,string,int,int) : Objeto (numero,nombre,precio,cantidad){ //herencia de constructor
		};
};

class Obj : public Objeto{
};

class ObjClave : public Objeto{
};

class MT_MO : public Objeto{
	
};

int main(int argc, char *argv[]) {
	
	
	
	Pokeball Mas1(1,"Masterball",0,88);
	Mas1.getDatos();


	
	return 0;
}

