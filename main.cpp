#include <iostream>

using namespace std;

int main()
{
    int ejercicio, A, B, copia, F;
    double C, D;
    float E;
    char P;
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

        case 19:
            cout << "Ingrese un numero: ";
            cin >> A;
            C=0;
            B=2;
            if (A==2);
            else if (A%B==0){
                cout << A << " No es un numero primo." << endl;
                C=1;
            }
            else{
                B+=1;
                for (;B<A;B+=2){
                    if (A%B==0){
                        cout << A << " No es un numero primo" << endl;
                        C=1;
                        break;
                    }
                }
            }
            if (C==0) cout << A << " Es un numero primo." << endl;
        break;

        case 20:
            cout << "Ingresar un numero: ";
            cin >> A;
            B=0;
            copia=A;
            while(A!=0){
                B*=10;
                B=B+(A%10);
                A=A/10;
            }
            if (copia==B) cout << copia << " Si es un palindromo" << endl;
            else cout << copia << " No es un palindromo" << endl;

        break;

        case 21:
            cout << "Ingresar solo un caracter: ";
            cin >> P;
            A=P;
            if (A>64 && A<91){
                P=A+32;
                cout << "Su caracter en minuscula: " << P << endl;
            }
            else if (A>96 && A<123){
                P=A-32;
                cout << "Su caracter en mayuscula: " << P << endl;
            }
            else cout << "Su caracter: " << P << endl;
        break;

        case 23:
            cout << "Escribir el primer numero: ";
            cin >> A;
            cout << "Escribir el segundo numero: ";
            cin >>B;
            if (A>B){
                C=A;
                D=B;
            }
            else {
                C=B;
                D=A;
            }
            ejercicio=C;
            while(true){
                if (ejercicio%A==0){
                    if (ejercicio%B==0){
                        cout << "El MCM entre " << A << " y " << B <<" es: " << ejercicio << endl;
                        break;
                    }
                }
                ejercicio+=1;
            }
        break;

        case 25:
            cout << "Ingrese un numero: ";
            cin >> A;
            for(B=0;A!=0;A=A/10) B+=1;
            cout << "El numero de digitos es: " << B << endl;
        break;

        case 27:
            cout << "Ingresar primer numero: ";
            cin >> A;
            cout << "Ingresar operador: ";
            cin >> P;
            cout << "Ingresar Segundo numero: ";
            cin >> B;
            if (P==42) cout << "Resultado: " << A*B << endl;
            else if (P==43) cout << "Resultado: " << A+B << endl;
            else if (P==45) cout << "Resultado: " << A-B << endl;
            else if (P==47) cout << "Resultado: " << A/B << endl;
            else cout << "Debe de poner alguno de estos operadores (* , / , + , -): " << endl;
        break;

        case 29:
            P=1;
            A=0;
            B=100;
            copia=(B/2)+A;
            while(P!=61){
                    cout << copia << " Este es el numero que esta pensando, Ponga (<) si es menor, (>) si es mayor y (=) si es el numero que penso: ";
                    cin >> P;
                    if (P==60){
                        B=copia;
                        copia=copia-((B-A)/2);
                    }
                    else if (P==62){
                        A=copia;
                        copia=((B-A)/2)+copia;
                    }
                    else if (P==61) cout << "Gracias por jugar" << endl;
                    else cout << "Debe de colocar ( < , > , = )" << endl;
        }
        break;

        case 31:
            cout << "Ingrese una letra: ";
            cin >> P;
            if ((P>64 && P<91 )|| (P>96 && P<123)){
                if (P==65 || P==69 || P==73 || P==79 || P==85 || P==97 || P==101 || P==105 || P==111 || P==117){
                    cout << P << " es una vocal." << endl;
                }
                else cout << P << " es una consonante" << endl;
            }
            else if (P==-91 || P==-92) cout << P << " es una consonante" << endl;
            else cout << "No es una letra" << endl;
        break;

        case 33:
            cout << "Ingresar el dia: ";
            cin >> A;
            cout << "Ingresa el mes: ";
            cin >> B;
            if (B<0) cout << B << " Es un mes invalido" << endl;

            else if (A<0) cout << "Es una dia invalido" << endl;

            else if (B<8){
                if (B%2==0){

                    if (B==2){
                      if (A==29) cout << A << "/" << B << " Es valida en años bisiestos" << endl;
                      else if (A<29) cout << A << "/" << B << " es una fecha valida" << endl;
                      else cout << A << "/" << B << " es una fecha invalida" << endl;
                    }

                    else if (A<31) cout << A << "/" << B << " es una fecha valida" << endl;
                    else cout << A << "/" << B << " es una fecha invalida" << endl;
                }
                else{

                    if (A<32) cout << A << "/" << B << " es una fecha valida" << endl;
                    else cout << A << "/" << B << " es una fecha invalida" << endl;
                }
            }

            else if (B<13){

                if (B%2==0){

                    if (A<32) cout << A << "/" << B << " es una fecha valida" << endl;
                    else cout << A << "/" << B << " es una fecha invalida" << endl;
                }

                else {

                    if (A<31) cout << A << "/" << B << " es una fecha valida" << endl;
                    else cout << A << "/" << B << " es una fecha invalida" << endl;
                }
            }

            else cout << B << " Es un mes invalido" << endl;

        break;

        case 35:
            cout << "Ingresar un numero impar: ";
            cin >> ejercicio;
            B=1;
            if (ejercicio%2==0) cout << "Debe de ingresar un numero impar" << endl;
            else{
                ejercicio=(ejercicio/2)+1;
                for(A=1;ejercicio>=A;A++){
                    for(copia=ejercicio-1;copia>=A;copia--) cout << " ";

                    for(B=1;2*A-1>=B;B++) cout << "*";

                    cout << endl;
                }

                for(A=1;ejercicio-1>=A;A++){
                    for(copia=1;copia<=A;copia++) cout << " ";

                    for(B=(ejercicio*2)-3;A*2-1<=B;B--) cout << "*";

                    cout << endl;
                }
             //cout << "Terminado";
            }
        break;

        case 37:
            cout << "Ingrese un numero: ";
            cin >> ejercicio;
            A=0;
            B=1;
            C=0;
            while (B<=ejercicio){
                copia=A+B;
                if (B%2==0) C+=B;
                cout << B << endl;
                A=B;
                B=copia;
            }
            cout << "La suma de los numeros pares de la serie de fubonacci menores a " << ejercicio << " Es: " << C << endl;
        break;

        case 39:
            cout << "Ingrese un numero: ";
            cin >> A;
            D=0;
            for(;A!=0;A/=10){
                B=A%10;
                copia=B;
                C=1;
                for (;copia!=0;copia-=1){
                    C*=B;
                }
                D+=C;
            }
            cout << "Resultado: " << D << endl;
        break;

        case 41:
            cout << "Ingrese un numero: ";
            cin >> ejercicio;
            C=0;
            A=ejercicio;
            while(C==0){
                A+=1;
                B=1;
                for (;B<=ejercicio;B++){
                    if (A%B!=0) break;
                    else if (B==ejercicio) C=1;
                }
            }
            cout << "El MCM es: " << A << endl;
        break;

        case 43:
            cout << "Ingrese un numero: ";
            cin >> ejercicio;
            A=2;
            C=0;
            if (ejercicio<=1) cout << "Poner un numero mayor a 1" << endl;
            else{
                for(;A<=ejercicio;A++){
                    for (B=2;B<=A;B++){
                        if (A==B){
                            C+=B;
                        }
                        else if (A%B==0) break;

                    }
                }
            }
            cout << "La suma de los numeros primos menores a " << ejercicio << " es: " << C << endl;
        break;

        case 45:
            cout << "Ingresar el tamaño de la espiral (Solo numeros impares): ";
            cin >> ejercicio;
            B=0;
            if (ejercicio%2==0) cout << "Solo debe de ingresar numero impares" << endl;
            else{
                for (;ejercicio>=0;ejercicio-=2){
                    if (ejercicio==1) B+=ejercicio;
                    else{
                        for (A=ejercicio*ejercicio;A>=((ejercicio*ejercicio)-(ejercicio-1)*3);A=A-(ejercicio-1)){
                            B=B+A;
                            //cout << B << endl;
                        }
                    }
                }
            }
            cout << "resultado: " << B << endl;
        break;

        case 47:
            cout << "Ingrese el numero de divisores: ";
            cin >> A;
            copia=1;
            B=0;
            for(B=0;A>=B;){
                B=0;
                ejercicio=(copia*(copia+1))/2;
                for(F=1;F<=ejercicio;F++){
                    if (ejercicio%F==0) B+=1;

                }
                copia+=1;
            }
            cout << "El numero es: " << ejercicio << " que tiene " << B << " divisores" << endl;
        break;

        default:
            cout << "Ejercicio no definido." << endl;
        break;

        }



    }

    return 0;
}
