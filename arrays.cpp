#include <iostream>

using namespace std;

int suma (const int array[],const int tam){
    long suma=0;
    for(int i=0;i<tam;suma+=array[i++]);
    return suma;
}
int mayor (const int array[],const int tam){
    int may=array[0];
    for(int i=0;i<tam;i++){
        if(array[i]>may)
            may=array[i];
    }
    return may;
}
bool esPrimo(int a){
    int primo=0;
    for(int i=1;i<(a+1);i++){
        if(!(a%i))
            primo++;
    }
    if(primo!=2)
        return false;
    else
        return true;
}
int contPrimo(const int array[],const int tam){
    int a=0;
    for(int i=0;i<tam;i++){
        if(esPrimo(array[i]))
            a++
    }
    return a;
}
void ordenarAscendente(int array[],int tam){
    int aux;
    for(int i=1;i<=(n-1);i++){
        for(int j=1;j<=(n-1);j++){
            if(array[j]>array[j+1]){
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
    for(int i=1;i<=tam;i++){
        cout<<","<<array[i];
    }
}
void ordenarDescendente(int array[],int tam){
    int aux;
    for(int i=1;i<=(n-1);i++){
        for(int j=1;j<=(n-1);j++){
            if(array[j]>array[j+1]){
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
    for(int i=1;i>=1;i++){
        cout<<","<<array[i];
    }
}
void invertir(int array[],int lenght){
    int=a;
    for(int i=0;i<lenght-1;i++;lenght--){
        a=array[1];
        array[i]=array[lenght-1];
        array[lenght-1]=a;
    }
}
void concatenar(char j[],char m[]){
    int cont=0;
    while(j[cont]!="\0"){
        cont++;
    }
    for(int i=0;j[i]!="\0";i++){
        j[cont]=m[i];
        cont++;
    }
}
int main(){
    int arr[]={1,5,6,8,4,9,7};
    char a[]={hola};
    char b[]={queTal};
    cout<<suma(arr,7)<<endl;
    cout<<mayor(arr,7)<<endl;
    cout<<contPrimo(arr,7)<<endl;
    cout<<ordenarAscendente(arr,7)<<endl;
    cout<<ordenarDescendente(arr,7)<<endl;
    cout<<invertir(arr,7)<<endl;
    cout<<concatenar(a,b)<<endl;
}
