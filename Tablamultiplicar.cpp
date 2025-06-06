#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Ingresa un numero y se te mostrara la tabla del 10 al 1" << endl;
    cin >> num;

    for (int i = 10; i < 0; i++ ){
        cout << i << " x " << i + 1 << " = " << i << endl;
    }
}

