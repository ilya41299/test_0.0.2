#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void sort (unsigned int *mas, unsigned int n){
    for(unsigned int i=0; i<n/2; ++i){
        swap(mas[i], mas[n-i-1]);
    }
}

int main() 
{ 
    unsigned int n; 
    unsigned int *mas; 
        if (cin >> n){
            mas = new unsigned int [n];
        } 
    else { 
        cout<<"An error has occurred while reading input data"<<endl; 
        return -1; 
    } 
    cin.get(); 
    string stroka; 
    getline (cin, stroka); 
    istringstream stream (stroka); 
        for (unsigned int i=0; i<n;i++){ 
            if(!(stream >> mas[i])){ 
                cout<<"An error has occurred while reading input data"<<endl; 
                delete[]mas; 
                return -1; 
            } 
        } 
    sort (mas, n); 
        for(unsigned int i=0; i<n; i++){ 
            cout << mas[i] << " "; 
        } 
    delete[]mas; 
    return 0; 
}
