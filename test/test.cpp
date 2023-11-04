#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
class base
{
   
   public:
   int year;
   int month;
   int day;
   base(int year,int month,int day)
  {
   this->year=year;
    this->month=month;
    this->day=day;
  }
  int getyear()const
   {
      return year;
   }
   int getmonth()const
   {
      return month;
   }
   int getday()const
   {
      return day;
   }
};
int main(){
   base today(2023,10,3);
  today.getyear();
  today.getmonth();
  today.getday();
   cout<<"year"<<year<<endl;
   cout<<"month"<<month<<endl;
   cout<<"day"<<day<<endl;

   return 0;
}