#include<iostream>
#include<string>

using namespace std;
class Configuracao{
    static Configuracao * _instancia;
    int _brilho;
    int _largura;
    int _comprimento;
    
    Configuracao(): _largura(768),_comprimento(1366),_brilho(){};

public:
    static Configuracao * getInstance(){
        if(_instancia == NULL)
            _instancia = new Configuracao();
        return _instancia;
    }
    void setBrilho(int brilho){_brilho = brilho;}
    int getBrilho(){ return _brilho;}
    string toString(){ 
        return "BRILHO["+to_string(_brilho)+
        "], LARGURA["+to_string(_largura)+
        "], COMPRIMENTO["+to_string(_comprimento)+"]";
    }
};

//instância global
Configuracao * Configuracao::_instancia;

void teremosUmaNovaInst(){
    Configuracao *setting = Configuracao::getInstance();
    cout<<"De dentro(): "<<setting->toString()<<endl;     
}

int main(){
    Configuracao *setting = Configuracao::getInstance();
    cout<<setting->toString()<<endl;   

    teremosUmaNovaInst();     
    return 0;
}
