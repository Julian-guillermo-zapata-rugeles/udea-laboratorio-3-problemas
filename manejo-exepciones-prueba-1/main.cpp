#include <iostream>

using namespace std;
signed short int  numero_primo= 0;
int main()
{
    try {

        cout << "Ingrese un numero para averiguar si es primo : ";
        cin >> numero_primo;
        if (numero_primo==0){
            throw 0;
        }
        else{
            unsigned short int divisores=0;
            for(unsigned short int iterator=1;iterator<=numero_primo;iterator ++ ){
                if(numero_primo%iterator==0){
                    divisores++;
                }
            }if(divisores==2){
                cout << "es un numero primo "<<endl;
            }
            else{
                throw false;
            }
        }
    }
    catch (bool) {
        cout << "no es primo" << endl;
    }
    catch (int) {
        cout << "Entrada invalida "<< endl;
        numero_primo= 0;

    }
    cout << "-- fin -- " << endl;
    return 0;
}
