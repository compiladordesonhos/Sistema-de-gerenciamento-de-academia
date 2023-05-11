#include<iostream>
using namespace std;

class Plano(){
private:
  int id=0;
  string nome="",desc="";
  float valorMen=0.0f;
//Construtor:
public:
  Plano(int id,string nome,string desc, float valorMen):id(id),nome(nome),desc(desc),valorMen(valorMen){}
  void setId(int i){id=i;}
  int getId(){return id;}
};
class Aluno:public Plano{
  int id=0;
  string nome="",cpf="",e_mail="",tel="";
  
