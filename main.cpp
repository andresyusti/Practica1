#include <iostream>

using namespace std;

int main()
{
    int ejercicio, A, B, copia;
    double C, D;
    while(true){
        cout << "Ingrese el numero del ejercicio: ";
        cin >> ejercicio;
        switch(ejercicio){

        case 1:
            cout << "Ingresar dos numeros A y B: ";
            cin >> A >> B;
            if (B==0) cout << "No esta definido" << endl;
            else cout << "El reciduo entre " << A << "/" << B << "=" <<A%B << endl;
        break;

        case 2:
            cout << "Ingrese un numero: ";
            cin >> A;
            if (A%2==0) cout << A << " Es un numero par" << endl;
            else cout << A << " Es un numero impar" << endl;
        break;

        case 3:
            cout << "Ingrese los dos numeros a comparar: ";
            cin >> C >> D;
            if (C>D) cout << "El numero mayor es: " << C << endl;
            else if (C==D) cout << "Los dos numeros son iguales" << endl;
            else cout << "El numero mayor es: " << D << endl;
        break;

        case 4:
            cout << "Ingrese los dos numeros a comparar: ";
            cin >> C >> D;
            if (C>D) cout << "El numero menor es: " << D << endl;
            else if (C==D) cout << "Los dos numeros son iguales" << endl;
            else cout << "El numero menor es: " << C << endl;
        break;

        case 5:
            cout << "Ingresar dos numeros A y B: ";
            cin >> C >> D;
            A=C/D;
            if (D==0) cout << "No esta definido" << endl;
            else{
                if ((C/D)-A>=0.5) A++;
                cout << "El resultado redondeado de " << C << "/" <<D << "=" << A << endl;
            }
        break;

        case 6:
            cout << "Ingrese dos numeros A y B: ";
            cin >> A >> B;
            C=A;
            D=1;
            if(A==0 && B<=0) cout << A << "^" << B << " no esta definida." << endl;

            else{
              copia=B;
              if (B<0){
                C=1.0/A;
                B=B*(-1);
              }
              for(;B>0;B-=1) D=D*C;
              cout << A << "^" << copia << "=" << D << endl;
            }
        break;

        case 7:
            cout << "Ingresar un numero: ";
            cin >> A;
            B=0;
            copia=A;
            if (copia<0) A*=-1;
            for (;A>0;A-=1) B+=A;
            if (copia<0) B*=(-1);
            cout << "El resultado es: " << B << endl;
        break;

        case 8:
            cout << "Ingresar un numero: ";
            cin >>A;
            copia=A;
            B=A-1;
            for (;B>1;B-=1) A*=B;
            cout << copia << "!=" << A << endl;
        break;

        default:
            cout << "Ejercicio no definido" << endl;
        break;
        }
    }

    return 0;
}
