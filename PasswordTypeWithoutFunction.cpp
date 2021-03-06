﻿// Project:PasswordType 
// Author: Nick GUO
// Date:   May 21,2020
// Version:V1.0

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	const int codeRsv = 352535; //Default password
	long code;                  //Entered password
	int NumCodeType = 3;	    //Maximum number of password input
	int sec = 5;				//Explosion time countdown

	cout << "Welcome!\nPlease enter your 6-digit Agent Code:______\b\b\b\b\b\b\n";

	for (;NumCodeType>0; NumCodeType--)
	{
		cin >> code;

		if (code == codeRsv)
		{
			cout << "Verified!\n"<< "Dear Agent No."
				 << code
				 << ",\nOperation ***Suiside*** is now actived!\n";
			for (; sec >= 0; sec--)
			{
				cout << "Boom in " << sec << " seconds...\n";
			}
		}
		else
		{
			if (NumCodeType>1)
			{
				cout << "\aWrong Code! You can try for another "
					 << (NumCodeType - 1) << " times.\n";
			}
			else
			{
				cout << "\aWrong Code for too many time! ";
			}
		}
	}

	return 0;
}

