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
	char[50] nombre;
	char[200] descripcion;
	int precio;
	int cantidad;
public: //metodos
	Objeto(int,char[50],char[200],int,int); //constructor		
	void setDatos(); //setters
	void getNombre(); //getters
	void getPrecio(); //getterts
	void getDatos(); //getters
	bool verificar_cantidad();
};	

Objeto::Objeto(int _numero,char[50] _nombre,char[200] _descripcion, int _precio,int _cantidad){ //constructor
	descripcion = _descripcion;
	numero = _numero;
	nombre = _nombre;
	precio = _precio;
	cantidad = _cantidad;
}

void Objeto::setDatos(){
	cout<<"Numero del objeto: "<<endl;
	cin>>numero;
	cout<<"Cual es el nombre del objeto: "<<endl;
	cin.getline(nombre,100,'n');
	cout<<"Cual es el precio: "<<endl;
	cin>>precio;
	cout<<"Cuantos ingresa: "<<endl;
	cin>>cantidad;
	cout<<"Ingresar Descripcion"<<endl;
	cout<<"Ingresar Descripcion"<<ednl;
	cin.getline(descripcion,500,'n');
}


void Objeto::getDatos(){
	
	cout<<"N°: "<<numero<<endl;
	cout<<"N°: "<<numero<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Descripcion: "<<descripcion<<endl;
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
		Pokeball(int,char[50],char[200],int,int) : Objeto (numero,nombre,descripcion,precio,cantidad){ //herencia de constructor
		};
	void setDatos(); //setters
	void getNombre(); //getters
	void getPrecio(); //getterts
	void getDatos(); //getters
	bool verificar_cantidad();
};

class Obj : public Objeto{
};

class ObjClave : public Objeto{
};

class MT_MO : public Objeto{
	
};

int main(int argc, char *argv[]) {
	
	
	

	Pokeball Mas1(1,"Masterball","pokebolla mejor",0,88);

	Pokeball Mas1(1,"Masterball",0,88);

	Mas1.getDatos();


	
	return 0;
}

