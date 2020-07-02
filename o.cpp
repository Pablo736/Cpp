#include <iostream>

using namespace std;

int main(){



/*c++ basico
codigo basico
*/
    cout <<"ola reina" <<endl;
    int entero=15;

    float flotante= 10.45;

    double mayor= 17.4343584;

    char letra='a';





    cout<<entero<<endl;

    cout<<flotante;

    cout<<mayor<<endl;

    cout<<letra<<endl;
    






    int numero; //lectura o entrada de datos

    cout<<"digite un numero:";
    cin>>numero;
    cout<<"\nEl numero que digito es: "<<numero<<endl;





    int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0; //operaciones basicas

    cout<<"digite un numero  "; cin >>n1;
    cout<<"digite otro numero "; cin >>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"la resta es: "<<resta<<endl;
    cout<<"la multipicacion es: "<<multiplicacion<<endl;
    cout<<"la division es : "<<division<<endl;




    float peso, valordolar = 0.00028; //convertir moneda ejer.

    cout<<"digita en pesos: "; cin >>peso;

    valordolar = valordolar * peso;

    cout<<"en dolares es "<<valordolar<<endl;



    int edad;  //datos de una persona entrada y salida de datos
    char sexo[10];
    double altura;

    cout<<"Cual es tu edad: ";cin>>edad;
    cout<<"Cual es tu sexo: ";cin>>sexo;
    cout<<"Cual es tu altura: ";cin>>altura;

    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<endl;







    return 0;
}