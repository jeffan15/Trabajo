#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<"el numero mayor es:"<<a;
        cout<<"el numero menor es:"<<b;
    }
    else{
        cout<<"el numero mayor es:"<<b;
        cout<<"el numero menor es:"<<a;
    }
}
int main(){
    int a;
    cin>>a;
    while(a>0);
        int b;
        int b=a%10;
        int a=a/10;
        cout<<b<<endl;
    }
int main(){
    int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"el mayor es:"<<a;
            cout<<"el menor es:"<<c;
        }
        else{
            cout<<"el menor es:"<<a;
            cout<<"el mayor es:"<<c;
        }
        }
    else{
        cout<<"el mayor es:"<<b;
        cout<<"el menor es:"<<a;
    }
    cout<<(a+b+c)/3;
    }
int main(){
    int x, y;
    cin>>x;
    cin>>y;
    switch(x, y){
    case 1:
        if((x,y)%2){
            cout<<"son multiplos de 2";
        }
        else{
            cout<<"no son multiplos de 2";
            }
        }
        break;
    case 2:
        if(x%y)
            cout"son multiplos entre si";
        else
            cout"no son multiplos";
    default:
        if((pow(x,2))=y)
            cout"son iguales"
        else{
            cout"no son iguales"
        }
}
int main(){
    int a=0,i,n;
    cin>>n;
    for(i=1:i<(n+1);i++){
        if(n%1==0){
            a++;
        }}
        if(a!=2){
            cout<<"no es primo";
        }else{
            cout<<"si es primo";
            }
    return 0;
    }
int main(){
    int a;
    cin>>a;
    int primos;
    int d;
    while(primos>a){
        primos=1;
        for(d=2;d<n;++d){
            if(n%d==0){
                primos=0;
                break;
                }
            }
        }
    }
int main(){
    int x;
    cin>>x;
    while(x>0){
        int y
        int y=x%10;
        int x=x/10;
        cout<<x<<endl;
        }
        }
int main(){
    cout<<"ingrese un numero de 5 digitos:";
    int a;
    cin>>a}
int main(){
    int a;
        cout<<"Ingresa año"<<endl;
        cin>>a;
        if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
            cout<<"El anio "<<a<<" Si es bisiesto ";
        }else{
            cout<<"El anio "<<a<<" No es bisiesto ";
        }
        return 0;
}
