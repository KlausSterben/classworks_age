
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите Ваш возраст\n";
    int vozrast;
    cin >> vozrast;

    if (vozrast <= 3) {
        cout << "У тебя еще пеленки - младенец";
    }   
    else if (vozrast <= 7) {
            cout << "Таблицу умножения выучил - дошкольник";
    }
    else  if (vozrast <= 13) {
        cout << "Еще не большой, но уже и не маленький - ребенок";
    }
    else if (vozrast <= 18) {
        cout << "Поздравляю с пубертатом - подросток";
    }
    else if (vozrast <= 55) {
        cout << "Страдай - ты уже взрослый";
    }
    else if (vozrast > 55) {
        cout << "Поздравляю, теперь Вы можете официально лениться - стар";
    }
      
    return 0;
}
