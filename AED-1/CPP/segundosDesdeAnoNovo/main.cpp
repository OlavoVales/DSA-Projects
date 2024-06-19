/* difftime example */
#include <iostream>
#include <time.h>/* time_t, struct tm, time, mktime */
using namespace std;

int main ()
{
  time_t now;
  struct tm newyear;
  int seconds;

  time(&now);  /* get current time; same as: now = time(NULL)  */ //time() = Get current time (function)

  newyear = *localtime(&now); //localtime() = time_t to tm

  newyear.tm_hour = 0; newyear.tm_min = 0; newyear.tm_sec = 0; //expression must have class type but it has type "time_t" (aka "long") //as funções so funcionam se o tipo da classe(?) for tm
  newyear.tm_mon = 0;  newyear.tm_mday = 1; //expression must have class type but it has type "time_t" (aka "long") //as funções so funcionam se o tipo da classe(?) for tm

  seconds = difftime(now,mktime(&newyear));//difftime() = Return difference between two times (the two arguments have to be of time_t type)]
  //mktime() = tm structure to time_t
  cout << seconds << " seconds since new year in the current timezone.\n";

  return 0;
}
