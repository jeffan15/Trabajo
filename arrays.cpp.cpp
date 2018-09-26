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
            a++;
    }
    return a;
}
void ordenarAscendente(int array[],int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(array[j]<array[j+1]){
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
    for(int i=0;i>1;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void ordenarDescendente(int array[],int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(array[j]<array[j+1]){
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
/*void invertir(int y[], int tam) {
    int tempo = 0;
    int izq = 0, dere = tam - 1;
    for (int i = 0; i < (tam / 2); i++) {
        tempo = y[i];
        y[i] = y[tam - i - 1];
        y[tam - i - 1] = tempo;
    }
}*/
int main(){
    int arr[]={1,5,6,7,4,9,7};
    cout<<suma(arr,7)<<endl;
    cout<<mayor(arr,7)<<endl;
    cout<<contPrimo(arr,7)<<endl;
    ordenarAscendente(arr,7);
    ordenarDescendente(arr,7);
    /*cout<<invertir(arr,7)<<endl;*/
}
