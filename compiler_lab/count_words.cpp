
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

// int main(){
//     ifstream file("./input.txt");

//     int c;
//     int line=1,words=0,chars=0;
//     bool inwards=0;

//     while((c=file.get())!=EOF){
//         chars++;
        

//         if(c=='\n') line++;

//         if(isspace(c)){
//             inwards=0;
//         }

//         else if(!inwards){
//             words++;
//             inwards=1;
//         }

        


//     }

//     cout<<"chars:"<<chars<<"words:"<<words<<"line:"<<line;
// }

int main(){
    ifstream file("./input.txt");

    if(!file){
        cout<<"file not found"<<endl;
        return 0;
    }

    int c;
    int lines=1,chars=0,words=0,inwards=0;
    while((c=file.get())!=EOF){
        chars++;

        if(c=='\n') lines++;

        if(isspace(c)){
            inwards=0;
        }
        else if(!inwards){
            words++;
            inwards=1;
        }
    }
    cout<<"chars:"<<chars<<"words:"<<words<<"line:"<<lines;
}
