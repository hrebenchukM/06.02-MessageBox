// ���� WINDOWS.H �������� �����������, �������, � ��������� 
// ������� ������������ ��� ��������� ���������� ��� Windows. 
#include <windows.h>
#include <tchar.h>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{/*
	//Class work
	int id=MessageBox(0, TEXT("Hello world"),TEXT("��������� ����"),MB_OKCANCEL|MB_ICONERROR);
	if ( id == IDOK)
	{
		MessageBox(0, TEXT("�� ������ �� ��"), 0, MB_OK | MB_ICONHAND);
	}
	else if (id==IDCANCEL)
	{
		MessageBox(0, TEXT("�� ������ �� CANCEL"), 0, MB_OK );
	}*/


   //1
   /* int lenText = lstrlen(TEXT("���� ����� �����. ���� �������� 10.12.2004.�����������:�������� ������,����.�����."));
    int nId = 3;
    int avgCharOnPage = lenText / nId;
    int id1 = MessageBox(0, TEXT("���� ����� �����."), TEXT("������ �������� ������"), MB_OKCANCEL | MB_ICONINFORMATION);
    if (id1 == IDOK) {
        MessageBox(0, TEXT("�� ������ �� ��"), TEXT("���������"), MB_OK | MB_ICONINFORMATION);
    }
    else {
        MessageBox(0, TEXT("�� ������ �� CANCEL"), TEXT("���������"), MB_OK | MB_ICONINFORMATION);
    }
    int id2 = MessageBox(0, TEXT(" ���� �������� 10.12.2004."), TEXT("������ �������� ������"), MB_OKCANCEL | MB_ICONINFORMATION);
    if (id2 == IDOK) {
        MessageBox(0, TEXT("�� ������ �� ��"), TEXT("���������"), MB_OK | MB_ICONINFORMATION);
    }
    else {
        MessageBox(0, TEXT("�� ������ �� CANCEL"), TEXT("���������"), MB_OK | MB_ICONINFORMATION);
    }
    int id3=MessageBox(0, TEXT("�����������:�������� ������,����.�����."), TEXT("������ �������� ������"), MB_OKCANCEL | MB_ICONINFORMATION);
    if (id3 == IDOK) {
        MessageBox(0, TEXT("�� ������ �� ��"), TEXT("���������"), MB_OK | MB_ICONINFORMATION);
    }
    else {
        MessageBox(0, TEXT("�� ������ �� CANCEL"), TEXT("���������"), MB_OK | MB_ICONINFORMATION);
    }
    TCHAR avgCharOnPageWindow[50];
    wsprintf(avgCharOnPageWindow, TEXT("������� ���������� �������� �� ��������: %d"), avgCharOnPage);
    MessageBox(0, TEXT("��������� �������� ������"), avgCharOnPageWindow, MB_OK | MB_ICONINFORMATION);
*/


    //2
  

    srand(time(NULL));
    int attempts = 0;
    int randNum = rand() % 100 + 1;
    int guessedNum;
    bool game = true;
    do {
     
        guessedNum = 0;
        attempts++;

        int result = MessageBox(0, TEXT("�������� ����� �� 1 �� 100."), TEXT("������ �����"), MB_ICONQUESTION | MB_OKCANCEL);
        if (result == IDCANCEL) {
            MessageBox(0, TEXT("�� �������� ����."), TEXT("����� ����"), MB_OK | MB_ICONINFORMATION);
            game = false;
            break;
        }

     
       
        TCHAR buffer[100]; 

        result = MessageBox(0, TEXT("������� ���� �����:"), TEXT("������ �����"), MB_ICONQUESTION | MB_OKCANCEL);
        if (result == IDCANCEL) {
            MessageBox(0, TEXT("�� �������� ����."), TEXT("����� ����"), MB_OK | MB_ICONINFORMATION);
            game = false;
            break;
        }
        if (result == IDOK) {
            _stprintf_s(buffer, TEXT("%d"), result); 
             guessedNum = _tstoi(buffer);
             MessageBox(0, TEXT("���� ����� ���� �������."), TEXT("������ �����"), MB_ICONINFORMATION | MB_OK);

        }
      
     
       


        if (guessedNum < randNum) {
            MessageBox(0, TEXT("���������� ����� ������."), TEXT("���������"), MB_ICONINFORMATION | MB_OK);
        }
        else if (guessedNum > randNum) {
            MessageBox(0, TEXT("���������� ����� ������."), TEXT("���������"), MB_ICONINFORMATION | MB_OK);
        }
        else {
            MessageBox(0, TEXT("���������� ����� �������."), TEXT("�����������!"), MB_ICONINFORMATION | MB_OK);
            game = false;
        }

    } while (game);

    TCHAR message[100];
    wsprintf(message, TEXT("�����������! �� ������� ����� �� %d �������. ������ ������� ��� ���?"), attempts);
    int choice = MessageBox(0, message, TEXT("������!"), MB_ICONQUESTION | MB_YESNO);
    if (choice == IDYES) {
        _tWinMain(hInst, hPrevInst, lpszCmdLine, nCmdShow);
    }

}
