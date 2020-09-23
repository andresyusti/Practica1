#include <iostream>

using namespace std;

int main()
{
    int ejercicio, A, B, copia;
    double C, D;
    float E;
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

        case 9:
            cout << "Ingresar el radio del criculo al que le desea calcular el area y el perimetro: ";
            cin >> C;
            cout << "Perimetro: " << 2*C*3.1416 << endl;
            cout << "Area: " << C*C*3.1416 << endl;
        break;

        case 10:
            cout << "Ingrese un numero: ";
            cin >> A;
            for(B=1;B<=100;B+=1){
                if (B%A==0) cout << B << endl;
            }
        break;

        case 11:
            cout << "Ingrese un numero: ";
            cin >> A;
            for (B=1;B!=11;B+=1) cout << A*B << endl;
        break;

        case 12:
            cout << "Ingrese un numero: ";
            cin >> A;
            copia=A;
            for (B=1;B!=6;B+=1){
                cout << A << endl;
                A=A*copia;
            }
        break;

        case 13:
            cout << "Ingrese un numero: ";
            cin >> A;
            if (A<0) A=A*(-1);
            else if (A==0) cout << "No se encontraron divisores" << endl;
            for (B=1;B<=A;B+=1){
                if (A%B==0) cout << B << endl;
            }
        break;

        case 14:
            for (A=1;A<=50;A+=1){
                cout << A << "  " << 51-A << endl;
            }
        break;

        case 15:
            B=0;
            while(true){
                cout << "Ingrese un numero: ";
                cin >> A;
                if (A==0) break;
                B+=A;
            }
            cout << "La suma de los numeros ingresados es: " << B << endl;
        break;

        case 16:
            copia=0;
            D=0;
            while(true){
                    cout << "Ingrese un numero: ";
                    cin >> C;
                    D=D+C;
                    if (C==0) break;
                    B+=1;
        }
        E=D/B;
        cout << E << endl;
        break;

        case 17:
            B=0;
            while(true){
                cout << "Ingrese un numero: ";
                cin >> A;
                if (B<A) B=A;
                else if (A==0) break;
            }
            cout << "El numero mayor fue: " << B << endl;
        break;

        case 18:
            cout << "Ingrese un numero: ";
            cin >> A;
            copia=0;
            if (A==0) cout << "No es un cuadrado perfecto" << endl;
            else{
                for (B=0;B<=A/2;B+=1){
                    if (B*B==A) {
                       copia=1;
                       break;
                    }
                }
                if (copia==1) cout << "Si es un cuadrado perfecto" << endl;
                else if (copia==0) cout << "No es un cuadrado perfecto" << endl;
            }
        break;

        default:
            cout << "Ejercicio no definido." << endl;
        break;
        }
    }

    return 0;
}
