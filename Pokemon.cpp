#include <iostream>
#include <string.h>
using namespace std;

class Pokemon{
	private: //atributos
	string nombre;
	float peso;
	float altura;
	int nivel;
	int hp; //vida
	string sonido;
	
	public:
		Pokemon(string,float,float,int,int,string);
		void setDatos();
		void getDatos();
		void atacar();
		void recibirDanio();
		virtual string playsonido();		
};

Pokemon::Pokemon(string _nombre,float _peso,float _altura,int _nivel, int _hp, string _sonido){
	nombre = _nombre;
	peso = _peso;
	altura = _altura;
	nivel = _nivel;
	hp = _hp;
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
	cout<<"Hp actual: "<<endl;
	cin>>hp;
	cout<<"Cual es el sonido"<<endl;
}

int main(int argc, char *argv[]) {	
	Pokemon Pikachu();
	
	return 0;
}
