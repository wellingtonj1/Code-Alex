#include "naturals.h"
#include "naturals.cpp"
#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    int numero,numero2,escolha;
    naturals p1,p2;
    string continua="s";
    cout<<"\nDigite um numero natural para o Primeiro objeto : ";

    for(int i=1;i<=1;i++)
        {
            cin>>numero;
            if(p1.natural(numero))
            {// o numero é natural
            }
            else
            { // nao e natural
            cout<< "\n o numero digitado nao é natural... Digite novamente : " <<endl;
            i=0;
            }
        }

    cout<<"\nDigite um numero natural para o Segundo objeto : ";

    for(int i=1;i<=1;i++)
        {
            cin>>numero2;
            if(p2.natural(numero2))
            {// o numero é natural
            }
            else
            { // nao e natural
            cout<< "\n o numero digitado nao é natural... Digite novamente : " <<endl;
            i=0;
            }
        }
    system("cls");


    while(continua=="S"||continua=="sim"||continua=="s"||continua=="Sim")
    {
        cout<< "\n===========================================Qual operação desejas realizar ?=========================================== \n";
        cout << "\t\t\tLembre ...  O numero que você digitou foi : " << p1.returns() << " no primeiro ... e : " << p2.returns() << " no segundo !"<< endl;
        cout<< "\n Digite 1 para Calcular seu fatorial";
        cout<< "\n Digite 2 para Verificar se é um numero perfeito";
        cout<< "\n Digite 3 para Verificar se o numero é capicua";
        cout<< "\n Digite 4 para Verificar se o numero é um quadrado perfeito";
        cout<< "\n Digite 5 para Verificar se o numero é primo";
        cout<< "\n Digite 6 para Calcular o maximo divisor comum (MDC)";
        cout<< "\n Digite 7 para Verificar se os dois numeros são primos entre si";
        cout<< "\n Digite 8 para Calcular o minimo divisor comum (MMC)";

        cout<< "\n\n Digite a operação que desejas realizar : ";
        cin>>escolha;

        switch(escolha)
        {

            case 1:
            {
            cout<< "\n O fatorial do numero " << numero << " é == " << p1.fatorialN()<<endl;
            cout<< "\n O fatorial do numero " << numero2 << " é == " << p2.fatorialN()<<endl;
            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }

            case 2:
            {
            if(p1.perfeitoN())
            {
            cout <<"\n o numero " << numero << " é perfeito \n";
            }
            else
            {
            cout <<"\n o numero " << numero << " não é perfeito \n";
            }
            if(p2.perfeitoN())
            {
                cout <<"\n o numero " << numero2 << " é perfeito \n";
            }
            else
            {
                cout <<"\n o numero " << numero2 << " não é perfeito \n";
            }

            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }

            case 3:
            {
            if(p1.capicuaN())
            {
            cout<<"\n o numero " << numero << " é capicua \n";
            }
            else
            {
            cout<<"\n o numero " << numero << " não é capicua \n";
            }
            if(p2.capicuaN())
            {
            cout<<"\n o numero " << numero2 << " é capicua \n";
            }
            else
            {
            cout<<"\n o numero " << numero2 << " não é capicua \n";
            }

            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }

            case 4:
            {
            if(p1.quadrapfN())
            {
            cout<<"\n o numero " << numero << " é um quadrado perfeito \n";
            }
            else
            {
            cout<<"\n o numero " << numero << " não é um quadrado perfeito \n";
            }
            if(p2.quadrapfN())
            {
            cout<<"\n o numero " << numero2 << " é um quadrado perfeito \n";
            }
            else
            {
            cout<<"\n o numero " << numero2 << " não é um quadrado perfeito \n";
            }

            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }
            case 5:
            {
                if(p1.eprimo())
                {
                cout<< "\n O numero " << numero << " é primo \n";
                }
                else
                {
                cout<<"\n O numero " << numero << " não é primo \n";
                }
                if(p2.eprimo())
                {
                cout<< "\n O numero " << numero2 << " é primo \n";
                }
                else
                {
                cout<<"\n O numero " << numero2 << " não é primo \n";
                }


                cout<< "\n Digite Sim para realizar outra operação : ";
                cin>>continua;
                system("cls");
                break;
            }
            case 6:
            {
            cout << "\n O maximo divisor comum (MDC) dos numeros informados é = " << p1.maxdiv(p2.returns()) << endl;

            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }

            case 7:
            {
            if(p1.maxdiv(p2.returns())==1)
            {
                cout << "\n Os numeros informados são primos entre si !!! " << endl;
            }
            else
            {
                cout << "\n Os numeros informados não são primos entre si !!! "<< endl;
            }

            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }

            case 8:
            {
            cout<< "\n O Minimo divisor comum (MMC) dos dois numeros informados é = " << p1.mindiv(p2.returns()) <<endl;

            cout<< "\n Digite Sim para realizar outra operação : ";
            cin>>continua;
            system("cls");
            break;
            }


        }

    }
}
