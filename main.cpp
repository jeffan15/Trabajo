#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
void 1(){
    int a=1000;
    int suma=0;
    for(int i=1;i<a;i++){
        if(!(i%3)||!(i%5))
            suma=suma+i;
    }
    cout<<suma<<endl;
}
int 2(){
    int total = 0;
	int x = 1;
	int y = 2;
	int z = 0;
	while (y <= 4000000){
		z = x + y;
		if (y%2==0)
			total+=y;
		x=y;
		y=z;
	}
	cout<<total<<endl;
	return 0;
}
int 3(){
    long long greaterFactor = 600851475143;

    for (long long i = 3; i <= greaterFactor; i += 2)
    {
        if (greaterFactor % i == 0)
        {
            if (greaterFactor / i >= i)
            {
                greaterFactor /= i;
                i -= 2;
            }
        }
    }

    cout << "The largest prime factor of the number 600851475143 is:\n" << greaterFactor << endl;
    return 0;
}
int 4(){

}
