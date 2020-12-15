/*
Una empresa de software tiene planificado comprar programas para el desarrollo de
aplicaciones móviles. El costo es variable según el fabricante elegido. También deberá
elegir el tipo de programa y si es Lenguaje de Programación debe elegir el dispositivo
(Celulares, Tablas y Otros)
*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;
char IngresaDato(int Orden)
{
	char Dato;
	cin >> Dato;
	if (Orden == 1)  if (Dato == 'M' || Dato == 'A' || Dato == 'L') return Dato;
	else { cout << "Error de ingreso fabricante!"; exit(0); _getch(); }
	if (Orden == 2)  if (Dato == 'S' || Dato == 'L') return Dato;
	else { cout << "Error Tipo de software!"; exit(0); _getch(); }
	if (Orden == 3)  if (Dato == 'C' || Dato == 'T' || Dato == 'O') return Dato;
	else { cout << "Error de ingreso Dispositivo!"; exit(0); _getch(); }
}
float Precio()
{
	char Fab, Tipo, Disp;
	cout << "Fabricante: (M) (A) (L) "; Fab = IngresaDato(1);
	cout << "Tipo Programa:  (S) (L) "; Tipo = IngresaDato(2);
	if (Tipo == 'L')
	{
		cout << "Dispositivo: (C) (T) (O) "; Disp = IngresaDato(3);
	}
	switch (Fab)
	{
	case 'M':
		if (Tipo == 'S') return 1500.00;
		if (Tipo == 'L')
			switch (Disp)
		{
			case 'C': return 1800.00; break;
			case 'T': return 1200.00; break;
			case 'O': return 900.00; break;
			default:  cout << "Error de Ingreso Disp!";
		}
		break;


	case 'A':
		if (Tipo == 'S')return 2500.00;
		if (Tipo == 'L')
			switch (Disp)
		{
			case 'C': return 1900.00; break;
			case 'T': return 1800.00; break;
			case 'O': return 1600.00; break;
			default:  cout << "Error de Ingreso Disp!";
		}
		break;

	case 'L':
		if (Tipo == 'S')return 100.00;
		if (Tipo == 'L')
			switch (Disp)
		{
			case 'C': return 100.00; break;
			case 'T': return 150.00; break;
			case 'O': return 50.00; break;
			default:  cout << "Error de Ingreso Disp!";
		}
		break;
	default: cout << "error ingreso de fabricante!";
		
	}
}


int main()
{ 
	cout << Precio(); 
	_getch();
}
