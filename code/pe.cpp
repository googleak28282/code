#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Date{
 
public:
    Date():year(0),month(1),day(1){};
    Date(const unsigned year,
        const unsigned month,
        const unsigned day):
                            year(year),
                            month(month),
                            day(day){};
    ~Date(){};
 
    unsigned getDays()const;
    const Date& setFromDays(unsigned);
    void clear();
    bool isRunNian()const;
 
    const Date& operator+=(const int);
    friend istream& operator>>(istream& in,Date& date);
    friend ostream& operator<<(ostream& out,const Date& date);
 
private:
    unsigned year;
    unsigned month;
    unsigned day;
 
    // �C?��?�l?�O?�~���ĤL��,0�뤣��
    const unsigned daysInEveryMonth[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
};
 
// ?�J?�X
istream& operator>>(istream& in,Date& date){
 
    in>>date.year>>date.month>>date.day;
 
    return in;
}
 
ostream& operator<<(ostream& out,const Date& date){
 
    out<<setw(4)<<setfill('0')<<date.year<<'-'
        <<setw(2)<<date.month<<'-'
        <<setw(2)<<date.day;
 
    return out;
}
 
// �[
const Date& Date::operator+=(const int days){
    setFromDays(getDays() + days);
 
    return *this;
}
 
// �M��
void Date::clear(){
    year = 0;
    month = 1;
    day = 1;
}
 
// �O�_??�~
bool Date::isRunNian()const{
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}
 
// ?�榡�ƪ�???��?�H��?��ܪ�??�W
unsigned Date::getDays()const{
    unsigned days(0);
 
    // �C100�~��24??�~
    days += year / 100 * 24;
    // �C400�~�O?�~
    days += year / 400;
    // �~?�p�_100?,�C4�~�O?�~
    days += (year % 100) / 4;
 
    days += year * 365;
    days += daysInEveryMonth[month];
    days += day;
 
    return days;
}
 
// ?��?��ܪ�??�W?��????��
const Date& Date::setFromDays(unsigned days){
    clear();
 
    // �~��
    while (days > 365){
        ++year;
        days -= 365;
 
        // ?�~
        isRunNian() && --days;
    }
 
    // ���
    month = 12;
    while (days < daysInEveryMonth[month])
        --month;
    days -= daysInEveryMonth[month];
 
    // ���
    day = days;
 
    return *this;
}
 
int main(){
 
 	int n;
 	cin>>n;
    for(int i=0;i<n;i++)
    {
    	int y,m,d,ey,em,ed;
    	cin>>y>>m>>d>>ey>>em>>ed;
    	Date date(y,m,d);
    	Date dd(ey,em,ed);
    	//date += 8113;
    	cout<<dd.getDays()-date.getDays()-1<<endl;
    }
    return 0;
}

