#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    //����������

    string username;
    int userans = 1;
    int globalscore = 0;
    int countgames = 0;
    int setpoint;
    int lives = 3;
    int score = 0;
    char questans;
    int difficulty = 2;
    int exit;
    int countquest = 1;
    int color = 1;
    string otstup = "\t\t\t\t\t\t\t\t\t\t\t\t\t";
    string litotstup = "\t\t\t\t\t\t\t\t";
    string textcolor = "\x1b[0m";

    //������

    cout << "\n\n\n";
    cout << otstup << "������������ ��� � ���������!\n\n\n";
    cout << litotstup << "������� ��� ������: ";
    cin >> username;
    system("cls");

    while (userans == 1 or userans == 2 or userans == 3) {

        //����

//////////////////////////////
//////////////////////////////
//////////////////////////////

        if (score != 0 and lives != 0) {
            system("cls");
            cout << "\n\n\n\n";
            cout << otstup << textcolor << "�� ��������! �����������!\n";
            cout << " \n\n\n";
            cout << otstup << textcolor << "��� ����: " << score << endl;
            cout << "\n";
            cout << otstup << textcolor << "���������� ���������� ������: " << lives << endl;
            cout << "\n";
            countgames = countgames + 1;
            globalscore = globalscore + score;
            lives = 3;
            score = 0;
            cout << otstup << "��� ������ � ������� ���� ������� ����� �����: ";
            cin >> exit;
        }
        if (lives == 0) {
            system("cls");
            cout << "\n\n\n\n";
            cout << otstup << textcolor << "�� ���������!\n";
            cout << " \n\n\n";
            cout << otstup << textcolor << "��� ����: " << score << endl;
            cout << "\n";
            cout << otstup << textcolor << "���������� ���������� ������: " << lives << endl;
            cout << "\n";
            countgames = countgames + 1;
            globalscore = globalscore + score;
            lives = 3;
            score = 0;
            cout << otstup << "��� ������ � ������� ���� ������� ����� �����: ";
            cin >> exit;
        }

        //////////////////////////////
        //////////////////////////////
        //////////////////////////////

        system("cls");
        cout << "\n\n\n\n";
        cout << otstup << textcolor << "�����������, " << username << "!\n" << endl;
        cout << " \n";
        cout << otstup << textcolor << "[1] ������ ����" << "\t\t\t\t" << "����� ������� ������: " << countgames;
        cout << "\n\n";
        cout << otstup << textcolor << "[2] ���������" << "\t\t\t\t" << "������� ����� �� ��� �����: " << globalscore;
        cout << "\n\n";
        cout << otstup << textcolor << "[3] �������\n\n";
        cout << otstup << textcolor << "[4] �����\n\n\n";
        cout << otstup << "�������� �����: ";
        cin >> userans;
        switch (userans) {
        case 2: //��������� 

            system("cls");
            cout << "\n\n";
            cout << otstup << textcolor << "���������\n";
            cout << "\n\n\n";
            cout << litotstup << "[1] ������������� ��� ������\n";
            cout << "\n";
            cout << litotstup << "[2] �������������� �������� � ����. ����� �������� �� 8 - 10 - 12. ���������� - 10\n";
            cout << "\n";
            cout << litotstup << "[3] �������������� ���� ����������\n";
            cout << " \n";
            cout << "\n";
            cout << litotstup << "�������� �����: ";
            cin >> setpoint;

            switch (setpoint) {

            case 1:
                system("cls");
                cout << otstup << textcolor << "��������� --> ����� �����\n";
                cout << " \n\n\n";
                cout << litotstup << "������� ���� ����� ���: ";
                cin >> username;
                break;

            case 2:
                system("cls");
                cout << otstup << textcolor << "��������� --> ��������� ���������\n";
                cout << " \n\n\n";
                cout << litotstup << textcolor << "�������� ���������: \n";
                cout << "\n";
                cout << litotstup << textcolor << "[1] ������ (8 ��������)\n";
                cout << "\n";
                cout << litotstup << textcolor << "[2] ������� (10 ��������)\n";
                cout << "\n";
                cout << litotstup << textcolor << "[3] ������� (12 ��������)\n";
                cout << " \n\n";
                cout << litotstup << "����: ";
                cin >> difficulty;
                break;

            case 3:
                system("cls");
                cout << otstup << textcolor << "��������� --> ��������� ����� ����������\n";
                cout << " \n\n\n";
                cout << litotstup << textcolor << "�������� ���� ����������: \n";
                cout << "\n";
                cout << litotstup << textcolor << "[1] ����������� (�� ���������)\n";
                cout << "\n";
                cout << litotstup << textcolor << "[2] �������\n";
                cout << "\n";
                cout << litotstup << textcolor << "[3] �������\n";
                cout << "\n";
                cout << litotstup << textcolor << "[4] ������\n";
                cout << "\n";
                cout << litotstup << textcolor << "[5] �����\n";
                cout << "\n";
                cout << litotstup << textcolor << "[6] ����������\n";
                cout << " \n\n";
                cout << litotstup << "����: ";
                cin >> color;

                switch (color) {

                case 1:
                    textcolor = "\x1b[0m";
                    break;

                case 2:
                    textcolor = "\x1b[91m";
                    break;

                case 3:
                    textcolor = "\x1b[92m";
                    break;

                case 4:
                    textcolor = "\x1b[93m";
                    break;

                case 5:
                    textcolor = "\x1b[94m";
                    break;

                case 6:
                    textcolor = "\x1b[95m";
                    break;
                }
                break;

            }
            break;

            //�������

        case 3:
            system("cls");
            cout << otstup << textcolor << "������� ���� \n\n\n";
            cout << litotstup << "\t - ����� �������� ���� �� ���������� ����� �� ������\n";
            cout << "\n";
            cout << litotstup << "\t - ����� �������� ������ �� ���������� �����\n";
            cout << "\n";
            cout << litotstup << "\t - ����� ������ ����� ��� ������������ ������\n";
            cout << "\n\n";
            cout << litotstup << "��� ����������� ������� ����� �����: ";
            cin >> exit;
            break;

            // ����

        case 1:
            while (lives > 0) {

                system("cls");
                cout << "\n\n";
                cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                cout << " \n\n";
                cout << litotstup << textcolor << "[1] ������: ��������� ���� ����������������?\n\n\n";
                cout << litotstup << textcolor << "[A] Python\t" << "[B] C#\n";
                cout << litotstup << textcolor << "[C] Ruby\t" << "[D] C++\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'D') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                if (lives == 0) {
                    break;
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                cout << litotstup << textcolor << "[2] ������: ������ ������� ��� �� ������� ����� ����������?\n\n\n";
                cout << litotstup << textcolor << "[A] ������ ����������\t" << "[B] �������\n";
                cout << litotstup << textcolor << "[C] ������ �����\t" << "[D] ������� ���������\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'A') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[3] ������: ����� ������� ��������� �� ��������� � ��������� ����������?\n\n\n";
                cout << litotstup << textcolor << "[A] ���\t\t" << "[B] ����\n";
                cout << litotstup << textcolor << "[C] ����\t" << "[D] ���\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'C') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[4] ������: ����� ������������ �� ������?\n\n\n";
                cout << litotstup << textcolor << "[A] ����������\t" << "[B] �����������\n";
                cout << litotstup << textcolor << "[C] ���������\t" << "[D] �����������\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'B') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[5] ������: ��� �������� ����������� Microsoft?\n\n\n";
                cout << litotstup << textcolor << "[A] ���� ���������\t" << "[B] ���� �������\n";
                cout << litotstup << textcolor << "[C] ���� �����\t\t" << "[D] ���� �����\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'D') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[6] ������: ��� �������� ������������, ������� ������������ �� ��������� �������?\n\n\n";
                cout << litotstup << textcolor << "[A] ������\t" << "[B] �������\n";
                cout << litotstup << textcolor << "[C] ������\t" << "[D] ������\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'A') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[7] ������: ��� �������� \"�����\" ���������?\n\n\n";
                cout << litotstup << textcolor << "[A] ���� ���������\t" << "[B] ��� �������\n";
                cout << litotstup << textcolor << "[C] ���� �����\t\t" << "[D] ������� �����\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'B') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[8] ������: ��� �������� ����������� ������ ��� ���������� �������� ������������?\n\n\n";
                cout << litotstup << textcolor << "[A] �������\t" << "[B] ������\n";
                cout << litotstup << textcolor << "[C] ����������\t" << "[D] �������\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] ������� �����: ";
                cin >> questans;
                if (questans == 'C') {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                if (difficulty > 1) {


                    cout << litotstup << textcolor << "[9] ������: ��� ���������� ���������, ����������� �������� ������������?\n\n\n";
                    cout << litotstup << textcolor << "[A] ����������\t" << "[B] ���������\n";
                    cout << litotstup << textcolor << "[C] �������\t" << "[D] ���������\n";
                    cout << " \n\n";
                    cout << litotstup << textcolor << "[+] ������� �����: ";
                    cin >> questans;
                    if (questans == 'C') {
                        system("cls");
                        cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                        score = score + 10;
                        cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                        cout << "\n\n";
                    }
                    else {
                        system("cls");
                        cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                        lives = lives - 1;
                        cout << "\n\n";
                        cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                        cout << "\n\n";
                    }
                    /////////////////////////////////
                    /////////////////////////////////
                    /////////////////////////////////
                    if (lives == 0) {
                        break;
                    }
                    cout << litotstup << textcolor << "[10] ������: ����� ������� ��������� ���������� ����� �������?\n\n\n";
                    cout << litotstup << textcolor << "[A] ��������\t" << "[B] ��������\n";
                    cout << litotstup << textcolor << "[C] ����\t" << "[D] ��������\n";
                    cout << " \n\n";
                    cout << litotstup << textcolor << "[+] ������� �����: ";
                    cin >> questans;
                    if (questans == 'D') {
                        system("cls");
                        cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                        score = score + 10;
                        cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                        cout << "\n\n";
                    }
                    else {
                        system("cls");
                        cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                        lives = lives - 1;
                        cout << "\n\n";
                        cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                        cout << "\n\n";
                    }
                    /////////////////////////////////
                    /////////////////////////////////
                    /////////////////////////////////
                    if (lives == 0) {
                        break;
                    }
                    if (difficulty == 3) {


                        cout << litotstup << textcolor << "[11] ������: ��� ������ C++?\n\n\n";
                        cout << litotstup << textcolor << "[A] ����� ����������\t" << "[B] ���� ����\n";
                        cout << litotstup << textcolor << "[C] ��������\t\t" << "[D] ������� �����\n";
                        cout << " \n\n";
                        cout << litotstup << textcolor << "[+] ������� �����: ";
                        cin >> questans;
                        if (questans == 'A') {
                            system("cls");
                            cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                            score = score + 10;
                            cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                            cout << "\n\n";
                        }
                        else {
                            system("cls");
                            cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                            lives = lives - 1;
                            cout << "\n\n";
                            cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                            cout << "\n\n";
                        }
                        /////////////////////////////////
                        /////////////////////////////////
                        /////////////////////////////////
                        if (lives == 0) {
                            break;
                        }
                        cout << litotstup << textcolor << "[12] ������: ��� ������ �� Linux?\n\n\n";
                        cout << litotstup << textcolor << "[A] ����� ���������\t" << "[B] ����������\n";
                        cout << litotstup << textcolor << "[C] ���������\t\t" << "[D] ���� ����???\n";
                        cout << " \n\n";
                        cout << litotstup << textcolor << "[+] ������� �����: ";
                        cin >> questans;
                        if (questans == 'D') {
                            system("cls");
                            cout << otstup << textcolor << "�� �������� �����!\n\n\n";
                            score = score + 10;
                            cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                            cout << "\n\n";
                        }
                        else {
                            system("cls");
                            cout << otstup << textcolor << "�� �������� �� �����\n\n\n";
                            lives = lives - 1;
                            cout << "\n\n";
                            cout << otstup << textcolor << "[+] �����: " << username << " | " << "�����: " << lives << " | " << "����: " << score << endl;
                            cout << "\n\n";
                        }
                        /////////////////////////////////
                        /////////////////////////////////
                        /////////////////////////////////
                        if (lives == 0) {
                            break;
                        }
                        break;
                    }
                    else {
                        break;
                    }
                }
                else {
                    break;
                }
            } //�������� ����� ����
        } //�������� ������
    } //�������� while
} //�������� ������� main 