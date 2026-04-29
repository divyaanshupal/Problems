#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isKeyword(string word) {
    string keywords[] = {"int","float","if","else","while","return","char","double","for"};
    
    for(string k : keywords){
        if(word == k)
            return true;
    }
    return false;
}

bool isOperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/' || c=='=');
}

bool isSpecialSymbol(char c){
    return (c=='(' || c==')' || c=='{' || c=='}' || c==';' || c==',' );
}

int main(){

    string input;
    cout<<"Enter a line of code:\n";
    getline(cin,input);

    string word="";

    for(int i=0;i<input.length();i++){

        if(isalnum(input[i])){ 
            word += input[i];
        }
        else{

            if(word!=""){
                if(isKeyword(word))
                    cout<<word<<" -> Keyword\n";
                else if(isdigit(word[0]))
                    cout<<word<<" -> Constant\n";
                else
                    cout<<word<<" -> Identifier\n";

                word="";
            }

            if(isOperator(input[i]))
                cout<<input[i]<<" -> Operator\n";

            else if(isSpecialSymbol(input[i]))
                cout<<input[i]<<" -> Special Symbol\n";
        }
    }

    if(word!=""){
        if(isKeyword(word))
            cout<<word<<" -> Keyword\n";
        else
            cout<<word<<" -> Identifier\n";
    }

    return 0;
}