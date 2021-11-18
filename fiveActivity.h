#pragma once
#include "Activity.h"
class FiveActivity : public Activity
{
  public:
    void run();
    string getActivityName() {
      return (string)"Encontrador de numeros primos";
    };
  private:
    bool isPrime(int number);
};