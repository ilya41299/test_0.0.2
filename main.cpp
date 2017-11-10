#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void sort (int *mas, int n){
    for(unsigned int i=0; i<n/2; ++i){
        swap(mas[i], mas[n-i-1]);
    }
}

bool proverka(int *mas, int n){
    string stroka;
    getline(cin, stroka);
    istringstream stream(stroka);
    for(unsigned int i=0; i<n; ++i){
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

int main() 
{ 
    int n;  
    string stroka; 
    getline (cin, stroka); 
    istringstream stream (stroka); 
        
   if(!(stream>>n)||(n<0)){
        cout<<"An error has occured while reading input data."<<endl;
        return -1;
    }
    
   int *mas=new int[n];
    if(proverka(mas, n)){
        sort(mas, n);
        for(unsigned int i=0; i<n; ++i){
            cout<<mas[i]<<" ";
        }
    }
    delete[]mas;
    return 0; 
}
