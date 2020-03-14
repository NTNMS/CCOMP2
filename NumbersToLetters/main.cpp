#include <iostream>
#include <string>
using namespace std;

void imprimir3Cifras(int x);
void imprimirNumeroLetras(long long numero);

int main()
{
    long long numero;
    cout<<"Ingrese numero: ";
    cin>>numero;
    imprimirNumeroLetras(numero);
    return 0;
}

void imprimir3Cifras(int x){
    //CENTENAS
    int a=x/100;
    if(a){//verificar primero casos especiales
        string centenas[]={"","dos","tres","cuatro","quini",
            "seis","sete","ocho","nove"};
        if (a==1&&!(x%100)){
            cout<<"cien ";
            return;
        }
        else cout<<centenas[a-1]<<(a!=5?"ci":"")<<"ento"<<(a!=1?"s ":" ");
    }
    //DECENAS
    string digitos[]={"","un","dos","tres","cuatro","cinco",
            "seis","siete","ocho","nueve"};
    a=(x-a*100)/10;
    if(a){
        string decenas[]={"","dieci","veinti","treinta ","cuarenta ",
                "cincuenta ","sesenta ","setenta ","ochenta ","noventa "};
        if (a==2&&!(x%10)){
            cout<<"veinte ";
            return;
        }
        else if(a==1&&((x%10)<6)){
            string ten_fiveteen[]={ "diez","once","doce","trece","catorce","quince"};
            cout<<ten_fiveteen[x%10];
            return;
        }
        else{
            cout<<decenas[a];
            if ((x%10)&&(a!=2)&&(a!=1)) cout<<"y ";
        }
    }
    //UNIDADES
    a=x%10;
    if (a) cout<<digitos[a];
}

void imprimirNumeroLetras(long long numero){
    cout<<"El numero "<<numero<<" se lee: ";
    if (numero==0){
        cout<<"cero";
        return;
    }
    long long base=1000000000;
    string denominaciones[]={" mil "," millones "," mil ",""};
    int aux=0;
    for (int i=0;i<4;i++,base/=1000){
        aux=numero/base;//descomponer el numero de tres en tres
        numero-=(aux*base);
        if(aux!=1) imprimir3Cifras(aux);
        else if(i==1){
            cout<<"un millon";
            continue;
        }
        else if(i==3) cout<<"un";
        if(aux) cout<<denominaciones[i];
        if(i==3&&aux%10==1&&aux%100!=11) cout<<"o";
    }
    cout<<endl;
}
