/* Julian Guillermo Zapata Rugeles
 * 2020
 * Informática 2 UdeA
 * Objetivo : Generar una figura de chars en terminal
 */


#include <iostream>


using namespace std;

void incrementarChar(signed char, short int & ); // recibe el char Inicial y aumentará "maximo" veces
void decrementarChar(signed char, short int & ); // recibe el char Inicial y decrementa "minimo" veces
void agregarEspacios(short int & ); // recibe un número y muestra ' '  N veces


int main()
{
    const char charInicial='A'; // MODIFIQUE PARA CAMBIAR EL PATRON

    short int base = 11 , auxiliar = 0;

    /* -------------------------------------------------------------
     * PATRON SUPERIOR
     * Iterar de manera incremental y llamar a la función para imprimir el patrón
     * se usaron 3 funciones
    */
    for (short int indice = 0 ; indice < 7; indice ++) {
        if(indice!=6){
            incrementarChar(charInicial, indice); //incrementar desde A --> hasta G indice veces
            auxiliar=base-(indice*2);
            agregarEspacios(auxiliar);
            decrementarChar(charInicial,indice);
        }
        else{
            incrementarChar(charInicial, indice);
            auxiliar=base-(indice*2);
            agregarEspacios(auxiliar);
            short int temporal=5;
            decrementarChar(charInicial,temporal);
        }
        cout << endl;
    }

    // -------------------------------------------------------------
    // PATRON INFERIOR
    // Iterar de manera decremental y llamar a las funciones encargadas del patrón

    for (short int indice = 5 ; indice >=0 ; indice --) {
        incrementarChar(charInicial, indice);
        auxiliar=base-(indice*2);
        agregarEspacios(auxiliar);
        decrementarChar(charInicial,indice);
        cout << endl;
    }
    return 0 ;
}



//--------------------------- MOSTRAR ESPACIOS EN FILA -----------------------------------
void agregarEspacios(short int &espacios){
    /*
        Esta funcion toma por referencia un entero corto de N espacios para iterar sobre el
    */
    for (short int i = 0 ; i < espacios ; i ++) {
        cout << ' ';
    }
}

//---------------------------- MOSTRAR CHAR A >> G ---------------------------------------
void incrementarChar(signed char value ,short int &maximo){
    // Esta función imprime únicamente una línea de N chars creciente A -> G
    for (short int i = 0 ; i <= maximo ; i++){
        cout << char(value+i);
    }
}


//---------------------------- MOSTRAR CHAR G >> A ---------------------------------------
void decrementarChar(signed char value ,short int &maximo ){
     // Esta función imprime únicamente una línea de N chars decreciente G -> A
    for (short int i = maximo ; i >= 0 ; i--){
        cout << char(value+i);
    }
}
