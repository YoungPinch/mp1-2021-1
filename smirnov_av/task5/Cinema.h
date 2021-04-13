#pragma once
#include <vector>
#include "Event.h"
#include "Session.h"
#include <string>
using namespace std;

struct Date
{
	int day;
	int mounth;
};


class Cinema
{
private:
	vector <Event> allEvents; //����������
	vector <vector <Session>> sessions; // ��� ������ � �������� 3 ����
public:
	Cinema()
	{}

	int FindIndexSession(int hallNumber, Session neededSession);
	void CheckAvailability(int countPlaces, bool isVip, int hallNumber, Session neededSession);
	void SetPlace(int countPlaces, int hallNumber, Session neededSession);
	void SetSessionsInHall(int hall, vector <Session> otherSessions);
	void GetEventsInDay(Date day);


	
};

