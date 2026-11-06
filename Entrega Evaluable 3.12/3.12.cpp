#include <iostream>
using namespace std;

int main() {
	int row{ 10 };

	while (row >= 1) {
		int column{ 1 };

		while (column <= 10) {
			cout << (row % 2 == 1 ? "<" : ">");
			++column;
		}
		--row;
		cout << "\n";
	}
}
/*Similar el ejercicio 3.11, este también categoriza números en pares e impares,
siendo los impares el símbolo "<" y los pares ">". Lo que lo diferencia del ejercicio
anterior, es el uso de dos variables, "row" y "column". Mientras que row es la que 
identifica si el número es par o impar (también se debe señalar que en este código
la cuenta empieza en el número 10, y va en bajada hasta pasar el 1), column se encarga
de que el símbolo necessario aparezca 10 veces seguidas, haciendo que a la hora de
ejecutar el código, el número 10 por ejemplo aparezca como "<<<<<<<<<<".*/