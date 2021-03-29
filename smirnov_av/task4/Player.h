#pragma once
#include "Song.h"
#include <vector>
#include <fstream>
/*����������� ����� ��������.
����� ������ ������� ���������� � �������� �����������. ������ ����� ����������� ���������� �������: ��������, ���� (����� ������), ���������� (����� ������),
�����������, �������� ������� (���� ������ � �����-�� ������), ���� ������� (����, �����, ���).
����� �������� ������������ �� ��������. ������ �������� �� ������� �����.
����� ������ ��������� ����������� ��������� ������.
����� ������ ������������� ��������� ��������: 1) �������� �����, 2) �������� ������ ��������� �����, 3) ����� ����� �� �������� � �����������,
4) ������ ��� ����� ��������� �����, 5) ������ ��� ����� ��������� �����������, 6) ������ ��� ����� ��������� �����������, 7) ������ ������� ����� �����,
8) ������� �����, 9) ��������� �������� � ����, 10) ������� �������� �� �����.
*/
using namespace std;
class Player
{
private:
	vector <Song> songList;
public:
	void AddSong(string _name = "unknown", string _poet = "unknown", string _composer = "unknown", string _executor = "unknown", string _album = "unknown", string _releaseDate = "unknown");
	int FindSong(string _name, string _executor);
	vector<Song> GetSongsByPoet(string _poet);
	vector<Song> GetSongsByComposer(string _composer);
	vector<Song> GetSongsByExecutor(string _executor);
	void ChangeSongData(int index,string component, string value); //component - ��� ��������� name/poet/executor...
	void DeleteSong(int index);
	void PrintInConsole();
	void PrintInFile();
	void GetFromFile();
	int GetCountSongs();

};

