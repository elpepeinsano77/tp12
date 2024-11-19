#include<iostream>
using namespace std;
class Socio {
	public:
		string nombre;
		int antig;
		Socio(string a, int b):nombre(a),antig(b){}
};
class Club {
	Socio obj1, obj2, obj3;
	public:
		Club():obj1("Juan", 7),obj2("Carlos", 11),obj3("Hector", 8){}
		void imprimir(){
			if(obj1.antig>obj2.antig&&obj1.antig>obj3.antig){
				cout<<"el socio mas antiguo es "<<obj1.nombre;
			}
			else if(obj2.antig>obj1.antig&&obj2.antig>obj3.antig){
				cout<<"el socio mas antiguo es "<<obj2.nombre;
			}
			else if(obj3.antig>obj2.antig&&obj3.antig>obj1.antig){
				cout<<"el socio mas antiguo es "<<obj3.nombre;
			}
		}
};
int main(){
	Club obj;
	obj.imprimir();
}
