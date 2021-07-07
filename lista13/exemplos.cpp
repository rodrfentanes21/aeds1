#include <iostream>
#include <string>
using namespace std;
//me executa 
class SouUmaClasse
{
    private:
        int SouUmObjeto;
        char SouOutroObjeto;
    public:
        int SouUmMetodo();
};
class SouHerdeiraDaClasseAcima : public SouUmaClasse
{

};

int main(){
    SouUmaClasse *mensagem = new SouUmaClasse();
    mensagem->SouUmMetodo();
    return 0;
}