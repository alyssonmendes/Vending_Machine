#include <iostream>

using namespace std;

int main() {
  float valor =0;
  int moeda = 0;
  string refri1, refri2;
  
  cout << "Venda de Refrigerante\n";
  while(valor < 1.5 && moeda != 4){
    cout << "Insira uma moeda de 0,25, 0,50 ou 1,00. \n\n";
    cout << "1. R$ 0,25\n2. R$ 0,50\n3. R$ 1,00\n4. Cancelar compra\n";
    cout << "Digite uma opcao: ";
    cin >> moeda;
    switch (moeda){
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
        if (valor > 0) 
          cout << "Devolvendo o valor de R$" << valor << endl;
      break;
      default:
      cout << "Opcao invalida!\n";
        cout << "\n\nDevolvendo moeda\n\n";
      }
    }
   cout << "Venda de Refrigerante\n";
  
  cout << valor;
  return 0;
}