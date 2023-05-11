#include<iostream>
using namespace std;

class Plano(){
private:
  int idPlano=0;
  string nomePlano="",desc="";
  float valorMen=0.0f;
//Construtor:
public:
  Plano(int idPlano,string nome,string desc, float valorMen):idPlano(idPlano),nome(nome),desc(desc),valorMen(valorMen){}
};
class Aluno:public Plano{
private:
  int id=0;
  string nome="",cpf="",e_mail="",tel="";
public:
   Aluno(int id,int idPlano,string nome,string desc,float valorMen,string cpf,string e_mail,string tel):Plano(id,nome,desc)id(id),nome(nome),cpf(cpf),e_mail(e_mail)
  
