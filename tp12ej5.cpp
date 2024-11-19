#include<iostream>
using namespace std;
class Persona{
	protected:
		string nombre;
		int edad;
	public:
		Persona(string a,int b):nombre(a),edad(b){}
		void imprimir(){
			cout<<nombre<<","<<edad<<endl;
		}
};
class Empleado : public Persona{
	int sueldo;
	public:
		Empleado(string a,int b,int c):Persona(a,b),sueldo(c){}
		void imprimir2(){
			cout<<"$"<<sueldo<<endl;
		}
};
int main(){
	Persona obj1("Juan",35);
	obj1.imprimir();
	
	Empleado obj2("Pedro",27,500000);
	obj2.imprimir();
	obj2.imprimir2();
}
