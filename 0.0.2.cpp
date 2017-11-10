#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void sort (unsigned int *mas_A, unsigned int n, unsigned int sdvig){
    int *mas_B = new int [n-sdvig];
    int *mas_C = new int [sdvig];
 for(unsigned int i=0; i<n; ++i){
        if(i<n-sdvig){
            mas_B[i]=mas_A[i];
        }
        else{
            mas_C[i+sdvig-n]=mas_A[i];
        }
    }
    for(unsigned int i=0; i<(n-sdvig)/2; ++i){
        swap(mas_B[i], mas_B[n-sdvig-1-i]);
    }
    for(unsigned int i=0; i<sdvig/2; ++i){
        swap(mas_C[i], mas_C[sdvig-1-i]);
    }
    for(unsigned int i=0; i<n; ++i){
        if(i<n-sdvig){
            mas_A[i]=mas_B[i];
        }
        else{
            mas_A[i]=mas_C[i+sdvig-n];
        }
    }
    for(unsigned int i=0; i<n/2; ++i){
        swap(mas_A[i], mas_A[n-1-i]);
    }
}

int main() 
{ 
    unsigned int n; 
    unsigned int *mas_A; 
        if (cin >> n){
            mas_A = new unsigned int [n];
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
            if(!(stream >> mas_A[i])){ 
                cout<<"An error has occurred while reading input data"<<endl; 
                delete[]mas_A; 
                return -1; 
            } 
        } 
    unsigned int sdvig;    
    cin >>  sdvig;   
    sort (mas_A, n, sdvig); 
        for(unsigned int i=0; i<n; i++){ 
            cout << mas_A[i] << " "; 
        } 
    delete[]mas_A; 
    return 0; 
}
