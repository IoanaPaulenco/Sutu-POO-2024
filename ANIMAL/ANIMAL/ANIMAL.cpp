#include <pch.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Animal
{
public:
    int legs;

    void SetName(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Animal tap, caprioara;

    tap.SetName("Tap");
    tap.legs = 4;

    caprioara.SetName("Caprioara");
    caprioara.legs = 4;

    cout << "Animal 1 - name: " << tap.GetName() << " has legs: " << tap.legs << endl;
    cout << "Animal 2 - name: " << caprioara.GetName() << " has legs: " << caprioara.legs << endl;

    return 0;
}