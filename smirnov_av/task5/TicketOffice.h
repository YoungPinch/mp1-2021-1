#pragma once
#define DEFAULTPRICE 150
#include "Cinema.h" 

/*����������� ������ �������� ����� � ���������.
����� �������� ����� ������ ����������� ������ ����� �� ������� ������� �� ���������� � ������������ ����������. �������, ��� ������� ������� ���������� �� ������ � �������� ���� ���� �� ������� ����. 
������ ����� ����������� �����, �������� ������ ������, ��������� ������, ������� ����, ���������� ������ � ����������� �� ���� (VIP � �������). 
��� ��������� �������, ��� ���������� ��������� ��� ���� � ��������� ����� �������, � ����� ���������� ������ ������������� (��� ������� ���������).
���������� ����� � ������ ���� ����������� ������� ���� � ������� � ����. ��� ��������� �������, ��� ����� ���� �� ���� ����� � ����� ���� ���������. 
������� ������� �� ����� ������������ ����� 10 ����� ����� ������ ������.
���������� � ���� ������� �� ��������� 30 ���� ������� �������� � ������ ���������. 
��� ������� ���� ����������� ������� ��������� ������� (�� ������� ������ � �� 12.00 �� 18.00). ��������� ������� �� �������� ������ (�� 12.00) ���������� 75% �� �������
, ��������� ������� �� �������� ������ (����� 18.00) � 150% �� �������. ���������� � ���������� ������ (��������/������) � ������ ���� �� ������ ������ ����� �������� � ������ ���������.
����� �������� ����� ������ ������������� ��������� ��������: 1) ������� ������ ����������: ����, ����� ������, �������� ������, ����� ����, ��� ����, ����� ����,
2) ��������� ������� ���������� ���������� ��������� ���� � ��������� ����, 3) ��������������� ��������� ���������� ����, 4) ���������� ����� ��������� �������, 5)
�������� ����� �������, 6) ������������ ������ (������ ����� ��������: ����, ����� ������, �������� ������, ����� ����, ����� ����, ����� ����� � ����).
����� ��������� ������ �������������� ��� ��������� ������ ������ �������� ����� � ����� ���� ���������� � ����������-����������� ��������.*/
class TicketOffice
{
private:
	int totalPrice;
	bool isInit;
	Cinema* cinema;
public:
	TicketOffice(Cinema* _cinema)
	{
		cinema = _cinema;
		isInit = false;
		totalPrice = 0;
	}

	~TicketOffice()
	{
		cinema = nullptr;
	}

	void GetDataFromBuyer();
	bool CheckAvailability();
	void Reserve();
	int GetTotalPrice();
	void CancelOrder();
	void GetDate();

};
