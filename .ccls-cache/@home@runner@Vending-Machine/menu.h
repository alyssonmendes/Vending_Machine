class Menu{
  int select;
  float moeda;
  float saldo;
  bool dev;
public: 
   virtual void setSelect() = 0;
   void getSaldo() = 0;
   void setSaldo() = 0;
   void setDev();
 
};