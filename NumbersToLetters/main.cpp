#include <iostream>
#include <string>
using namespace std;

//la idea es separar de tres en tres
void imprimir3Cifras(int x){
    string cero_nine[]={"cero","un","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
    int a=x/100;
    if(a){
        if (a==5) cout<<"quinientos ";
        else if(a==7) cout<<"setecientos ";
        else if (a==9) cout<<"novecientos ";
        else if (a==1){
            if (x%100) cout<<"ciento ";
            else{
                cout<<"cien ";
                return;
            }
        }
        else cout<<cero_nine[a]<<"cientos ";
    }
    a=(x-a*100)/10;
    if(a){
        string decenas[]={"","diez","veinte","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "};
        if (a==2){
            if (x%10){
                cout<<"veinti"<<cero_nine[x%10];
                return;
            }
            else{
                cout<<"veinte ";
                return;
            }
        }
        else if(a==1){
            string ten_fiveteen[]={ "diez","once","doce","trece","catorce","quince"};
            if ((a%10)<6) cout<<ten_fiveteen[x%10];
            else cout<<"dieci"<<cero_nine[x%10];
            return;
        }
        else{
            cout<<decenas[a];
            if (x%10) cout<<"y ";
        }
    }
    a=x%10;
    if (a) cout<<cero_nine[a];
}

int main()
{
    long long numero;
    long long base=1000000000;
    cout<<"Ingrese numero: ";
    cin>>numero;

    string denominaciones[]={" mil "," millones "," mil ",""};
    if (numero==0){
        cout<<"cero";
        return 0;
    }
    int aux=0;
    for (int i=0;i<4;i++,base/=1000){
        aux=numero/base;
        numero-=(aux*base);
        if(aux!=1) imprimir3Cifras(aux);
        else if(i==1){
            cout<<"un millon";
            continue;
        }
        else if(i==3) cout<<"un";
        if(aux) cout<<denominaciones[i];
        if(i==3&&aux%10==1) cout<<"o";
    }

    return 0;
}
