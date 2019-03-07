#include<iostream>

using namespace std;

class Ponto{
	private:
		int x,y;
	public:

	Ponto( int xx = 0, int yy =0 ): x(xx), y(yy){}
	~Ponto(){}
	// void operator ++();// ++P
	Ponto operator ++();
	// void operator ++(int).//P++
	void print() const;
};
Ponto Ponto::operator++(){
	return Ponto(++x,++y);
	
}
void Ponto::print()const{
	cout<<"X: "<<x<<" Y: "<<y<<endl;
}

int main(){
	Ponto A, B(2,3), *C,D;
	cout<<"A ";
	A.print();
	++A;  // é equivalente a A.operator++();
	cout<<"A ";
	A.print();
	cout<<"B ";
	B.print();
	C= &B;
	++(*C);
	cout<<"C ";
	C->print();
	D= ++B;
	cout<<"D ";
	D.print();
	
	return 0;
}

