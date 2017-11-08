//
//  main.cpp
//  examen3_2
//
//  Created by faleyk on 11/8/17.
//  Copyright © 2017 faleyk. All rights reserved.

//  Definición: la velocidad está definida de forma general como V=distancia/tiempo

#include <iostream>
using namespace std;

float vel(float d,float t){
    float r;
    r=d/t;
    return r;
}

int main() {
    float d=0, t=0;
    
    cout<<"Inserta el valor de la distancia en metros:"<<endl;
    cin>>d;
    if(d==0) {
        cout<<"¿No hay distancia recorrida? La velocidad será cero..."<<endl;
        exit(0);
    }
    cout<<"Inserta el valor del tiempo en segundos:"<<endl;
    cin>>t;
    if(t==0) {
        cout<<"¿No hay un tiempo asignado? La velocidad no estará definida..."<<endl;
        exit(0);
    }
    cout<<"El valor de la velocidad es:"<<vel(d,t)<<" m/s"<<endl;
    return 0;
}
