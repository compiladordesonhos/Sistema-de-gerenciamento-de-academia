//Sistema de gerenciamento de academia
//Grupo:Inacio Meneses,Leonel Davi,Pedro Ryan

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

//Classe Aluno:

class Aluno:public Plano{
private:
    int idAluno=0;
    string nome="",cpf="",e_mail="",tel="";
public:
//Construtor:
    
    Aluno(int idAluno, string nome,                                                                                                          string cpf,string e_mail,string tel):idAluno(idAluno),nome(nome),cpf(cpf),e_mail(e_mail),tel(tel){}

//Métodos set e get:

//1.id do aluno:
    void setId(int id){idAluno=id;}
    int getid(){return idAluno;}
    
//2.nome do aluno:
    void setNome(string n){nome=n;}
    string getNome(){return nome;}

//3.cpf do aluno:
    void setCPF(string c){cpf=c;}
    string getCPF(){return cpf;}

//4.e-mail do aluno:
    void setEmail(string em){e_mail=em;}
    string getEmail(){return e_mail;}

//5.telefone do aluno:
    void setTel(string t){tel=t;}
    string getTel(){return tel;}
    
    
};    
//Classe Treino:
class Treino:public Aluno{
private:
    int idTreino=0;
    string des="",datInicio="",datTermino="";
public:
   Treino(int idTreino,string des,string datInicio,string datTermino,int idAluno,string nome,string cpf,string e_mail,string tel):Aluno(idAluno,nome,cpf,e_mail,tel),
          idTreino(idTreino),des(des),datInicio(datInicio),datTermino(datTermino){}
    
    
};
