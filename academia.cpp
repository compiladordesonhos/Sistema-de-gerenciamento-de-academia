//Sistema de gerenciamento de academia
#include <iostream>
using namespace std;

// Classe Plano:
class Plano {
protected:
    int idPlano = 0;
    string nomePlano = "";
    string desc = "";
    float valorMen = 0.0f;

public:
    // Construtor:
    Plano(int idPlano, string nomePlano, string desc, float valorMen)
        : idPlano(idPlano), nomePlano(nomePlano), desc(desc), valorMen(valorMen) {}

    // Métodos set e get:
    void setIdPlano(int id) { idPlano = id; }
    int getIdPlano() { return idPlano; }

    void setNomePlano(string nome) { nomePlano = nome; }
    string getNomePlano() { return nomePlano; }

    void setDescricao(string descricao) { desc = descricao; }
    string getDescricao() { return desc; }

    void setValorMensal(float valor) { valorMen = valor; }
    float getValorMensal() { return valorMen; }
};

// Classe Aluno:
class Aluno {
protected:
    int idAluno = 0;
    string nome = "",cpf = "",e_mail = "",tel = "";
    Plano plano;

public:
    // Construtor:
    Aluno(int idAluno, string nome, string cpf, string e_mail, string tel, Plano plano):idAluno(idAluno), nome(nome), cpf(cpf), e_mail(e_mail), tel(tel), plano(plano) {}
 
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
class Treino{
private:
    int idTreino=0;
    string des="",datInicio="",datTermino="";
    Aluno aluno;
public:
//Construtor:
    Treino(int idTreino,Aluno aluno,string datInicio,string datTermino,string des):idTreino(idTreino),des(des),datInicio(datInicio),datTermino(datTermino),aluno(aluno){}
//Métodos set e get:

//1.descrição do treino:
    void setDescricao(string d){des=d;}
    string getDescricao(){return des;}
    
//2.id do treino:
    void setidTreino(int idt){idTreino=idt;}
    int getidTreino(){return idTreino;}

//3.data de início:
    void setdatInicio(string dI){datInicio=dI;}
    string getdatInicio(){return datInicio;}

//4.data de término:
    void setdatTermino(string dT){datTermino=dT;}
    string getdatTermino(){return datTermino;}



};

//Função principal:
int main(){
//Planos:
    Plano p1={1,"Plano Mensal","Acesso livre à academia por 30 dias",150.00};
    Plano p2={2,"Plano Anual","Acesso livre à academia por 365 dias",1200.00};
    Plano p3={3,"Plano Trimestral","Acesso Livre à academia por 90 dias",360.00};
//Alunos:
    Aluno a1={1,"Ana Maria","111.111.111-11","ana.maria@gmail.com","(11)99999-9999",p1};
    Aluno a2={2,"João Silva","222.222.222-22","joão.silva@hotmail.com","(21)88888-8888",p2};
    Aluno a3={3,"Pedro Alves","333.333.333-33","pedro.alves@outlook.com","(31)77777-7777",p3};
//Treinos:
    Treino t1={1,a1,"2023-05-01","2023-06-01","Treino para perda de peso"};
    Treino t2={2,a2,"2023-06-01","2024-06-01","Treino para ganho de massa muscular"};
    Treino t3={3,a3,"2023-07-01","2023-10-01","Treino para definição muscular"};
}  
