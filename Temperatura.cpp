#include <iostream> 

using namespace std; 

int main(){
    double temp;

    cout << "Ingresa la temperatura en Celsius" << endl;
    cin >> temp; 

    if (temp <= 15 ){
        cout << "La temperatura esta muy fria" << endl;
    } else if (temp >= 15 && temp <= 25){
        cout << "la temperatura esta templada" << endl;
    } 
    else if (temp > 25){
        cout << "La temperatura ingresada esta muy caliente" << endl;
    }
    
}