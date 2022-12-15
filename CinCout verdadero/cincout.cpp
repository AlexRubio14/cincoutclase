#include "Header.h"

/*int a;
char b, c;
cin >> a >> b >> c; // a=33, b=2.5 c=-8
cout << a << b << c; //imprimeix 332. perque conta com a char b=2 i c=.

int a, b;
char c;
cin >> a >> b >> c; // a=33, b=2.5 c=-8
cout << a << b << c << a; //imprimeix 332.5 perque conta com a int b=2 char c=. i int afinal=5
*/
/*
struct point
{
	float x;
	float y;
};

float distance2P(point p1, point p2)
{
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float PerimeterOfPolygon(point poly[], int size)
{
	float perimeter = 0.0f;
	for (int i = 0; i < size; i++)
	{
		perimeter += distance2P(poly[i], poly[(i + 1)%size]);
	}
	return perimeter;
}

int main()
{

	point polygon[NUM_POINTS];
	float x, y;
	int i = 0;

	ifstream myFile("prova.txt");

	if (myFile.is_open())
	{
		while (myFile >> x >> y)
		{
			polygon[i].x = x;
			polygon[i].y = y;
			i++;
			cout << x << "\t" << y << endl;
		}
		myFile.close();

		ofstream myFile2("perimeter.txt");
		myFile2 << PerimeterOfPolygon(polygon, NUM_POINTS) << endl;
		myFile2.close();
	}
	else
		cout << "Error en obrir arxiu" << endl;

	return 0;
*/





int RandomNumber(int min, int max)
{
	int result = 0;
	result = rand() % (max - min + 1) + min;
	return result;
}
/*
int main()
{

	//Create a program that generates x random numbers and saves them in a file (separated by ' ')
	
	srand(time(NULL));

	int x = 25;

	ofstream myfile("noQuieroHacerEsteEjercicio.txt");

	if (myfile.is_open()) {
		for (int i = 0; i < x; i++) {
			myfile << RandomNumber(1, 100) << ' ';
		}
		myfile.close();
	}
	else
		cout << "No s ha trobat el teu fitxer" << endl;
	return 0;
*/

	

	//Create a porgram that reads a file with some numbers(int) separated by ' '. 
	//Then it must print in another file the sum of all of them and the average of all the numbers from the input file.
/*
int main() {
	float x;
	float sum = 0.0f;
	int numbers = 0;

	ifstream myfile("randomNumbers.txt");
	if (myfile.is_open()) {
		while (myfile >> x) {
			sum += x;
			numbers += 1;
		}
		myfile.close();
		ofstream myfile2("SumaYAverage.txt");
		myfile2 << sum << endl << sum / numbers << endl;
		
		myfile2.close();
	}
	else
		cout << "No se ha podido abrir el archivo" << endl;
}
*/


	//Create a program that reads a file that contains DNI numbers and characters. 
	//Then you have to save in another file OK/ERROR indicating whether the character is the correct one.

bool correctCharacter(int& x, char& letra) {
	bool correct = false;
	int modul = x % 23;
	switch (modul) {
	case 0:
		if (letra == 'T' || letra == 't')
			correct = true;
		break;
	case 1:
		if (letra == 'R' || letra == 'r')
			correct = true;
		break;
	case 2:
		if (letra == 'W' || letra == 'w')
			correct = true;
		break;
	case 3:
		if (letra == 'A' || letra == 'a')
			correct = true;
		break;
	case 4:
		if (letra == 'G' || letra == 'g')
			correct = true;
		break;
	case 5:
		if (letra == 'M' || letra == 'm')
			correct = true;
		break;
	case 6:
		if (letra == 'Y' || letra == 'y')
			correct = true;
		break;
	case 7:
		if (letra == 'F' || letra == 'f')
			correct = true;
		break;
	case 8:
		if (letra == 'P' || letra == 'p')
			correct = true;
		break;
	case 9:
		if (letra == 'D' || letra == 'd')
			correct = true;
		break;
	case 10:
		if (letra == 'X' || letra == 'x')
			correct = true;
		break;
	case 11:
		if (letra == 'B' || letra == 'b')
			correct = true;
		break;
	case 12:
		if (letra == 'N' || letra == 'n')
			correct = true;
		break;
	case 13:
		if (letra == 'J' || letra == 'j')
			correct = true;
		break;
	case 14:
		if (letra == 'Z' || letra == 'z')
			correct = true;
		break;
	case 15:
		if (letra == 'S' || letra == 's')
			correct = true;
		break;
	case 16:
		if (letra == 'Q' || letra == 'q')
			correct = true;
		break;
	case 17:
		if (letra == 'V' || letra == 'v')
			correct = true;
		break;
	case 18:
		if (letra == 'H' || letra == 'h')
			correct = true;
		break;
	case 19:
		if (letra == 'L' || letra == 'l')
			correct = true;
		break;
	case 20:
		if (letra == 'C' || letra == 'c')
			correct = true;
		break;
	case 21:
		if (letra == 'K' || letra == 'k')
			correct = true;
		break;
	case 22:
		if (letra == 'E' || letra == 'e')
			correct = true;
		break;
	}
	return correct;
}

int main() {

	int x;
	char letra;

	ifstream myfile("DNI.txt");
	if (myfile.is_open()) {
		ofstream myfile2("CorrectsDNI");
		while (myfile >> x >> letra) {
			
			if (correctCharacter(x, letra) == true)
				myfile2 << x << letra << " OK" << endl;
			else
				myfile2 << x << letra << " ERROR" << endl;
		}
		myfile.close();
		myfile2.close();
	}
	else
		cout << "No se ha podido abrir el archivo" << endl;
}