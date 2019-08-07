#include<cstdio>
#include<string>
using namespace std;

namespace ns{
    const std::string dentroNS = "(ns::string) " ;
    
    class string{
        std::string s ="";// std
        string ();
    public:
        string(const std::string & str): s( dentroNS + str){}
        const char * c_str() const{ return s.c_str();}
        operator std::string & (){ return s;}
        operator const char * () const { return s.c_str();}
    };


};

int main(){
    const string s1("Minha mensagem");
    puts(s1.c_str());

    const ns::string s2(s1);
    puts(s2);
    return 0;
}