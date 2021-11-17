#pragma once
#include "Activity.h"
class FiveActivity : public Activity
{
  public:
    void run();
    const char* getActivityName() {
      return (char*)"Encontrador de numeros primos";
    };
  private:
    bool isPrime(int number);
};