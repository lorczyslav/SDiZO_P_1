// SDIZO_Projekt.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Extras.h"
#include <crtdbg.h>
#include <windows.h>


int main()
{
	// _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	while (true)
	{
		int menu_choice = menu(40, 10, "Wybierz tryb", 3, "Manual", "Testy", "Exit");
		system("cls");

		switch (menu_choice)
		{
		case 1: manualMenu(); break;
		case 2: testStructureMenu(); break;
		case 3: return 0;
		}
	}
	return 0;
}

