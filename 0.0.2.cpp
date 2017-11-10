#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void sort (unsigned int *mas, unsigned int n, unsigned int sdvig){
    int *mas_1 = new int [n-sdvig];
    int *mas_2 = new int [sdvig];
 for(unsigned int i=0; i<n; ++i){
        if(i<n-sdvig){
            mas_1[i]=mas[i];
        }
        else{
            mas_2[i+sdvig-n]=mas[i];
        }
    }
    for(unsigned int i=0; i<(n-sdvig)/2; ++i){
        swap(mas_1[i], mas_1[n-sdvig-1-i]);
    }
    for(unsigned int i=0; i<sdvig/2; ++i){
        swap(mas_2[i], mas_2[sdvig-1-i]);
    }
    for(unsigned int i=0; i<n; ++i){
        if(i<n-sdvig){
            mas[i]=mas_1[i];
        }
        else{
            mas[i]=mas_2[i+sdvig-n];
        }
    }
    for(unsigned int i=0; i<n/2; ++i){
        swap(mas[i], mas[n-1-i]);
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
    unsigned int sdvig;    
    cin >>  sdvig;   
    sort (mas, n, sdvig); 
        for(unsigned int i=0; i<n; i++){ 
            cout << mas[i] << " "; 
        } 
    delete[]mas; 
    return 0; 
}
