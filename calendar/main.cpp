#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printDays(int startDay=0,int diasMes=31){
    cout<<"  D  L  M  X  J  V  S"<<endl;
    for (int i=0;i<startDay;i++) cout<<setw(3)<<" ";
    startDay++;
    for (int i=0;i<diasMes;i++,startDay++){
        cout<<setw(3)<<i+1;
        if (!(startDay%7)) cout<<endl;
    }
    cout<<endl;
}

int iniciomes(int year,int mes){
    if(mes<=2){mes=mes+12;year=year-1;}
    int dia=(1+(13*(mes+1)/5)+year+(year/4)-(year/100)+(year/400))%7;
    return dia;
}
int main()
{
    int year,mes,dia;
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout << "Ingrese el anio: " << endl;
    cin>>year;
    cout << "Ingrese el mes: " << endl;
    cin>>mes;
    dia=iniciomes(year,mes)-1;
    if(dia<0)dia=6;//En caso de que empiece el mes el dia sabado
    //cout<<dia<<endl;
    if (!(year%4)){//si es bisiesto
        if(year%100) daysInMonth[1]++;//no divisible entre 100 si lo es
        else if(!(year%400)) daysInMonth[1]++;

}
printDays(dia,daysInMonth[mes-1]);
    return 0;
}
