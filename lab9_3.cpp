/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int bounty;
    double height;
    string character;
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;

        if(height < 100)
        {
            character = "Chopper";
        }

        else
        {
            if(height < 180)
            {
                character = "Usopp";
            }
            else
            {
                cout << "Enter your bounty: ";
                cin >> bounty;

                if(bounty > 1.1e9)
                {
                    character = "Zoro";
                }
                else
                {
                    character = "Sanji";
                }
            }
        }

    }
    else
    {
        if(age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;

            if(bounty > 5e8)
            {
                character = "Jinbe";
            }
            else
            {
                character = "Franky";
            }
        }
        else
        {
            character = "Brook";
        }
    }
    cout << "Your character = " << character ;
}