#include <iostream>

using namespace std;

int main()
{
    //problema 2
    int i;
    int ndp;
    cout << "N=";
    cin >> ndp;
    for (i=0;i<=ndp;i=i+1){
        if (i%2==0){
            cout << i;
            cout << ",";
        }
    }

    cout << endl;
    //problema 3
    int f1=1;
    int f2=1;
    int f3=1;
    int valor, contador=3;
    cout << "ingresa la cantidad de numeros fibonnacci" << endl;
    cin >> valor;
    cout << f1 << "," << f2 << ",";
    while (valor>=contador){
        f3=f2+f1;
        contador++;
        f1=f2;
        f2=f3;
        cout << f3 << ",";
    }
    cout << endl;
    //problema 4
    /*int x;
    int ndperfectos;
    cout << "ingrese el numero de numeros perfectos" << endl;
    cin >> ndperfectos;
    for (x=0; x<=ndperfectos; i=i+1){
        if (ndperfectos%x=0){
            cout << x << ",";
        }
    }*/
    /*int x;
    int y;
    cin >> y;
    for (x=0; x<=10; x++){
        if (y%x==0){
            cout << x << endl;
        }
    }*/
    //problema 5
    int r;
    int suma=0;
    int ndprimos;
    cout << "ingresa la cantidad de primos" << endl;
    cin >> ndprimos;
    cout << "2,3,5,7,";
    for (r=0;r<=4*ndprimos;r=r+1){
        if (r%2!=0 && r%3!=0 && r%5!=0 && r%7!=0){
            suma=suma+r;
        }
    }
    cout << endl;
    cout << (2+3+5+7)+suma;

    return 0;
}
