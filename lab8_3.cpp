#include <iostream>
using namespace std;
int main(){
    int Age,Tall,V;
    cout<<"Enter your age: ";
    cin>>Age;
    if(Age<=25&&Age<60){
    cout<<"Enter your height: ";
    cin>>Tall;
    if(Tall<100)
    cout<<"Your character = Chopper";
    else if(Tall<180&&Tall>=100){
    cout << "Your character = Usopp";
    }else{
    cout<<"Enter your bounty: ";
    cin>>V;
    if(V>1100000000)
    cout << "Your character = Zoro";
    else
    cout << "Your character = Sanji";
    }
    }else{
        if(Age>25&&Age<=60){
        cout<<"Enter your bounty: ";
    cin>>V;
    if(V>500000000){
    cout<<"Your character = Jinbe";
    }else
    cout<< "Your character = Franky";
    }else
    cout << "Your character = Brook";
    return 0;
    }
}