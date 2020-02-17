 
#include <iostream>
using namespace std;
 
class Day
{
private: 
    int day, 
        month,
        year; 
public: 
    void message() 
    {
        cout << "\C + + isn't bad\n";
    }
    void setDate(int date_day, int date_month, int date_year) 
    {
        day   = date_day; 
        month = date_month; 
        year  = date_year; 
    }
    void getDate() 
    {
        cout << "Date: " << day << "." << month << "." << year << endl;
    }
}; 
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus"); 
    int day, month, year;
    cout << "¬ведите текущую дату\n";
    cout << "день: ";     cin >> day;
    cout << "мес€ц: ";    cin >> month;
    cout << "год: ";  cin >> year;
    Day objDay;
    objDay.message(); 
    objDay.setDate(day, month, year); 
    objDay.getDate(); 
    system("pause");
    return 0;
}
