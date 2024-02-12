// Файл WINDOWS.H содержит определения, макросы, и структуры 
// которые используются при написании приложений под Windows. 
#include <windows.h>
#include <tchar.h>



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

}
