#include<iostream>

using namespace std;

class Ponto{
	private:
		int x,y;
	public:
		Ponto( int xx = 0, int yy =0 ): x(xx), y(yy){}
		~Ponto(){}
		
		Ponto operator++();
		Ponto operator++(int);
		Ponto operator--();
		Ponto operator--(int);
		
		void print() const;
};
Ponto Ponto::operator--(){
	--x;
	--y;
	return Ponto(x,y);
}
Ponto Ponto::operator--(int){
	--x;
	--y;
	return Ponto(x+1,y+1);
	
}
Ponto Ponto::operator++(){
	return Ponto(++x,++y);	
}
Ponto Ponto::operator++(int){
	++x;
	++y;
	return Ponto(x-1,y-1);
}
void Ponto::print()const{
	cout<<"X: "<< x<<" Y: "<< y<<endl;
}

int main(){
	Ponto A, B(2,3), *C,D, *E,F(5,7);
	
	cout<<"A ";
	A.print();
	
	++A;  // é equivalente a A.operator++();
	cout<<"A ";
	A.print();
	
	
	cout<<"(++A) ";
	(++A).print();
	
	cout<<"A  ";
	A.print();
	
	cout<<"B ";
	B.print();
	
	C= &B;
	++(*C);
	cout<<"++(*C) ";
	C->print();
	
	D= ++B;
	cout<<"*D= ++B ";
	D.print();
	
	E = &F;
	cout<<"E ";
	E->print();
	
	cout<<"--E ";
	--(*E);
	E->print();
	
	cout<<"E-- ";
	(*E)--;
	E->print();
	return 0;
}

