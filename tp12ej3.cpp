#include<iostream>
using namespace std;
class Punto {
	public:
	int x,y;
		Punto(){
			x=0;
			y=0;
		}
		Punto(int n1, int n2):x(n1),y(n2){}
};
int main(){
	Punto obj(5,3);
	cout<<obj.x<<endl<<obj.y;
}
