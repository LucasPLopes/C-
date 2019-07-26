#include<iostream>
#include<stack>

using namespace std;


int main(){

		stack <string> cartas;
		cartas.push("rei de copas");
		cartas.push("rei de espadas");
		cartas.push("rei de ouros");
		cartas.push("rei de paus");
		
		cout<<cartas.size()<<endl;
		cout<<cartas.top()<<endl;
		cout<<cartas.top()<<endl;
		cartas.pop();
		cout<<cartas.top()<<endl;
	
	
	
	
	return 0;
}
