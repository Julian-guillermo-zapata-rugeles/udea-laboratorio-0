/*
Objetivo : este algoritmo captura un número EJEMPLO : 123
y realiza 1**1 + 2**2 + 3**3 ;

*/

#include <iostream>


using namespace std;

int main()
{
    int  numeroPrueba = 0 , numeroSeparado = 0 ,suma = 0 , potencia;
    bool salida = false ;

    cout << "Ingrese un numero para procesar: " ;
    cin >> numeroPrueba ;

    while (salida==false){
        numeroSeparado =  numeroPrueba % 10   ;
        potencia=1;
        for(int i=0 ; i < numeroSeparado ; i ++ ){
            potencia*=numeroSeparado;
        }
        cout << numeroSeparado << "^" << numeroSeparado << " = " << potencia <<endl;
        numeroPrueba = numeroPrueba/10;
        suma += potencia;
        if(numeroPrueba==0){
            salida=true;
        }

    }
    cout << "la suma es : " <<suma << endl;
    return 0;
}
