#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char* argv[]){
	
	int n;
	char *str = new char [n]; //1000000 = 10^6
	int i;
	int j;
	cin >> str;
	n = strlen(str);

	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(str[i]==str[j]){
				cout << "faulse";
				return 0;
			}
		}
	}
	cout << "true";
	delete [] str;
	system("pause");
	return 0;
}
