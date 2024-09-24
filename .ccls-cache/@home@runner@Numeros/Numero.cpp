#include "Numero.hpp"
#include <iostream>

Numero::Numero(int _num){
  num=_num;
}

void Numero::setNumero(){
  std::cout<<"Captura el numero"<<std::endl;
  std::cin>>num;
}

int Numero::getNumero(){
  return num;
}

int Numero::sumaNumeros(int)
