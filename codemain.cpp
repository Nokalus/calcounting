#include <iostream>
#include <limits>

using namespace std;

int main() {
    double ves, voz, rost;
    int pol;
    int activl;

    cout << "--------Подсчёт суточной нормы калорий--------" << endl;

    cout << "| Ваш возраст (г): ";
    while (true) {
        if (cin >> voz && voz > 0) break;
        cout << "Введите корректный возраст: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "| Ваш вес (кг): ";
    while (true) {
        if (cin >> ves && ves > 0) break;
        cout << "Введите корректный вес: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "| Ваш рост (см): ";
    while (true) {
        if (cin >> rost && rost > 0) break;
        cout << "Введите корректный рост: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "| Ваш пол (1 - м / 2 - ж): "; 
    while (true) {
        if (cin >> pol && (pol == 1 || pol == 2)) break;
        cout << "Введите корректный пол (1 для мужчин, 2 для женщин): ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "| Ваш уровень физической активности (1 - малоподвижный, 2 - умеренно активный, 3 - активный): ";
    while (true) {
        if (cin >> activl && (activl >= 1 && activl <= 3)) break;
        cout << "Введите корректный уровень активности (1, 2 или 3): ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    double bmr;
    //здесь идёт проверка, какую формулу мы используем
    if (pol == 1) {
        //для мужчин
        bmr = 10 * ves + 6.25 * rost + 5 * voz + 5;
    } else {
        //для женщин
        bmr = 10 * ves + 6.25 * rost + 5 * voz - 161;
    }


    double activity;
    //по уровню активности переменно даются определённые значения
    if(activl == 1){
        activity = 1.2;
    } else if (activity == 2){
        activity = 1.55;
    }else{
        activity = 1.9;
    }
    
    double calories = bmr * activity;
    //конечный подсчёт калорий

    cout << "----------------------------------------" << endl; 
    cout << "|| Ваша суточная норма калорий - " << calories << " ||" << endl;

    return 0;  
}