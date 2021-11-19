#pragma once
#include "Activity.h"
#include "fourteenActivity.h"
#include "fifteenActivity.h"
#include "sixteenActivity.h"
#include "seventeenActivity.h"
#include <iostream>

using namespace std;

class EighteenActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Teste";
    };
};

namespace eighteen {
    class Teste { 
        public:
            void main() {
                AssistenteAdministrativo* assistente = new AssistenteAdministrativo();
                assistente->setNome("Lucas");
                assistente->setNumeroDeMatricula(123);
                cout << "O assistente " << assistente->getNome() << 
                    " tem o seguinte numero de matricula: " << assistente->getNumeroDeMatricula()
                    << endl;

                AssistenteTecnico* tecnico = new AssistenteTecnico();
                tecnico->setNome("Mateus");
                tecnico->setNumeroDeMatricula(568);
                cout << "O tecnico " << tecnico->getNome() << 
                    " tem o seguinte numero de matricula: " << tecnico->getNumeroDeMatricula()
                    << endl;

                cout << "Criando cachorro.." << endl;
                fifteen::Cachorro* cachorro = new fifteen::Cachorro();
                cout << cachorro->late() << endl;

                cout << "Criando gato.." << endl;
                fifteen::Gato* gato = new fifteen::Gato();
                cout << gato->mia() << endl;

                cout << "Criando pessoa rica.." << endl;
                fifteen::Rica* rico = new fifteen::Rica();
                rico->fazCompras();

                cout << "Criando pessoa pobre.." << endl;
                fifteen::Pobre* pobre = new fifteen::Pobre();
                pobre->trabalha();

                cout << "Criando pessoa miseravel.." << endl;
                fifteen::Miseravel* miseravel = new fifteen::Miseravel();
                miseravel->mendiga();

                cout << "Criando ingresso.." << endl;
                int selecaoIngresso = 0;
                cout << "Informe 1 para comprar ingresso normal e 2 para vip: " << endl;
                cin >> selecaoIngresso;
                sixteen::Ingresso* ingresso;
                if(selecaoIngresso == 1) {
                    ingresso = new sixteen::Normal();
                } else if(selecaoIngresso == 2) {
                    int selecaoTipoIngressoVip = 0;
                    cout << "Informe 1 para comprar ingresso de camarote superior e 2 para camarote inferior: " << endl;
                    cin >> selecaoTipoIngressoVip;
                    if(selecaoTipoIngressoVip == 1) {
                        cout << "Vip de Camarote superior selecionado" << endl;
                        ingresso = new sixteen::CamaroteSuperior();
                    } else if(selecaoTipoIngressoVip == 2) {
                        cout << "Vip de Camarote inferior selecionado" << endl;
                        ingresso = new sixteen::CamaroteInferior();
                    }
                }
                ingresso->imprimeValor();

                cout << "Imoveis.." << endl;
                int selecaoImovel = 0;
                cout << "Informe 1 para comprar imovel novo e 2 para velho: " << endl;
                cin >> selecaoImovel;
                if(selecaoImovel == 1) {
                    seventeen::Novo* imovelNovo = new seventeen::Novo();
                    imovelNovo->setValorAdicional(50);
                    cout << "Valor final do imovel novo: " << imovelNovo->getPrecoTotal() << endl;
                } else if(selecaoImovel == 2) {
                    seventeen::Velho* imovelVelho = new seventeen::Velho();
                    imovelVelho->setDesconto(50);
                    cout << "Valor final do imovel velho: " << imovelVelho->getPrecoTotal() << endl;
                }
            };
    };
}