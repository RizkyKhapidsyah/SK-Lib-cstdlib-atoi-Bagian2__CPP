#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int val;
    char strn1[] = "12546";

    val = atoi(strn1);
    cout << "String value = " << strn1 << endl;
    cout << "Integer value = " << val << endl;

    char strn2[] = "Manusia Biasa";
    val = atoi(strn2);
    cout << "String value = " << strn2 << endl;
    cout << "Integer value = " << val << endl;

    _getch();
    return (0);
}