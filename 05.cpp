#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n=1;
	do{
	
		if(n%2==0){
			cout << n<<"\n";
		}
	n++;
	}while(n<=100);
	system("pause");
	return 0;
	
}
