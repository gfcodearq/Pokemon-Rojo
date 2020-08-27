#include <iostream>
#include <string.h>
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
	string descripcion;
	int precio;
	int cantidad;
public: //metodos
	Objeto(int,string,string,int,int); //constructor		
	void setDatos(); //setters
	void getNombre(); //getters
	void getPrecio(); //getterts
	void getDatos(); //getters
	bool verificar_cantidad();
};	

Objeto::Objeto(int _numero,string _nombre,string _descripcion, int _precio,int _cantidad){ //constructor
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
	cin>>nombre;
	cout<<"Cual es el precio: "<<endl;
	cin>>precio;
	cout<<"Cuantos ingresa: "<<endl;
	cin>>cantidad;	
	cout<<"Ingresar Descripcion"<<endl;
	cin>>descripcion;
}


void Objeto::getDatos(){
	
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pokeball : public Objeto{
	public:
	Pokeball(int,string,string,int,int);
	void setDatosPkb(); //setters
	void getNombrePkb(); //getters
	void getPrecioPkb(); //getterts
	void getDatosPkb(); //getters	
};

Pokeball::Pokeball(int _numero,string _nombre,string _descripcion,int _precio,int _cantidad) : Objeto(_numero,_nombre,_descripcion,_precio,_cantidad){ //constructor heredado
	
}

void Pokeball::setDatosPkb(){
	setDatos();
}
void Pokeball::getNombrePkb(){
	getNombre();
}
void Pokeball::getPrecioPkb(){
	setDatos();
}
void Pokeball::getDatosPkb(){
	getDatos();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Obj : public Objeto{
	public:
	Obj(int,string,string,int,int);
	void setDatosObj();
	void getNombreObj();
	void getPrecioObj();
	void getDatosObj();
};

Obj::Obj(int _numero,string _nombre,string _descripcion, int precio, int cantidad) : Objeto(_numero,_nombre,_descripcion,_precio,_cantidad){
	
}
void Obj::setDatosObj(){
	setDatos();
}
void Obj::getNombreObj(){
	getNombre();
}
void Obj::getPrecioObj(){
	getPrecio();
}
void Obj::getDatosObj(){
	getDatos();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class ObjClave : public Objeto{
};

class MT_MO : public Objeto{
	
};

int main(int argc, char *argv[]) {
	
	
Obj mb1(1,"Masterball","asdasd",0,99);
	mb1.setDatosObj();
	mb1.getDatosObj();
	
	

	
	return 0;
}

