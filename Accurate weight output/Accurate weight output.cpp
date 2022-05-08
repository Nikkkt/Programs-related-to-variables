#include <iostream>
using namespace std;

int main()
{
    double tones;
    float kilograms, grams;

    cout << "Enter the number of tones: ";
    cin >> tones;

    kilograms = (tones - (int)tones) * 1000;
    grams = (kilograms - (int)kilograms) * 1000;

    cout << "It is " << (int)tones << " tones, " << (int)kilograms << " kilograms, " << (int)grams << " grams " << endl;
}