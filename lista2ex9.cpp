#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL, "Portuguese");
	int n, nn;
	
	cout << "Informe o numero que deseja consultar:";
	cin >> n;
	
	cout << "até qual numero você quer que apareça?:";
	cin >> nn;
		
	for(int i = 0; i <= nn; i++)
		cout << n << " X " <<nn<< " = " << n*nn << endl;
	
	return 0;
}
