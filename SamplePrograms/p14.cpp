// C Program to Convert Lowercase Characters by Uppercase and Vice-Versa
#include<iostream>
using namespace std;
int main(){
    string sentance;
    cout<<"Enter a string"<<endl;
    getline(cin,sentance);
    for(int i=0;sentance[i];i++){
        char ch = sentance[i];
        if((ch > 64 && ch<91) || (ch>96 && ch<123)){
            if(ch>64 && ch<91){
                ch = ch + 32;
            }else{
                ch = ch-32;
            }
        }
        sentance[i] = ch;
    }
    cout<<"Output is "<<endl;
    cout<<sentance<<endl;
    return 0;
};