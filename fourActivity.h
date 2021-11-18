#include "Activity.h"
class FourActivity :
    public Activity
{
    public:
        void run();
        string getActivityName() {
            return (string)"Numero do mes para nome";
        };
    private:
        string convertMonthIntToString(int monthNumber);
        string switchConvertMonthIntToString(int monthNumber);
};