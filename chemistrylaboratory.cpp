#include <iostream>
#include <vector>
#include "gameengine.h"
#include "main.h"
using namespace std;

void chemistrylaboratory()
{
    char chemlab_choice;
    if (location_count[5] == 1)
    {
        cout << "You are trying to apply what you have learnt. You take out a 1M Sodium Chloride and 1M Hydrochloric Acid.\n"
             << "You carefully measure 100cm3 of NaOH and 100cm3 of HCl and plan to mix them together to get the water as the product. You know it is risky.\n"
             << " However, in order to survive, you have no choice. Are you sure you want to do so? Y/N? \n";

        while (true)
        {
            cin >> chemlab_choice;
            if (chemlab_choice == 'Y' || chemlab_choice == 'N')
                break;
            else
                cout << "Please try again! Y/N?";
        }
        if (chemlab_choice == 'Y')
        {
            cout << "You prepare everything. You are going to pour all the acid inside the alkaline solution.\n"
                 << "All of a sudden, you hear a loud noise and are  distracted. You accidentally splash some acid on your hand.\n"
                 << "You yell but nobody reply. As a result, you are forced to use some water to wash it.\n"
                 << "You lose one water!" << endl;
            resource_amount[1]--;
            return;
        }
        else if (chemlab_choice == 'N')
        {
            cout << "You are considering: what if the concentration is not exactly 1M? what if there are error in measuring the volume?"
                 << "you are struggling. In the end, you are hesitated and tell yourself: \"next time\".\n"
                 << "You put down all the apparatus and leave." << endl;
            return;
        }
    }
    else if (location_count[5] == 2)
    {
        cout << "This is the 2nd time that you visit the chemistry lab. You look around and find all the things are gone.\n"
             << "Suddenly, you hear some someone is outside the door. You hide under the desk.\n"
             << "\"I am checking if there are anything useful in the chem lab\",a young girl says. She seems to be less than 18 years old and shorter than 155cm."
             << "You see her hands are holding 3 masks. You are going to:\n"
             << "A. Hit her head with a bible and take her masks\n"
             << "B. Introduce yourself";
        while (true)
        {
            cin >> chemlab_choice;
            if (chemlab_choice == 'A' || chemlab_choice == 'B')
                break;
            else
                cout << "Please try again! A/B?";
        }
        if (chemlab_choice == 'A')
        {
            if (resource_amount[8] == 0)
            {
                cout << "You don't have a bible, B is chosen for you automatically.\n";
                chemlab_choice = 'B';
            }
            else
            {
                cout << "\"Now your masks are all mine\". You yell and hit her head critically, you can see that she is bleeding and fainted.\n"
                     << "You feel guilty. However, you are clear that if you do not do so, you may run out of masks in the future and die.\n"
                     << " You get three masks!" << endl;
                resource_amount[2] = resource_amount[2] + 3;
                sentiment_count--;
                return;
            }
        }
        if (chemlab_choice == 'B')
        {
            cout << "You stand up with your hands raised up. \"Hi! This is Jacky.\" and you start your self-introduction.\n"
                 << "In the conservation, you know she is called Ashley. You are now friend with her.\n"
                 << "In the chat, you acknowledge that she want to write diary desperately and she is willing to give out 3 masks for a set of notebook & pen."
                 << "Are you going to accept the offer? Y/N?\n";
            while (true)
            {
                cin >> chemlab_choice;
                if (chemlab_choice == 'Y' || chemlab_choice == 'N')
                    break;
                else
                    cout << "Please try again! A/B?";
            }
            if (chemlab_choice == 'Y')
            {
                if (resource_amount[7] == 0)
                {
                    cout << "You don't have notebook & pen, N is chosen for you automatically.\n";
                    chemlab_choice = 'N';
                }
                else
                {
                    cout << "\"Thanks you so much!\" she said, \"please take my masks.\"" << endl;
                    resource_amount[2] = resource_amount[2] + 3;
                    return;
                }
            }
            if (chemlab_choice == 'N')
            {
                cout << "\"No thanks, probably next time.\"" << endl;
                return;
            }
        }
    }
    else if (location_count[5] == 3)
    {
        cout << "This is the third time visiting the chemistry lab. You find nothing and you decide to leave.\n"
             << "You walk out the room and feel dizzy suddenly. You feel a headache and start to fade away. Before fainting, you see a man with an iron stick behind you.\n"
             << "After 15 mins, you wake up and find all your equipment are gone. Lucky, your resources are still here." << endl;
        resource_amount[3] = 0;
        resource_amount[4] = 0;
        resource_amount[5] = 0;
        resource_amount[6] = 0;
        resource_amount[7] = 0;
        resource_amount[8] = 0;
        return;
    }
    else if (location_count[5] > 3)
    {
        cout << "You find nothing here and decide to leave, please choose another pleace to go." << endl;
        frequency--;
    }
}