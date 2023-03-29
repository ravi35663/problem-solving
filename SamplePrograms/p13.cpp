// C Program to Count the Number of Vowels and Consonants in a Sentence
#include<iostream>
using namespace std;
int main(){
    string sentance;
    cout<<"Enter a sentance"<<endl;
    // cin>>sentance;
    getline(cin,sentance);
    int vowel = 0 , consonants = 0;
    int str_len = sentance.length();
    cout<<"Input string is "<<sentance<<endl;
    for(int i=0;sentance[i];i++){
        char ch = sentance[i];
        // cout<<ch<<endl;
        if((ch>64 && ch<91) || (ch>96 && ch<123)){
            if(ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' ||ch == 'U'){
                vowel++;
            }else{
                consonants++;
            }
        }
    }
    cout<<"Vowels and consonants are "<<vowel<<" and "<<consonants;
    return 0;
}