#include<iostream> 
#include<string.h>
using namespace std;

int main(){
	char a[1000];
	cin >> a ;
	int count = 0;
	for(int i = 0; i < strlen(a)/2  ;i++){
		if(a[i] == a[strlen(a)-1-i]){
			count ++;
		}
		
	}
	
	(count > 0) ? cout << "yes" : cout << "no";
	
	
	return 0 ;
}
