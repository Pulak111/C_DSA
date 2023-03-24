#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter an alphabet : ";
    cin>>c;
    int LowerCaseVowel,UpperCaseVowel;
    LowerCaseVowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
    UpperCaseVowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' );
    if(LowerCaseVowel || UpperCaseVowel ){
        cout<<c<< " is vowel.";
    }
    else{
        cout<<c<<" is consonant.";
    }
    return 0;
}