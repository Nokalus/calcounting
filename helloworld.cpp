#include <iostream>
using namespace std;
int main(){

    double ves, voz, rost;
    int pol;

    cout << "--------Подсчёт суточной нормы калорий--------" << endl;

    cout << "| Ваш возраст ( г ): ";
    cin >> voz;

    cout << "| Ваш вес ( кг ): ";
    cin >> ves;

    cout << "| Ваш рост ( см ): ";
    cin >> rost;

    cout << "| Ваш пол ( 1 - м / 2 - ж ): "; 
    while (pol != 1 && pol != 2){
        cin >> pol;
    }

    if(pol == 1){
        cout<< "----------------------------------------" << endl; 
        cout << "|| Ваша суточная норма калорий - " << 10*ves + 6.25*rost + 5*voz + 5 << " ||";
    } else if (pol == 2){
        cout<< "----------------------------------------" << endl; 
        cout << "|| Ваша суточная норма калорий - " << 10*ves + 6.25*rost + 5*voz - 161 << " ||";
    } 

    return 0;  
}