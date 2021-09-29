#include "firstActivity.h";
#include "activity.h";
#include "secondActivity.h";
#include "thirdActivity.h";
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");
    Activity* activities[] = {
        new FirstActivity(),
        new SecondActivity(),
        new ThirdActivity(),
        //Aqui será incrementado a classe de cada nova atividade
    };
    int lenght = sizeof(activities) / sizeof(activities[0]);
    while (true) {
        cout << "Selecione o numero da atividade que deseja rodar:" << endl;
        int selection = 0;
        for (int i = 0; i < lenght; i++) {
            cout << i << ": " << activities[i]->getActivityName() << std::endl;
        }
        cin >> selection;
        if (selection >= lenght || selection < 0) {
            cout << "Numero inválido!" << endl;
        }
        else {
            Activity* selectedActivity = activities[selection];
            std::cout << "=====> " << selectedActivity->getActivityName() << " <=====" << std::endl;
            selectedActivity->run();
        }
        system("PAUSE");
        system("CLS");
    }
}