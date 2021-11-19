#include "./firstActivity.h"
#include "./activity.h"
#include "./secondActivity.h"
#include "./thirdActivity.h"
#include "./fourActivity.h"
#include "./fiveActivity.h"
#include "./sixActivity.h"
#include "./sevenActivity.h"
#include "./eightActivity.h"
#include "./nineActivity.h"
#include "./tenActivity.h"
#include "./elevenActivity.h"
#include "./twelveActivity.h"
#include "./thirteenActivity.h"
#include "./fourteenActivity.h"
#include "./fifteenActivity.h"
#include "./sixteenActivity.h"
#include "./seventeenActivity.h"
#include "./eighteenActivity.h"
#include "./nineteenActivity.h"
#include "./twentyActivity.h"
#include <iostream>
#include <io.h>
#include <fcntl.h>


using namespace std;

int main()
{
    Activity* activities[] = {
        new FirstActivity(),
        new SecondActivity(),
        new ThirdActivity(),
        new FourActivity(),
        new FiveActivity(),
        new SixActivity(),
        new SevenActivity(),
        new EightActivity(),
        new NineActivity(),
        new TenActivity(),
        new ElevenActivity(),
        new TwelveActivity(),
        new ThirteenActivity(),
        new FourteenActivity(),
        //A partir do 15, começou a ser comum nome de classes ser repetida, por isto foi introduzido
        //o uso de namespaces
        new FifteenActivity(),
        new SixteenActivity(),
        new SeventeenActivity(),
        new EighteenActivity(),
        new NineteenActivity(),
        new TwentyActivity(),
        //Aqui ser� incrementado a classe de cada nova atividade
    };
    int lenght = sizeof(activities) / sizeof(activities[0]);
    while (true) {
        cout << "Selecione o numero da atividade que deseja rodar:" << endl;
        int selection = 0;
        for (int i = 0; i < lenght; i++) {
            cout << (i+1) << ": " << activities[i]->getActivityName() << std::endl;
        }
        cout << (lenght+1) << ": Sair do programa" << std::endl;
        cin >> selection;
        selection--;
        if(selection == lenght) {
            break;
        }
        if (selection >= lenght || selection < 0) {
            cout << "Numero invalido!" << endl;
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