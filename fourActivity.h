#include "Activity.h"
class FourActivity :
    public Activity
{
    public:
        void run();
        const char* getActivityName() {
            return (char*)"Numero do mes para nome";
        };
    private:
        char* convertMonthIntToString(int monthNumber);
        char* switchConvertMonthIntToString(int monthNumber);
};