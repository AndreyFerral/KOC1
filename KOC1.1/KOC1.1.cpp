#undef UNICODE
#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR szCmdLine,
	int iCmdShow)
{
	int msg = MessageBox(0, "Нажмите любую кнопку", "Главное меню", MB_YESNO|MB_ICONASTERISK ); // Главное меню программы
	for (int i = 0; i < 3; i = (msg == IDNO) ? ++i : 0) { // Объявляется цикл, который в качестве условия принимает тернарную операцию, в которой при нажатии на кнопку "Нет" к счетчику прибавляется единица. При нажатии на кнопку "Да" счётчик обнуляется.

		switch (i) { 
		case 0: { msg = MessageBox(0, "Вы нажали на кнопку 'да'", "Кнопка 'да'", MB_YESNO|MB_ICONASTERISK); break; } // При счетчике = 0 выводится сообщение про кнопку "Да"
		case 1: { msg = MessageBox(0, "Вы нажали на кнопку 'нет'", "Один раз 'нет'", MB_YESNO|MB_ICONEXCLAMATION); break; } // При счетчике = 1 выводится сообщения про кнопку "Нет"
		case 2: { msg = MessageBox(0, "При нажатии на 'нет' программа завершится", "Два раза 'нет' подряд ", MB_YESNO|MB_ICONEXCLAMATION); break; } // При счетчике = 2 выводится сообщения про повторное нажатие на кнопку "Нет"
		}
	}

	return 0;
	
}
