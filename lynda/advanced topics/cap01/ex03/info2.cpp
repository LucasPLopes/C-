#include<cstdio>
using namespace std;

class A{
    int v = 0;
public:
    void setV(const int v);
    int getV();
    int getV() const;
    
};
void A::setV(const int v){ this->v =v; }

int A::getV(){
    puts("mutable getV()");
    return v;

}
int A::getV() const{
    puts("const getV()");
    return v;
}

int main(){
    A a;
    a.setV(23);
    printf("A->v = %i\n",a.getV());

    const A b = a;
    printf("A->v = %i\n",b.getV());

    return 0;
}