#include <iostream>
using namespace std;
//1
int main(){
    int a;
    cin>>a;
    int b=18;
    if(a>b){
        cout<<"es mayor de edad:"<<a;
    }
    else{
        cout<<"es menor de edad:"<<a;
    }
}
//2
int main(){
    int a;
    cin>>a;
    int b=0;
    while(b<a){
        b++;
        cout<<b<<",";
    }
    }
//3
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
//4
int main(){
    int x, y;
    cin>>x;
    cin>>y;
    if((x,y)%2){
            cout<<"son multiplos de 2";
        }
        else{
            cout<<"no son multiplos de 2";
            }

    if(x%y){
            cout"son multiplos entre si";}
        else{
            cout"no son multiplos";}
    if((pow(x,2))=y){
            cout"son iguales"}
        else{
            cout"no son iguales"
        }
}
//5
int main(){
    int a=0,i,n;
    cin>>n;
    for(i=1;i<(n+1);i++){
        if(n%i==0){
            a++;
        }}
        if(a!=2){
            cout<<"no es primo";
        }else{
            cout<<"si es primo";
            }
    }
//6
int main(){
    int n;
    cin>>n;
    int b=1;
    int c=2;
    int d=2;
        while(c<=n){
            if(c%d==0){
                if(c==d){
                    cout<<c<<",";
                    b++;
                }
                d=2;
                c++;
            }
            else{
            d++;
            }
        }
    }
//7
int main(){
    int x;
    cin>>x;
    while(x>1){
        int y=x%10;
        int x=x/10;
        cout<<x<<endl;
    break;
        }
        }
//8
int main(){
    int n,a,a1,b,b1,c,c1,d,d1,e;
    cout<<"ingrese un numero de 5 digitos:"<<endl;
    cin>>n;
    a=n/10000;
    a1=n%10000;
    b=n%10;
    if(a!=b){
        cout<<"no es palindrome";
    }
    else{
        c=a1/1000;
        c1=a1%1000;
        d=c1/100;
        d1=c1%100;
        e=d1/10;
        if(c==e){
            cout<<"si es palindrome";
        }
        else{
            cout<<"no es palindrome";
        }
    }
    }
//9
int main(){
    int a;
        cout<<"Ingresa año"<<endl;
        cin>>a;
        if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
            cout<<"El anio "<<a<<" Si es bisiesto ";
        }else{
            cout<<"El anio "<<a<<" No es bisiesto ";
        }
}
//10
int main(){
	int a=1;
	int b=0;
	int n;
	cin>>n;
	while(b<n){
		a=a+b;
		cout<<a<<endl;
		b=a+b;
		cout<<b<<endl;
	}
	return 0
}
