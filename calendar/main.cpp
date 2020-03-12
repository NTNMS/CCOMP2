#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
void printArray(T arr[],int sizes){
    for (int i=0;i<sizes;i++)
        cout<< arr[i]<<" ";
}

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

void fillDistanceMonths(int arr[],int daysMonth[]){
    arr[0]=0;
    for (int i=0;i<11;i++)
        arr[i+1]=(arr[i]+daysMonth[i])%7;
    printArray(arr,12);
}

int main(){
    string monthsNames[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","setiembre","Octubre","Noviembre","Diciembre"};
    int year, month;
    cin>>year;
    cin>>month;
    int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int distances[12];//to save distance in nobisiest year

    if (!(year%4)){//si es bisiesto
        if(year%100) daysInMonth[1]++;//no divisible entre 100 si lo es
        else if(!(year%400)) daysInMonth[1]++;
    }

    fillDistanceMonths(distances,daysInMonth);
    cout<<endl<<monthsNames[--month]<<" del "<<year<<endl;
    printDays(distances[month],daysInMonth[month]);
    cout<<endl;

    return 0;
}
