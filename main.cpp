/*
Задача 1. Симулятор маршрутки
Что нужно сделать:
Напишите программу, которая симулирует работу маршрутки. 
Она умеет объявлять остановки и узнавать у пользователя, сколько человек вышло и зашло на остановке. 
Пассажиры оплачивают проезд при входе. Работать она должна примерно так:

Прибываем на остановку «Улица программистов». В салоне пассажиров: 0
Сколько пассажиров вышло на остановке? 0
Сколько пассажиров зашло на остановке? 3
Отправляемся с остановки «Улица программистов». В салоне пассажиров: 3
-----------Едем---------
Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: 3
…
…

Маршрут состоит из четырёх остановок. Напишите программу так, чтобы в конце она выводила, сколько денег мы заработали при условии, 
что билет стоит 20 руб., а расходы следующие:
• четверть — на зарплату водителю;
• пятая часть — на топливо;
• пятая часть — на налоги;
• пятая часть — на ремонт машины.
Формат вывода (после прибытия на последнюю остановку):
Всего заработали: 100 руб.
Зарплата водителя: 25 руб.
Расходы на топливо: 20 руб.
Налоги: 20 руб.
Расходы на ремонт машины: 20 руб.
Итого доход: 15 руб.

Рекомендации по выполнению:
• В одной программе должен быть как ввод количества вошедших и вышедших пассажиров, так и расчёты доходов и расходов.
• Стоит вынести названия остановок в переменные.
• Постарайтесь написать программу так, чтобы в неё без особых изменений можно было добавить ещё несколько остановок.

Что оценивается:
• Правильность подсчёта текущего количества пассажиров.
• Правильность подсчёта доходов и расходов.
• Отсутствие лишних переменных.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> stops = {"A","B","C","D"};

    int cout_passengers = 0;
    int out_passangers, in_passangers;

    int cost_one_ticket = 20;
    int total_income = 0;

    for (string elem: stops){
        cout << "Прибываем на остановку «" << elem <<"». В салоне пассажиров: "<< cout_passengers << endl;
        cout << "Сколько пассажиров вышло на остановке? ";
        cin >> out_passangers;
        cout_passengers-=out_passangers;

        cout << "Сколько пассажиров зашло на остановке? ";
        cin >> in_passangers;
        total_income+=in_passangers*cost_one_ticket;
        cout_passengers+=in_passangers;
        cout << "Отправляемся с остановки «" << elem <<"». В салоне пассажиров: " << cout_passengers << endl;
        cout << "-----------Едем---------" << endl;
    } 

    cout << "Всего заработали: "<< total_income <<" руб." << endl;
    cout << "Зарплата водителя: " << total_income/4 << " руб." << endl;
    cout << "Расходы на топливо: " << total_income/5 << " руб." << endl;
    cout << "Налоги: "<< total_income/5 << " руб." << endl;
    cout << "Расходы на ремонт машины: " << total_income/5 << " руб." << endl;

    cout << "Итого доход: " << total_income - total_income/4 - 3*total_income/5  << " руб." << endl;
}