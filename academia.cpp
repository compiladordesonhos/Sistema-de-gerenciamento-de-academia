#include<iostream>

using namespace std;
//Classe Plano:
class Plano{
private:
  int idPlano=0;
  string nomePlano="",desc="";
  float valorMen=0.0f;
//Construtor:
public:
  Plano(int idPlano,string nomePlano,string desc, float valorMen):idPlano(idPlano),nomePlano(nomePlano),desc(desc),valorMen(valorMen){}

//Métodos set e get:

//1.id do plano:
  void setidPlano(float ip){idPlano=ip;}
  float getidPlano(){return idPlano;}

//2.Nome do plano:
  void setnomePlano(string np){nomePlano=np;}
  string getnomePlano(){return nomePlano;} 

//3.Descrição:
  void setDescricao(string d){desc=d;}
  string getDescricao(){return desc;} 


//4.Valor mensal:
  void setValormen(float vm){valorMen=vm;}
  float getValormen(){return valorMen;}
};

  
