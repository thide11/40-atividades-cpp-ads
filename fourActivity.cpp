#include "fourActivity.h"
#include <iostream>

using namespace std;

void FourActivity::run() {
  int monthNumber = input("Digite o numero do mes: ") - 1;
  if(monthNumber > 11 || monthNumber < 0) {
    cout << "Mes invalido" << endl;
    return;
  }
  string vectorValue = convertMonthIntToString(monthNumber);
  string switchValue = convertMonthIntToString(monthNumber);
  cout << "Implementacao com vetor: Voce esta no mes " << vectorValue << endl;
  cout << "Implementacao com switch: Voce esta no mes " << switchValue << endl;
}

string FourActivity::convertMonthIntToString(int monthNumber) {
  string months[] = {
    "Janeiro",
    "Fevereiro",
    "Marco",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"
  };

  return months[monthNumber];
}

string FourActivity::switchConvertMonthIntToString(int monthNumber) {
  switch (monthNumber) {
    case 1:
      return "Janeiro";
    case 2:
      return "Fevereiro";
    case 3:
      return "Marco";
    case 4:
      return "Abril";
    case 5:
      return "Maio";
    case 6:
      return "Junho";
    case 7:
      return "Julho";
    case 8:
      return "Agosto";
    case 9:
      return "Setembro";
    case 10:
      return "Outubro";
    case 11:
      return "Novembro";
    case 12:
      return "Dezembro";
    default:
      return "Mes desconhecido";
  }
}