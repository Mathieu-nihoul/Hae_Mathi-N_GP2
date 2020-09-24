// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "string"
#include "Vec2.hpp"
#include "Vec3.hpp"
#include "Vec2T.h"
#include "Vec3T.h"
#include "Arr.h"

using namespace std;

void subFunction() {
	Arr<int>* foo = new Arr<int>(4);

	cout << foo->Get(1) << endl;
	cout << foo->Set(0,5) << endl;
	delete foo;
}

int main()
{
	subFunction();
	
	
  /*  Vec3 f0;
	Vec3 f1(95, 56, 23);
	Vec3 f2 = f0.Mult(f1);
	//printf("x = %d y=%d z=%d", f2.x, f2.y, f2.z);

	Vec2T<float> a0(10.2, 16.5);
	Vec2T<float> a1(5.7, 35.57);
	Vec2T<float> a2 = a0.Mult(a1);

	printf("x = %f y=%f", a2.x, a2.y);

	Vec3T<string> b0(" Ser","L","No");
	Vec3T<string> b1("ge ", "e ", "ob");
	Vec3T<string> b2 = b0.Add(b1);

	cout << (b2.x) << (b2.y) << (b2.z) << endl;

	cout << "x =" << to_string(a2.x)<<"\n"<<"y =" << to_string(a2.y)<< endl;*/

	/*int tab[] = { 0,1,2,3 };
	int szTab = sizeof(tab) / sizeof(int);

	for (int i = 0; i < szTab ; i++) 
	{
		cout << tab[i] << "\n";
	};

	int* c0 = tab;
	int* c1 = &(tab[0]);

	int valC = ++*c0;
	
	cout << to_string(*c0) << endl;
	cout << to_string(*c1) << endl;

	Vec2 sapin(212, 1212);
	Vec2 sapin2(125, 135);
	sapin.incr(&sapin2);

	cout << to_string(sapin2.x) << endl;

	/*Vec2* sapinptr = new Vec2(66,56);
	sapin.incr((Vec2*)3455);

	Vec2 v66 = Vec2(66,25);
	sapin.incr(v66);

	cout << endl; */
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
