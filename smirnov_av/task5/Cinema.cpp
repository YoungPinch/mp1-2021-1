#include "Cinema.h"

int Cinema::FindIndexSession(int hallNumber, Session neededSession)
{
	for (size_t i = 0; i < sessions[hallNumber].size(); i++)
	{
		if (sessions[hallNumber][i] == neededSession)
			return i;
	}
	throw string("������ ������ �� ����������!");
}

void Cinema::CheckAvailability(int countPlaces, bool isVip, int hallNumber, Session neededSession)
{
	int index = FindIndexSession(hallNumber, neededSession);
	sessions[hallNumber][index]
}
