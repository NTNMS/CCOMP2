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





    /*int dosc=0,cien=0,cinc=0,veinte=0,diez=0,cinco=0,dos=0,uno=0,cinccen=0,ventcent=0,diezcent=0;
    cout << "Ingrese el numero: " << endl;
    cin>>num;

    while(num>=200){num=num-200;dosc++;}
    while(num<200&&num>=100){num=num-100;cien++;}
    while(num<100&&num>=50){num=num-50;cinc++;}
    while(num<50&&num>=20){num=num-20;veinte++;}
    while(num<20&&num>=10){num=num-10;diez++;}
    while(num<10&&num>=5){num=num-5;cinco++;}
    while(num<5&&num>=2){num=num-2;dos++;}
    while(num<2&&num>=1){num=num-1;uno++;}
    while(num<1&&num>=0.5){num=num-0.50;++cinccen;}
    while(num<0.50&&num>=0.20){num=num-0.20;cout<<"veinte centavos"<<++ventcent<<endl;}
    while(num<0.20&&num>=0.10){num=num-0.10;cout<<"diez centavos"<<++diezcent<<endl;}

    cout << "La cantidad de billetes y/o monedas que necesita es : " << endl;
    if(dosc)cout<<dosc<<" Billete(s) de doscientos soles"<<endl;
    if(cien)cout<<cien<<" Billete(s) de cien soles"<<endl;
    if(cinc)cout<<cinc<<" Billete(s) de cincuenta soles"<<endl;
    if(veinte)cout<<veinte<<" Billete(s) de veinte soles"<<endl;
    if(diez)cout<<diez<<" Billete(s) de diez soles"<<endl;
    if(cinco)cout<<cinco<<" Moneda(s) de cinco soles"<<endl;
    if(dos)cout<<dos<<" Moneda(s) de dos soles"<<endl;
    if(uno)cout<<uno<<" Moneda(s) de un sol "<<endl;
    if(cinccen)cout<<cinccen<<" Moneda(s) de cincuenta centavos"<<endl;
    if(ventcent)cout<<ventcent<<" Moneda(s) de veinte centavos "<<endl;
    if(diezcent)cout<<diezcent<<" Moneda(s) de diez centavos"<<endl;

    return 0;*/
}
