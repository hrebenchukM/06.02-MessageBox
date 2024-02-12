// Файл WINDOWS.H содержит определения, макросы, и структуры 
// которые используются при написании приложений под Windows. 
#include <windows.h>
#include <tchar.h>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{/*
	//Class work
	int id=MessageBox(0, TEXT("Hello world"),TEXT("Заголовок окна"),MB_OKCANCEL|MB_ICONERROR);
	if ( id == IDOK)
	{
		MessageBox(0, TEXT("Вы нажали на ОК"), 0, MB_OK | MB_ICONHAND);
	}
	else if (id==IDCANCEL)
	{
		MessageBox(0, TEXT("Вы нажали на CANCEL"), 0, MB_OK );
	}*/


   //1
   /* int lenText = lstrlen(TEXT("Меня зовут Мария. Дата рождения 10.12.2004.Образование:неполное высшее,комп.науки."));
    int nId = 3;
    int avgCharOnPage = lenText / nId;
    int id1 = MessageBox(0, TEXT("Меня зовут Мария."), TEXT("Первая страница резюме"), MB_OKCANCEL | MB_ICONINFORMATION);
    if (id1 == IDOK) {
        MessageBox(0, TEXT("Вы нажали на ОК"), TEXT("Результат"), MB_OK | MB_ICONINFORMATION);
    }
    else {
        MessageBox(0, TEXT("Вы нажали на CANCEL"), TEXT("Результат"), MB_OK | MB_ICONINFORMATION);
    }
    int id2 = MessageBox(0, TEXT(" Дата рождения 10.12.2004."), TEXT("Вторая страница резюме"), MB_OKCANCEL | MB_ICONINFORMATION);
    if (id2 == IDOK) {
        MessageBox(0, TEXT("Вы нажали на ОК"), TEXT("Результат"), MB_OK | MB_ICONINFORMATION);
    }
    else {
        MessageBox(0, TEXT("Вы нажали на CANCEL"), TEXT("Результат"), MB_OK | MB_ICONINFORMATION);
    }
    int id3=MessageBox(0, TEXT("Образование:неполное высшее,комп.науки."), TEXT("Третья страница резюме"), MB_OKCANCEL | MB_ICONINFORMATION);
    if (id3 == IDOK) {
        MessageBox(0, TEXT("Вы нажали на ОК"), TEXT("Результат"), MB_OK | MB_ICONINFORMATION);
    }
    else {
        MessageBox(0, TEXT("Вы нажали на CANCEL"), TEXT("Результат"), MB_OK | MB_ICONINFORMATION);
    }
    TCHAR avgCharOnPageWindow[50];
    wsprintf(avgCharOnPageWindow, TEXT("Среднее количество символов на странице: %d"), avgCharOnPage);
    MessageBox(0, TEXT("Последняя страница резюме"), avgCharOnPageWindow, MB_OK | MB_ICONINFORMATION);
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

        int result = MessageBox(0, TEXT("Угадайте число от 1 до 100."), TEXT("Угадай число"), MB_ICONQUESTION | MB_OKCANCEL);
        if (result == IDCANCEL) {
            MessageBox(0, TEXT("Вы отменили игру."), TEXT("Конец игры"), MB_OK | MB_ICONINFORMATION);
            game = false;
            break;
        }

     
       
        TCHAR buffer[100]; 

        result = MessageBox(0, TEXT("Введите ваше число:"), TEXT("Угадай число"), MB_ICONQUESTION | MB_OKCANCEL);
        if (result == IDCANCEL) {
            MessageBox(0, TEXT("Вы отменили игру."), TEXT("Конец игры"), MB_OK | MB_ICONINFORMATION);
            game = false;
            break;
        }
        if (result == IDOK) {
            _stprintf_s(buffer, TEXT("%d"), result); 
             guessedNum = _tstoi(buffer);
             MessageBox(0, TEXT("Ваше число было принято."), TEXT("Угадай число"), MB_ICONINFORMATION | MB_OK);

        }
      
     
       


        if (guessedNum < randNum) {
            MessageBox(0, TEXT("Загаданное число больше."), TEXT("Подсказка"), MB_ICONINFORMATION | MB_OK);
        }
        else if (guessedNum > randNum) {
            MessageBox(0, TEXT("Загаданное число меньше."), TEXT("Подсказка"), MB_ICONINFORMATION | MB_OK);
        }
        else {
            MessageBox(0, TEXT("Загаданное число найдено."), TEXT("Поздравляем!"), MB_ICONINFORMATION | MB_OK);
            game = false;
        }

    } while (game);

    TCHAR message[100];
    wsprintf(message, TEXT("Поздравляем! Вы угадали число за %d попыток. Хотите сыграть еще раз?"), attempts);
    int choice = MessageBox(0, message, TEXT("Победа!"), MB_ICONQUESTION | MB_YESNO);
    if (choice == IDYES) {
        _tWinMain(hInst, hPrevInst, lpszCmdLine, nCmdShow);
    }

}
