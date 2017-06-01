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
 
    // 每?月?始?是?年的第几天,0月不用
    const unsigned daysInEveryMonth[13] = {0,0,31,59,90,120,151,181,212,243,273,304,334};
};
 
// ?入?出
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
 
// 加
const Date& Date::operator+=(const int days){
    setFromDays(getDays() + days);
 
    return *this;
}
 
// 清空
void Date::clear(){
    year = 0;
    month = 1;
    day = 1;
}
 
// 是否??年
bool Date::isRunNian()const{
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}
 
// ?格式化的???化?以天?表示的??戳
unsigned Date::getDays()const{
    unsigned days(0);
 
    // 每100年有24??年
    days += year / 100 * 24;
    // 每400年是?年
    days += year / 400;
    // 年?小于100?,每4年是?年
    days += (year % 100) / 4;
 
    days += year * 365;
    days += daysInEveryMonth[month];
    days += day;
 
    return days;
}
 
// ?天?表示的??戳?化????构
const Date& Date::setFromDays(unsigned days){
    clear();
 
    // 年份
    while (days > 365){
        ++year;
        days -= 365;
 
        // ?年
        isRunNian() && --days;
    }
 
    // 月份
    month = 12;
    while (days < daysInEveryMonth[month])
        --month;
    days -= daysInEveryMonth[month];
 
    // 日期
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

