#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL, "Portuguese");
	int n, nn;
	
	cout << "Informe o numero que deseja consultar:";
	cin >> n;
	
	cout << "at� qual numero voc� quer que apare�a?:";
	cin >> nn;
		
	for(int i = 0; i <= nn; i++)
		cout << n << " X " <<nn<< " = " << n*nn << endl;
	
	return 0;
}
