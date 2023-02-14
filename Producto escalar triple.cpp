// Producto escalar triple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
    double v1[2];
    double v2[2];
    double v3[2];
    int i;
    double PescalarTot;
    double vectorI;
    double vectorJ;
    double vectorK;
    double PescalarA;
    double PescalarB;
    double PescalarC;
    double PCruzBxC;

    for(i = 0; i < 3; i++) {
        cout << " Ingresa el valor x " << i + 1 << " del primer vector: " << endl;
        cin >> v1[i];

        cout << " Ingresa el valor y " << i + 1 << " del segundo vector: " << endl;
        cin >> v2[i];

        cout << " Ingresa el valor z " << i + 1 << " del tercer vector: " << endl;
        cin >> v3[i];
    }

    vectorI = ((v2[1] * v3[2]) - (v3[1] * v2[2]));
    vectorJ = ((v1[1] * v3[2]) - (v3[1] * v1[2]));
    vectorK = ((v1[1] * v2[2]) - (v2[1] * v1[2]));
    cout << " El Vector I es: " << vectorI << endl << " El Vector J es: " << vectorJ << endl << " El Vector K es: " << vectorK << endl;

    PescalarA = ((v2[1] * v3[2]) - (v3[1] * v2[2])) * v1[0];
    PescalarB = ((v1[1] * v3[2]) - (v3[1] * v1[2])) * v2[0];
    PescalarC = ((v1[1] * v2[2]) - (v2[1] * v1[2])) * v3[0];

    PescalarTot = PescalarA - PescalarB + PescalarC;
    cout << endl << endl;

    PCruzBxC = vectorI - vectorJ + vectorK;

    cout << " El producto cruz BxC es: " << PCruzBxC << endl;

    cout << " El producto escalar es: " << PescalarA << endl;
    cout << " El producto escalar es: " << PescalarB << endl;
    cout << " El producto escalar es: " << PescalarC << endl;
    cout << " El producto escalar triple es: " << PescalarTot;
    
    return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
