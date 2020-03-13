#include <iostream>
#include <string>
using namespace std;

int cifras(int x,int number=0){
    while(x/=10) number++;
    return number+1;
}

//la idea es separar de tres en tres
void imprimir3Cifras(int x){
    string cero_nine[]={"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
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
    a=(x-a)/10
    if(a){
        string decenas[]={"","diez","veinte","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "};
        if (a==2){
            if (x%10) cout<<"veinti"<<cero_nine[a]<<" ";
            else{
                cout<<"veinte ";
                return;
            }
        }
        else if(a==1){
            string ten_fiveteen[]={ "diez","once","doce","trece","catorce","quince"};
            if ((a%10)<6) cout<<ten_fiveteen[a%10];
            else cout<<"dieci"<<cero_nine[a%10];
            return;
        }
        else
            cout<<decenas[a];
    }
    a=x%10;
    if (a) cout<<" y "<<cero_nine[a];
}


void do_something(){cout<<"algol"<<endl;}

int main()
{
    int numero;
    int base=1;
    cin>>numero;
    int digitos=cifras(numero);
    cout<<"Numero: "<<numero<<"cifras:"<<digitos<<endl;
    for (int i=0;i<digitos;i++,base*=10);
    while(cifras){
        do_something();
        break;
    }
    //"cien","mil","un millon","un billon"//cuando es solo uno
    //"cientos","mil","millones","billones"
    //
    if (numero<10) cout<<cero_nine[numero];

    //escepcion cientos 5,7,9


    return 0;
}
