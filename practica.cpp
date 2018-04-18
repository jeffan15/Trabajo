#include<iostream>
using namespace std;
int perfecto(int num,int sum,int mul){
    for(int i=0;i<num;i++){
        mul=num%i;
        if(mul==0)
            sum+=i;
    }
    if(sum==mul)
        return true;
    else
        return false;
}
int numsPerfecto(int num=10000,int sum,int mul){
    for(int i=5;i<num;i++){
        mul=num%i;
        if(mul==0)
            sum+=i;
    }
}
int esPrimo(int a=0,int i=1,int n){
    for(i=1;i<(n+1);i++){
        if(!(n%i)){
            a++;
        }
    }
    if(a!=2)
        return false;
    else
        return true;
}
int numPrimo(int a,int b=1,int c=1,int d=1){
    while(c<=n){
        if(!(c%d)){
            if(c==d){
                return c
                b++;
            }
            c++;
        }
        else
            d++;
    }
}
int potencia(int n,int m){
    if(m==0)
        return 0;
    else
        return n*potencia(n*m-1);
}
int intercambio(int x,int y){

}
