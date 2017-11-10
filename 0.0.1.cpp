#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void otr(int *mas, int n, int h){
    for(int i=0; i<h; ++i){
        swap(mas[i], mas[n-i-1]);
    }
}

bool proverka(int *mas, int n){
    string string;
    getline(cin, string);
    istringstream stream(string);
    for(int i=0; i<n; ++i){
        if(!(stream>>mas[i])){
            cout<<"An error has occured while reading input data."<<endl;
            return false;
        }
    }
    if(!(stream.eof())){
        cout<<"An error has occured while reading input data."<<endl;
        return false;
    }
}

int main(){
    int n;
    string stroka;
    getline(cin, stroka);
    istringstream stream(stroka);
    
    if(!(stream>>n)){
        cout<<"An error has occured while reading input data."<<endl;
        return -1;
    }
    
    if(n<0){
        cout<<"An error has occured while reading input data."<<endl;
        return -1;
    }
    
    int h=n/2;
    
    int *mas=new int[n];
    
    if(proverka(mas, n)){
        otr(mas, n, h);
        for(int i=0; i<n; ++i){
            cout<<mas[i]<<" ";
        }
    }
    
    delete[]mas;
    return 0;
}
