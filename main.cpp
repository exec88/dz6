#include "Device.h"
#include"Peripheral.h"
#include "Table.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Electronic* score[5];

    score[0] = new Notebook(16, 1);
    score[1] = new Computer_pc(32, 5, 12);
    score[2] = new Videocard(1800, 4096);
    score[3] = new Processor(3100, 2);
    score[4] = new Table(8, 2990);


    bool open = true;
    while (open)
    {
        cout << "Выберите технику : 1 - Ноутбук, 2 - Персональный ПК, 3 - Видиокарта, 4 - Процессор, 5 - Планшет, 0 чтобы выйти" << endl;
        int enter;
        cin >> enter;
        switch (enter)
        {
        case 1:
            score[0]->Show();
            break;

       case 2:
            score[1]->Show();
            break;

        case 3:
            score[2]->Show();
            break;

        case 4:
            score[3]->Show();
            break;

        case 5:
            score[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите технику от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }

    delete score[0];
    delete score[1];
    delete score[2];
    delete score[3];
    delete score[4];


    return 0;
}