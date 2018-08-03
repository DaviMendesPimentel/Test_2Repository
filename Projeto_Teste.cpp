#include <iostream>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

struct Trabalho{
	int numTrab;
	char nome_do_trabalho[75];
	char nome_da_materia[75];
	int dia;
	int mes;
	int ano;
	int abnt;
};


int main() {
	cout << "Programa Funcionando:\n";
	
	ofstream Arquivo_de_saida("Hello_World", ios::out);
	
	Trabalho t{ 0, "", "", 0, 0, 0, 0};
	
	int i;
	for(i = 0; i < 0; i++)
		Arquivo_de_saida.write(reinterpret_cast<const char *>(&t), sizeof(t));
	
	return 0;
}
