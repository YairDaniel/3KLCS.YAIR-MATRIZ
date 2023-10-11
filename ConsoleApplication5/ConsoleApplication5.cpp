#include<cstdlib>
#include<iostream>
#define maxf 3
#define maxc 5

using namespace std;
int main(int argc, char* argv[])
{
	cout << "Ingrese Valores de la matriz :" << endl;
	float a[maxf][maxc];
	int f, c;

	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cin >> a[f][c];
		}
	}

	cout << "\n";
	cout << "Leyendo Valores :" << endl;
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << a[f][c] << " ";

		}
		cout << "\n";
	}
	system("Pause");
	return EXIT_SUCCESS;
}