#include <iostream>
#include <string.h>



using namespace std;

int main(){
	
	char str[1000000]; //1000000 = 10^6
	int i;
	int j;
	cin >> str;
	int n = strlen(str);

	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(str[i]==str[j]){
				cout << "faulse";
				return 0;
			}
		}
	}
	cout << "true";
	return 0;
}
