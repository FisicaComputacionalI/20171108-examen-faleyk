//
//  main.cpp
//  examen3
//
//  Created by faleyk on 11/8/17.
//  Copyright © 2017 faleyk. All rights reserved.
// Lo que hace el programa es que primero declara la variable x con el valor inicial de 1, luego entra en el ciclo de "while" que evalúa si x<=5, luego evalúa si el mod3 de x=0, si lo es le asigna un nuevo valor a x=x+2 y si no lo es entonces pasa al "else" que indica que hay que imprimir el valor de x y luego asignarle un nuevo valor a x=x+2. Mientras el nuevo valor de x que intente entrar al loop sea <=5 el ciclo se realiza, si no el programa termina.
// En la corrida el valor de x=1, x entra al loop pues x<=5,al entrar al loop, como xmod3 no es 0, el "else" nos indica que se debe de imprimir el valor actual de x (o sea, 1) y asignarle un valor nuevo a x=1+2=3, como 3<=5, el loop comienza de nuevo con x=3, como 3mod3=0 a x le corresponde el valor de x=3+2=5, como 5<=5 el loop comienza de nuevo con x=5, como 5mod3 no es cero, el "else" nos indica que se debe de imprimir el valor actual de x (o sea, 5) y asignarle un valor nuevo a x=5+2=7, como 7>5 el loop que sigue no se realiza y el programa termina.

#include <iostream>
using namespace std;
int main() {
    int x=1;
    while (x<=5){
        if(x%3==0){
            x=x+2;
        }
        else {
            cout<<x<<endl;
            x=x+2;
        }
    }
    
    return 0;
}

//El mismo resultado puede obtenerse usando un "do while" ...

//int main() {
  //  int x=1;
  //  do{
       // if(x%3==0){
        //    x=x+2;
      //  }
       // else {
         //   cout<<x<<endl;
         //   x=x+2;
      //  }
  //  }while(x<=5);
  //
 //   return 0;
//}

