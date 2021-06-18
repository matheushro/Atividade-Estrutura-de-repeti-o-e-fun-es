#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n=1;
	int b=1;
	do{
	
		if(n%2==1){
			cout << n<<"\n";
			b++;
		}
	n++;
	}while(b<=100);
	system("pause");
	return 0;
	
}
