#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Ingresa un numero y se te mostrara la tabla del 1 al 10" << endl;
    cin >> num;

    for (int i = 0; i <= 10; i++ ){
        cout << num << " x " << i << " = " << i * num  << endl;
    }
}

