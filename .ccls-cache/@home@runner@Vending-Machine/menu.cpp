#include "menu.h"

void Menu::setSaldo() {
  float valor = 0;
  switch (select){
      case 1:
        valor += 0.25;
      break;
      case 2:
        valor += .50;
      break;
      case 3: 
      valor += 1;
      break;
      case 4: 
        valor = 0;
      break;
    }
    saldo = valor;
    }
   
float Menu::getSaldo() {
   return saldo;
    }

void setSelect(int s):select(s){}

void Menu::setDev(){
  float valor = 0;
valor = 0;
saldo = 0;
}
