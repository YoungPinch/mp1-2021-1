#pragma once
#include <vector>
#include "Day.h"
#include "Session.h"
#include <string>
using namespace std;
#define COUNTHALLS 4

struct hall
{
	int vipPrice;
	int defaultPrice;
};

class Cinema
{
private:
	vector<Day> sheduleDay; //���������� �� 30 ���� ��� ���������� �� ���� 
	vector <vector <Session>> sessions; // ��� ������ � �������� 3 ���� � ����������� �� ����
	vector<hall> halls; //���������� � ����� �� ������ � �����
	int FindIndexSession(int hallNumber, Session& neededSession);
public:
	Cinema()
	{
		sheduleDay.resize(30);
		sessions.resize(COUNTHALLS);
	}


	//�������� ����������� ������� ���������� ���� � 
	bool CheckAvailability(int countPlaces, bool isVip, int hallNumber, Event neededEvent);
	void AddHall(int numberHall, int _vipPrice = 0, int _defaultPrice = 0 );
	void SetDataHall(int numberHall, int _vipPrice, int _defaultPrice);
	void SetPlace(int countPlaces,bool _isVip, int hallNumber, Event neededEvent, vector<vector<int>>& settedSeats);
	void SetSessionsInHall(int hall, vector <Session> otherSessions);
	void SetSheduleInDay(int day,vector <Event> events);
	vector<Event> GetEventsInDay(int day);


	
};

