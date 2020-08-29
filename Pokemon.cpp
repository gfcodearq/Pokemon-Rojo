#include <iostream>
#include <string.h>
using namespace std;

class Pokemon{
protected: //atributos
	string nombre;
	string tipo;
	float peso;
	float altura;
	int nivel;
	int ps; //vida
	string sonido;
	
public:
	Pokemon(string,string,float,float,int,int,string);
	void setDatos();
	void getDatos();
	void atacar();
	void recibirDanio();
	virtual void playsonido();		
};

Pokemon::Pokemon(string _nombre,string _tipo,float _peso,float _altura,int _nivel, int _ps, string _sonido){
	nombre = _nombre;
	tipo = _tipo;
	peso = _peso;
	altura = _altura;
	nivel = _nivel;
	ps = _ps;
	sonido = _sonido;
}

void Pokemon::setDatos(){
	cout<<"Digite el nombre: "<<endl;
	cin>>nombre;
	cout<<"Digite su peso: "<<endl;
	cin>>peso;
	cout<<"Digite la altura: "<<endl;
	cin>>altura;
	cout<<"Digite el nivel: "<<endl;
	cin>>nivel;
	cout<<"ps actual: "<<endl;
	cin>>ps;
	cout<<"Cual es el sonido"<<endl;
}

void Pokemon::getDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Peso: "<<peso<<"Kg"<<endl;
	cout<<"Altura: "<<altura<<"cm"<<endl;
	cout<<"Nivel: "<<nivel<<endl;
	cout<<"Ps: "<<ps<<endl;
	cout<<"Sonido: "<<sonido<<endl;
}

void Pokemon::atacar(){
}

void Pokemon::recibirDanio(){
}

void Pokemon::playsonido(){
	
}

int main(int argc, char *argv[]) {	
	Pokemon Pikachu("Pikachu","Electrico",6,0.4,5,31,"Pika Pika");
	//Pokemon Bulbasor("Bulbasaur","Semilla",6.9,0.7,31,"Bulbasaur");
	Pikachu.getDatos();
	return 0;
}


