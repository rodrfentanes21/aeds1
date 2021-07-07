#include <iostream>
#include <string>
using namespace std;
 
class ALUNO
{
    private:
        string nome;
        int serie;
        int grau;
    public:
        string getNome()
        {
            return this->nome;
        }
        void setNome(string aux)
        {
            this->nome = aux;
        }

         int getSerie()
        {
            return this->serie;
        }
        void setSerie(int aux)
        {
            this->serie = aux;
        }

         int getGrau()
        {
            return this->grau;
        }
        void setGrau(int aux)
        {
            this->grau = aux;
        }
        void toString()
        {
            cout << this->getNome()<< "  " << this->getSerie() << "  " << this->getGrau() << endl;
        }
};

int main(){
  string n;
  int s;
  int g;
  ALUNO *alu1 = new ALUNO();
  ALUNO *aluArmazem = new ALUNO[100];
  int teste = 0;
  int i = 0;
    while(teste == 0)
    {
    cout<<"insira o nome do aluno"<<endl;
    cin >> n;
    alu1->setNome(n);
    cout<<"insira o serie do aluno"<<endl;
    cin >> s;
    alu1->setSerie(s);
    cout<<"insira o grau do aluno"<<endl;
    cin >> g;
    alu1->setGrau(g);
    alu1->toString();
    aluArmazem[i] = *alu1;
    cout <<"0 - Adicionar mais Alunos\n\n1 - Terminar \n"<<endl;
    cin >> teste;
    i++;
    aluArmazem[0].toString();
    }
   
    

}