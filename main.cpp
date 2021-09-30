#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct timeOfDay {
short hour;
short minute;
short second;
}etime;
struct appDate{
  short dayOfMonth;
  short month;
  int year;
}date;
struct event{
string eventName;
timeOfDay eventtime;
appDate eventDate;
}event;
 
int main() {
  int timeOfDay=1030;
event.eventName="Catalina Wine Mixer";
event.eventtime.hour=9;
event.eventtime.minute=30;
event.eventtime.second=0;
event.eventDate.dayOfMonth=30;
event.eventDate.month=9;
event.eventDate.year=2021;
}