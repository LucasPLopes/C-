#include<iostream>

using namespace std;

class Ponto{
	private:
		int x,y;
	public:

	Ponto( int xx = 0, int yy =0 ): x(xx), y(yy){}
	~Ponto(){}
	void operator ++();// ++P
	// void operator ++(int).//P++
	void print() const;
};
void Ponto::operator++(){
	++x;
	++y;
}
void Ponto::print()const{
	cout<<"X: "<<x<<" Y: "<<y<<endl;
}

int main(){
	Ponto A, B(2,3), *C;
	cout<<"A ";
	A.print();
	++A;
	cout<<"A ";
	A.print();
	cout<<"B ";
	B.print();
	C= &B;
	++(*C);
	cout<<"C ";
	C->print();
	return 0;
}

