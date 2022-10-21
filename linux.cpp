#include "menu.h"

class menuLinux : public Menu{
public:
  void setSelect() = 0;
  void getSaldo() = 0;
  void setSaldo() = 0;
  void setDev();
  void getDev;
  menuLinux();
}

menuLinux::menuLinux(){
  cout << "=============================\n";
  cout << "  Venda de Refrigerante\n";
  cout << "=============================\n";
  cout << "Insira uma moeda de 0,25, 0,50 ou 1,00. \n\n";
  cout << "1. R$ 0,25\n2. R$ 0,50\n3. R$ 1,00\n4. Cancelar compra\n";
}

void menuLinux::setSelect(){
  int moeda;
  cout << "Digite uma opcao: ";
  cin >> moeda;
  setSelect(moeda);
}
