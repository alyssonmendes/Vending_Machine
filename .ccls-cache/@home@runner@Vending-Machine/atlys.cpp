#include "menu.h"
#include "utils.cpp"

class menuAtlys : public Menu{
  string init = "Venda de Refrigerante";
  string init2 = "Insira uma moeda de 0,25, 0,50 ou 1,00";
public:
  void setSelect() = 0;
  void getSaldo() = 0;
  void setSaldo() = 0;
  void setDev();
  void getDev;
  menuAtlys();
}

menuAtlys::menuAtlys(){
  printGeneric(init1, int 0);
  printGeneric(init2, int 1);
}

void menuLinux::setSelect(){
  int moeda;
  cout << "Digite uma opcao: ";
  cin >> moeda;
  setSelect(moeda);
}
