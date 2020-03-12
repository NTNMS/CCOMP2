#include <iostream>
#include <string>
using namespace std;

int main()
{
    float num;
    cout << "Ingrese el numero: " << endl;
    cin>>num;
    num=num*10;
    int cambio []={0,0,0,0,0,0,0,0,0,0,0};
    float moneda []={2000,1000,500,200,100,50,20,10,5,2,1};
    string nombre []={"doscientos soles","cien soles","cincuenta soles","veinte soles","diez soles","cinco soles","dos soles","un sol","cincuenta centavos","veinte centavos","diez centavos"};

    for(int i=0;i<11;i++){
        *(cambio+i)=num / *(moneda+i);
        if(*(cambio+i)){
            if(i<5)
                cout<<*(cambio+i)<<" billete(s) de "<<*(nombre+i)<<endl;
            else
                 cout<<*(cambio+i)<<" moneda(s) de "<<*(nombre+i)<<endl;
        }
        num=num-(*(cambio+i)*(*(moneda+i)));
    }
}
