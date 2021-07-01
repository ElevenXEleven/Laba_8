// lr_8_2500.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
using namespace std;

void pyti_znach() {
    cout << "Введите пятизначное число: ";
    int number;
    do {
        cin >> number;
        if (number < 10000 || number > 99999) cout << "это не пятизначное число!" << endl;
    } while (number < 10000 || number > 99999);
    int temp_value = number;
    int chifra;
    while (temp_value) {
        chifra = temp_value % 10;
        temp_value /= 10;
        cout << chifra << endl;
    }
}

void vvod_bykvi() {
    cout << "Введите латинскую букву в нижнем регистре: ";
    char enter;
    int step_to_upper_case = 32;
    do {
        cin >> enter;
        if (int(enter) < 97 || int(enter) > 122) cout << "Неверный символ!" << endl;
    } while (int(enter) < 97 || int(enter) > 122);
    cout << char(int(enter) - step_to_upper_case) << endl;
}


void average_array() {
    srand(time(NULL));
    int n = 10;
    int* arr = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
        sum += arr[i];
    }

    delete[]arr;
    double average = sum / n;
    cout << "Среднее - " << average << endl;
}


int main()
{
    setlocale(LC_ALL, "ru");
    pyti_znach();
    vvod_bykvi();
    average_array();
}
