#include "TicketOffice.h"
#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;

string Films[] = {"������ ���������� ���� 1","������ ���������� ���� 2" , "��������� ����� 1","��������� ����� 2", "��������� ����� 3", "����� ������ 1",
"����� ������ 2", "����� ������ 3" , "����� ������ 4" , "����� ������ 5" ,"����� ������ 6" , "����� ������ 7" , "������ ���������� ���� 3",
"������ ���������� ���� 4" , "��������� ����� 2", "��������� ����� 3" };

void RandomEventsInDay(vector<Event>& eventsInDay)
{
	
	Event temp;
	Time delay = { 1,30 };
	Time startWork = { 10, 30 };
	int filledEvents = 0;
	for (size_t i = 0; i < COUNTHALLS * SESSIONSINHALLINDAY; i++)
	{
		temp.SetNameFilm(Films[rand() % 15]);
		if (filledEvents == SESSIONSINHALLINDAY - 1)
		{
			temp.SetTimeEvent(startWork + delay * filledEvents);
			filledEvents = 0;
		}
		else
		{
			temp.SetTimeEvent(startWork + delay * filledEvents);
			filledEvents++;
		}
		eventsInDay.push_back(temp);
	}
}

Time GetCurrentTime()
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	Time result = { 0 , 0 };
	result.hours = timeinfo->tm_hour;
	result.minutes = timeinfo->tm_min;
	return result;
}

Date GetCurrentDate()
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	Date result;
	result.day = timeinfo->tm_mday;
	result.mounth = timeinfo->tm_mon;
	return result;
}

void main()
{
	setlocale(LC_ALL, "ru");
	vector<Event> eventsInDay;
	Cinema myCinema;
	myCinema.SetDataHall(0, 400, 200);
	myCinema.SetDataHall(1, 500, 250);
	myCinema.SetDataHall(2, 300, 150);
	for (size_t i = 0; i < 30; i++)
	{
		RandomEventsInDay(eventsInDay);
		myCinema.SetSheduleInDay(i,eventsInDay);
		eventsInDay.clear();
	}
	TicketOffice ticketOffice;
	ticketOffice.SetCinema(&myCinema);
	Time currentTime = GetCurrentTime();
	Date currentDate = GetCurrentDate();
	myCinema.UpdateSession(currentDate); //�������� ���������� ��������� ������� � ����������� �� ���� 
	myCinema.ShowSessions(currentDate);
	Date date = { 27, 3 };
	Time timdas = { 15,00 };
	ticketOffice.SetDataClient(date, timdas, "����� ������ 4", 0, true, 4);
	ticketOffice.CheckAvailability();
	ticketOffice.Reserve(currentDate, currentTime);
	vector<Ticket>tickets(4);
	ticketOffice.CancellationOrder();
	tickets = ticketOffice.GetTickets();
	
	for (size_t i = 0; i < tickets.size(); i++)
	{
		cout << tickets[i] << endl;
	}
	cout << ticketOffice.GetTotalPrice() << endl;
	system("Pause");
}