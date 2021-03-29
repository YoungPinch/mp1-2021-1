#pragma once
#include <iostream>
#include <string.h>
using namespace std;
/*����������� ����� ��������.
����� ������ ������� ���������� � �������� �����������. ������ ����� ����������� ���������� �������: ��������, ���� (����� ������), ���������� (����� ������),
�����������, �������� ������� (���� ������ � �����-�� ������), ���� ������� (����, �����, ���).
����� �������� ������������ �� ��������. ������ �������� �� ������� �����.
����� ������ ��������� ����������� ��������� ������.
����� ������ ������������� ��������� ��������: 1) �������� �����, 2) �������� ������ ��������� �����, 3) ����� ����� �� �������� � �����������,
4) ������ ��� ����� ��������� �����, 5) ������ ��� ����� ��������� �����������, 6) ������ ��� ����� ��������� �����������, 7) ������ ������� ����� �����,
8) ������� �����, 9) ��������� �������� � ����, 10) ������� �������� �� �����.
*/
class Song
{
private:
	string name; // ���
	string poet; // ����� ������
	string composer; //����������
	string executor; // �����������
	string album; //������
	string releaseDate; //���� ������
public:
	Song(string _name = "unknown", string _poet = "unknown", string _composer = "unknown", string _executor = "unknown", string _album = "unknown", string _releaseDate = "unknown") :
		name(_name), poet(_poet), composer(_composer), executor(_executor), album(_album), releaseDate(_releaseDate)
	{

	}
	//setters 
	void SetName(string _name);
	void SetPoet(string _poet);
	void SetComposer(string _composer);
	void SetExecutor(string _executor);
	void SetAlbum(string _album);
	void SetReleaseDate(string _releaseDate);

	//getters
	string GetName();
	string GetPoet();
	string GetComposer();
	string GetExecutor();
	string GetAlbum();
	string GetReleaseDate();

	//functions
	void PrintSong();
};

