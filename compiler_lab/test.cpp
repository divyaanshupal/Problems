#include <bits/stdc++.h>
using namespace std;

set<string> keywords={
    "if","else","while","int","float","double","return","for","void"
};

bool isNumber(string s){
    for(char c:s){
        if(!isdigit(c)) return false;
    }
    return true;

}

bool isSymbol(char c){
    string symbol="=&;{},";
    
    return symbol.find(c)!=string::npos;
}

bool isOperator(char c){
    string symbol="+-*/%<>";
    return symbol.find(c) != string::npos;
}

void check(string &token){
    if (!token.empty()) {
                if (keywords.count(token))
                    cout << token << " : Keyword\n";
                else if (isNumber(token))
                    cout << token << " : Number\n";
                else
                    cout << token << " : Identifier\n";
                token = "";
    }
}

int main(){
    string input;
    cout<<"enter the string";
    getline(cin,input);

    string token="";

    for(int i=0;i<input.length();i++){
        char c=input[i];

        if(isspace(c)){
            // if(!token.empty()){
            //     if(keywords.count(token)){
            //         cout<<token<<" :keyword\n";
            //     }
            //     else if(isNumber(token)){
            //         cout<<token<<" :Constant\n";
            //     }
            //     else {
            //         cout<<token<<" :identifier";
            //     }

            //     token="";
            // }
            check(token);
        }

        else if(isOperator(c)){
            if(!token.empty()){
                check(token);
            }
            cout<<c<<" :operator";
        }
        else if(isSymbol(c)){
            check(token);
            cout << c << " :symbol\n";
        }
        else{
            token+=c;
        }

        
    }
    check(token);
}