#pragma once
#include "Activity.h"

class TwentySixActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Classes de comissoes";
    };
};

namespace twenty_six {
    class Comissao {
        public:
            virtual double getValorComissao() = 0;
    };
    class Gerente : public Comissao {
        public:
            virtual double getValorComissao() {
                return 1500;
            }
    };
    class Supervisor : public Comissao {
        public:
            virtual double getValorComissao() {
                return 600;
            }
    };
    class Vendedor : public Comissao {
        public:
            virtual double getValorComissao() {
                return 250;
            }
    };
}