// PalindromKey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

bool palindromKey(std::string& sir)
{
	std::vector<char> caractere; 

	for (int i = 0; i < sir.length(); i++) 
		caractere.push_back(sir[i]);

	
	for (int i = 0; i < caractere.size(); i++)
	{
		for (int j = 0; j < caractere.size(); j++)
		{
			if (i == j || caractere[i] == '\0' || caractere[j] == '\0')
				continue;
			else if (caractere[i] == caractere[j])
			{
				caractere[i] = '\0';
				caractere[j] = '\0';
			}
		}
	}

	

	int numara = 0;

	for (int i = 0; i < caractere.size(); i++)
	{
		if (caractere[i] != '\0')
			numara++;
	}

	if (sir.length() % 2 == 0 && numara == 0)
		return true;
	else if (sir.length() % 2 != 0 && numara == 1)
		return true;
	else
		return false;
}


int main()
{
    std::string run;
    std::cout << "Introdu cheia \n";
    std::cin >> run;
    if (palindromKey(run))
        std::cout << "Cheia este corecta! \n";
    else
        std::cout << "Cheia nu este corecta! \n";
    

}

