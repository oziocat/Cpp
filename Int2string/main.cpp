/**
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * File:   main.cpp
 * Author: sergio
 *
 * Created on 4 de agosto de 2017, 0:57
 */


#include <string>
#include <iostream>
#include "matematicas.h"

using namespace std; 


int main()
{    
    int number;
    string final;
    
    matematicas objM1("Sergio");
    
    cout << "Ingresa tu edad: ";
    cin >> number;
    
    final = objM1.sumar(number);
    
    cout << "\n\n";
    cout << "Tu edad + la mia es igual a : " << final << "\n Bye!";
    
}

