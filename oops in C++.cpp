#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
}
 
void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " <<0<< hh << ":"<< 0<< mm << ":"<<0<< ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T1; //creating objects
     
    T1.getTime();
    T1.convertIntoSeconds();
    T1.displayTime();
     
    return 0;
}

