#include<iostream>
#include<vector>
#include<algorithm>


int main(){

    std::vector<int> vetor = {1,4,7,2,3,9,0,8};
    
    std::cout<<"Pré-ordenação"<<std::endl;
    for(auto i: vetor)
        std::cout<<i<<"\t";

    using namespace std; //posso usar a partir daqui tb :D 

    sort(vetor.begin(), vetor.end());

    cout<<"\nPós-ordenação"<<endl;
    for(auto i: vetor)
        cout<<i<<"\t";
    cout<<endl;
    
    cout<<"Maior: " << *max_element(vetor.begin(),vetor.end()) << endl;
    cout<<"Menor: "<< *min_element(vetor.begin(),vetor.end())<<endl;

    return 0;
}