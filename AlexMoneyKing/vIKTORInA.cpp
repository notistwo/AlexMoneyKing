#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    //ПЕРЕМЕННЫЕ

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

    //НАЧАЛО

    cout << "\n\n\n";
    cout << otstup << "Приветствуем вас в викторине!\n\n\n";
    cout << litotstup << "Введите имя игрока: ";
    cin >> username;
    system("cls");

    while (userans == 1 or userans == 2 or userans == 3) {

        //МЕНЮ

//////////////////////////////
//////////////////////////////
//////////////////////////////

        if (score != 0 and lives != 0) {
            system("cls");
            cout << "\n\n\n\n";
            cout << otstup << textcolor << "Вы выиграли! Поздравляем!\n";
            cout << " \n\n\n";
            cout << otstup << textcolor << "Ваш счет: " << score << endl;
            cout << "\n";
            cout << otstup << textcolor << "Оставшееся количество жизней: " << lives << endl;
            cout << "\n";
            countgames = countgames + 1;
            globalscore = globalscore + score;
            lives = 3;
            score = 0;
            cout << otstup << "Для выхода в главное меню введите любое число: ";
            cin >> exit;
        }
        if (lives == 0) {
            system("cls");
            cout << "\n\n\n\n";
            cout << otstup << textcolor << "Вы проиграли!\n";
            cout << " \n\n\n";
            cout << otstup << textcolor << "Ваш счет: " << score << endl;
            cout << "\n";
            cout << otstup << textcolor << "Оставшееся количество жизней: " << lives << endl;
            cout << "\n";
            countgames = countgames + 1;
            globalscore = globalscore + score;
            lives = 3;
            score = 0;
            cout << otstup << "Для выхода в главное меню введите любое число: ";
            cin >> exit;
        }

        //////////////////////////////
        //////////////////////////////
        //////////////////////////////

        system("cls");
        cout << "\n\n\n\n";
        cout << otstup << textcolor << "Приветсвтую, " << username << "!\n" << endl;
        cout << " \n";
        cout << otstup << textcolor << "[1] Начать игру" << "\t\t\t\t" << "Всего сыграно матчей: " << countgames;
        cout << "\n\n";
        cout << otstup << textcolor << "[2] Настройки" << "\t\t\t\t" << "Набрано очков за все время: " << globalscore;
        cout << "\n\n";
        cout << otstup << textcolor << "[3] Правила\n\n";
        cout << otstup << textcolor << "[4] Выйти\n\n\n";
        cout << otstup << "Выберите пункт: ";
        cin >> userans;
        switch (userans) {
        case 2: //НАСТРОЙКИ 

            system("cls");
            cout << "\n\n";
            cout << otstup << textcolor << "НАСТРОЙКИ\n";
            cout << "\n\n\n";
            cout << litotstup << "[1] Редактировать имя игрока\n";
            cout << "\n";
            cout << litotstup << "[2] Редактирование вопросов в игре. Можно изменить на 8 - 10 - 12. Изначально - 10\n";
            cout << "\n";
            cout << litotstup << "[3] Редактирование цвет интерфейса\n";
            cout << " \n";
            cout << "\n";
            cout << litotstup << "Выберите пункт: ";
            cin >> setpoint;

            switch (setpoint) {

            case 1:
                system("cls");
                cout << otstup << textcolor << "НАСТРОЙКИ --> Смена имени\n";
                cout << " \n\n\n";
                cout << litotstup << "Введите ваше новое имя: ";
                cin >> username;
                break;

            case 2:
                system("cls");
                cout << otstup << textcolor << "НАСТРОЙКИ --> Изменение сложности\n";
                cout << " \n\n\n";
                cout << litotstup << textcolor << "Выберите сложность: \n";
                cout << "\n";
                cout << litotstup << textcolor << "[1] Легкая (8 вопросов)\n";
                cout << "\n";
                cout << litotstup << textcolor << "[2] Обычная (10 вопросов)\n";
                cout << "\n";
                cout << litotstup << textcolor << "[3] Сложная (12 вопросов)\n";
                cout << " \n\n";
                cout << litotstup << "Ввод: ";
                cin >> difficulty;
                break;

            case 3:
                system("cls");
                cout << otstup << textcolor << "НАСТРОЙКИ --> Изменение цвета интерфейса\n";
                cout << " \n\n\n";
                cout << litotstup << textcolor << "Выберите цвет интерфейса: \n";
                cout << "\n";
                cout << litotstup << textcolor << "[1] стандартный (по умолчанию)\n";
                cout << "\n";
                cout << litotstup << textcolor << "[2] красный\n";
                cout << "\n";
                cout << litotstup << textcolor << "[3] зеленый\n";
                cout << "\n";
                cout << litotstup << textcolor << "[4] желтый\n";
                cout << "\n";
                cout << litotstup << textcolor << "[5] синий\n";
                cout << "\n";
                cout << litotstup << textcolor << "[6] фиолетовый\n";
                cout << " \n\n";
                cout << litotstup << "Ввод: ";
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

            //ПРАВИЛА

        case 3:
            system("cls");
            cout << otstup << textcolor << "ПРАВИЛА ИГРЫ \n\n\n";
            cout << litotstup << "\t - Игрок получает очки за правильный ответ на вопрос\n";
            cout << "\n";
            cout << litotstup << "\t - Игрок проходит дальше за правильный ответ\n";
            cout << "\n";
            cout << litotstup << "\t - Игрок теряет жизнь при неправильном ответе\n";
            cout << "\n\n";
            cout << litotstup << "Для продолжения введите любое число: ";
            cin >> exit;
            break;

            // ИГРА

        case 1:
            while (lives > 0) {

                system("cls");
                cout << "\n\n";
                cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                cout << " \n\n";
                cout << litotstup << textcolor << "[1] Вопрос: Системный язык программирования?\n\n\n";
                cout << litotstup << textcolor << "[A] Python\t" << "[B] C#\n";
                cout << litotstup << textcolor << "[C] Ruby\t" << "[D] C++\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'D') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                if (lives == 0) {
                    break;
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                cout << litotstup << textcolor << "[2] Вопрос: Какого объекта нет на рабочем столе компьютера?\n\n\n";
                cout << litotstup << textcolor << "[A] Панель управления\t" << "[B] Корзина\n";
                cout << litotstup << textcolor << "[C] Панель задач\t" << "[D] Сетевое окружение\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'A') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[3] Вопрос: Какая единица измкркния не относится к измерению информации?\n\n\n";
                cout << litotstup << textcolor << "[A] Бит\t\t" << "[B] Байт\n";
                cout << litotstup << textcolor << "[C] Герц\t" << "[D] Бод\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'C') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[4] Вопрос: Каких компьютерова не бывает?\n\n\n";
                cout << litotstup << textcolor << "[A] Планшетных\t" << "[B] Портфельных\n";
                cout << litotstup << textcolor << "[C] Карманных\t" << "[D] Портативных\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'B') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[5] Вопрос: Кто является основателем Microsoft?\n\n\n";
                cout << litotstup << textcolor << "[A] Марк Цукерберг\t" << "[B] Билл Клинтон\n";
                cout << litotstup << textcolor << "[C] Стив Джобс\t\t" << "[D] Билл Гейтс\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'D') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[6] Вопрос: Как называют пользователя, который путешествует по всемирной паутине?\n\n\n";
                cout << litotstup << textcolor << "[A] Серфер\t" << "[B] Блоггер\n";
                cout << litotstup << textcolor << "[C] Спамер\t" << "[D] Диггер\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'A') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                cout << litotstup << textcolor << "[7] Вопрос: Кто является \"Отцом\" Интернета?\n\n\n";
                cout << litotstup << textcolor << "[A] Марк Цукенберг\t" << "[B] Тим Бернерс\n";
                cout << litotstup << textcolor << "[C] Билл Гейтс\t\t" << "[D] Алексей Попов\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'B') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
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
                cout << litotstup << textcolor << "[8] Вопрос: Что является электронной схемой для управления внешними устройствами?\n\n\n";
                cout << litotstup << textcolor << "[A] Плоттер\t" << "[B] Сканер\n";
                cout << litotstup << textcolor << "[C] Контроллер\t" << "[D] Драйвер\n";
                cout << " \n\n";
                cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                cin >> questans;
                if (questans == 'C') {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                    score = score + 10;
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                else {
                    system("cls");
                    cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                    lives = lives - 1;
                    cout << "\n\n";
                    cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                    cout << "\n\n";
                }
                /////////////////////////////////
                /////////////////////////////////
                /////////////////////////////////
                if (lives == 0) {
                    break;
                }
                if (difficulty > 1) {


                    cout << litotstup << textcolor << "[9] Вопрос: Как называется программа, управляющая внешними устройствами?\n\n\n";
                    cout << litotstup << textcolor << "[A] Компилятор\t" << "[B] Архиватор\n";
                    cout << litotstup << textcolor << "[C] Драйвер\t" << "[D] Модулятор\n";
                    cout << " \n\n";
                    cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                    cin >> questans;
                    if (questans == 'C') {
                        system("cls");
                        cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                        score = score + 10;
                        cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                        cout << "\n\n";
                    }
                    else {
                        system("cls");
                        cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                        lives = lives - 1;
                        cout << "\n\n";
                        cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                        cout << "\n\n";
                    }
                    /////////////////////////////////
                    /////////////////////////////////
                    /////////////////////////////////
                    if (lives == 0) {
                        break;
                    }
                    cout << litotstup << textcolor << "[10] Вопрос: Какая единица измерения информации самая большая?\n\n\n";
                    cout << litotstup << textcolor << "[A] Мегабайт\t" << "[B] Гигабайт\n";
                    cout << litotstup << textcolor << "[C] Байт\t" << "[D] Терабайт\n";
                    cout << " \n\n";
                    cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                    cin >> questans;
                    if (questans == 'D') {
                        system("cls");
                        cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                        score = score + 10;
                        cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                        cout << "\n\n";
                    }
                    else {
                        system("cls");
                        cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                        lives = lives - 1;
                        cout << "\n\n";
                        cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                        cout << "\n\n";
                    }
                    /////////////////////////////////
                    /////////////////////////////////
                    /////////////////////////////////
                    if (lives == 0) {
                        break;
                    }
                    if (difficulty == 3) {


                        cout << litotstup << textcolor << "[11] Вопрос: Кто создал C++?\n\n\n";
                        cout << litotstup << textcolor << "[A] Бьерн Страуструп\t" << "[B] Уилл Смит\n";
                        cout << litotstup << textcolor << "[C] Климаков\t\t" << "[D] Джастин Бибер\n";
                        cout << " \n\n";
                        cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                        cin >> questans;
                        if (questans == 'A') {
                            system("cls");
                            cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                            score = score + 10;
                            cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                            cout << "\n\n";
                        }
                        else {
                            system("cls");
                            cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                            lives = lives - 1;
                            cout << "\n\n";
                            cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                            cout << "\n\n";
                        }
                        /////////////////////////////////
                        /////////////////////////////////
                        /////////////////////////////////
                        if (lives == 0) {
                            break;
                        }
                        cout << litotstup << textcolor << "[12] Вопрос: Кто создал ОС Linux?\n\n\n";
                        cout << litotstup << textcolor << "[A] Линус Торвальдс\t" << "[B] Бастрыкина\n";
                        cout << litotstup << textcolor << "[C] Бастрыкин\t\t" << "[D] Уилл Смит???\n";
                        cout << " \n\n";
                        cout << litotstup << textcolor << "[+] Выбрать ответ: ";
                        cin >> questans;
                        if (questans == 'D') {
                            system("cls");
                            cout << otstup << textcolor << "Вы ответили верно!\n\n\n";
                            score = score + 10;
                            cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
                            cout << "\n\n";
                        }
                        else {
                            system("cls");
                            cout << otstup << textcolor << "Вы ответили не верно\n\n\n";
                            lives = lives - 1;
                            cout << "\n\n";
                            cout << otstup << textcolor << "[+] Игрок: " << username << " | " << "Жизни: " << lives << " | " << "Очки: " << score << endl;
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
            } //закрытие цикла игры
        } //закрытие свитча
    } //закрытие while
} //закрытие функции main 