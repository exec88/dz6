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
        cout << "�������� ������� : 1 - �������, 2 - ������������ ��, 3 - ����������, 4 - ���������, 5 - �������, 0 ����� �����" << endl;
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
            cout << "�������� ������� �� 1 �� 5 ��� 0, ����� �����" << endl;
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