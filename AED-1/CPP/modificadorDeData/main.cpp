/* mktime example: weekday calculator */
#include <iostream>
#include <time.h>/* time_t, struct tm, time, mktime */
using namespace std;

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  int year, month ,day;
  const char * weekday[] = { "Sunday", "Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

  /* prompt user for date */
  cout << "Enter year: "; 
  cin >> year;
  cout << "Enter month: "; 
  cin >> month;
  cout << "Enter day: "; 
  cin >> day;

  /* get current timeinfo and modify it to the user's choice */
  time ( &rawtime ); //time() = Get current time (function) //parametro tem que ser time_t
  timeinfo = localtime ( &rawtime ); //localtime() = Convert time_t to tm as local time (function) 
  timeinfo->tm_year = year - 1900; //operator -> or ->* applied to "time_t" (aka "long") instead of to a pointer type, se for time_t; Tem que ser struct tm pra funcionar, as funções so funcionam se o tipo da classe(?) for tm
  timeinfo->tm_mon = month - 1; //operator -> or ->* applied to "time_t" (aka "long") instead of to a pointer type, se for time_t; Tem que ser struct tm pra funcionar, as funções so funcionam se o tipo da classe(?) for tm
  timeinfo->tm_mday = day; //operator -> or ->* applied to "time_t" (aka "long") instead of to a pointer type, se for time_t; Tem que ser struct tm pra funcionar, as funções so funcionam se o tipo da classe(?) for tm

  /* call mktime: timeinfo->tm_wday will be set */
  mktime ( timeinfo );// faz oque o dia fique correto( tem haver com horario de ver�o?) //mktime() = Convert tm structure to time_t (function)

  printf ("That day is a %s.\n", weekday[timeinfo->tm_wday]);

  return 0;
}
