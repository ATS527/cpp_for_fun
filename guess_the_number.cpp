#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;


void slowType(string text,int time){
    cout << "Computer : ";
    for(char c: text)
    {
        this_thread::sleep_for(chrono::milliseconds(time));
        cout << c << flush;
    }
}

int main() {
    string garbageVal;
    
    slowType("......",350);
    cout << endl;
    cout << endl;
    cout << "Me : ";
    cin >> garbageVal;

    slowType("Lemme show you my skills",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";
    cin >> garbageVal;

    slowType("Am not so dumb anymore!!",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";
    cin >> garbageVal;

    slowType("Ok...Pick a number from 1 - 9",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("Now multiply your number by 2",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";
    cin >> garbageVal;

    slowType("Now add 5 to the answer",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("Now multiply that answer by 50",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("If you already had birthday in 2021 ??",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    if(garbageVal == "yes" || garbageVal == "Yes"){
        slowType("Then add 1771 to the result",100);
    }else{
        slowType("Then add 1770 to the result",100);
    }
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("Ok...now subtract your year of birth from answer",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("At this point your result would be of 3 digits...Am i right ???",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("Now check this..first digit of your result is the number you first thought of!!!",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;

    slowType("And rest is your age!!!!",100);
    cout << endl;
    cout << endl;
    cout << "Me : ";   
    cin >> garbageVal;
    slowType("Told yaa.......XD",100);

    this_thread::sleep_for(chrono::seconds(5));

    for (int i = 0; i <= 100; i++)
        cout <<"\n" << endl;


}