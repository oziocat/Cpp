/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   matematicas.h
 * Author: sergio
 *
 * Created on 4 de agosto de 2017, 1:28
 */

#ifndef MATEMATICAS_H
#define MATEMATICAS_H


#endif /* MATEMATICAS_H */

#include <sstream>
#include <string>
#include <iostream>
using namespace std;

class matematicas {

private:

    int input;
    int total;
    string nombre;
    
public:
    /*contructor*/
    matematicas(){   
    }
    
    matematicas(string n){
        nombre = n;
    }
     
string sumar(int i){
    
    input = i;
    total = i + 36;
    std::ostringstream s ;
    s << total << " " << nombre;
    return s.str();
}


};