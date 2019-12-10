 //Program Name: "Adventure" Choice Game
//Purpose:  Make a simple adventure choice game in C++
//Author: Sean Jackson
//Date Last Modified: 12/09/19
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;
int main() {
// Basic variables 
int userchoice;
int choice;
int Bill = 1;
int Quit = 2;
// Title
cout << "Welcome to....Adventure Choice Game!!!" << endl;
do    // Able to loop when you get to the end but unfortunately I currently cannot figure out a way to bring someone back to the menu if they get a answer wrong
{
cout << "Game Menu\n";
cout << "---------\n"; 
cout << "1.) Bill\n";
cout << "2.) I don't want to play this game my dude\n";
cout << "Pick your character (you only have one so it shouldn't be that hard to pick one): ";
cin >> userchoice;
while(userchoice < Bill || userchoice > Quit) 
{
cout << "Please enter the right choice: ";
cin >> userchoice;
}

if (userchoice == 1)
{
    cout << "\nYou have selected, Bill." << endl;   
}
else if (userchoice == 2)
{
    cout << "\nWow okay I see how it is" << endl;
    return 0;
}

cout << "\n Bill is your average office worker. One day it was just any ol' regular day at the office until Bill teleported into another world and this world is called Earth part 2. Earth part 2  is filled with dangerous obstacles. It is up to YOU to get Bill back into his world safely, good luck!" << endl;

cout << "\nBill is currently trying to figure out on what to do, but then he sees something strange... What should he do?\n" << endl;
cout << "Choices\n";
cout << "-------\n";
cout << "1.) Check it out\n";
cout << "2.) Ignore it\n";
cout << "3.) Stand still for 12 seconds\n";
cout << "Enter your choice: ";
cin >> choice;
if (choice == 1)
{
cout << "\nBill went over to check out that strange thing. It was just a plate of pancakes... while Bill stare at the pancakes, he starts to notice that he's hungry. Should he eat the pancakes?" << "\n Type any number to see the choices: ";
}
else if (choice == 2)
{
cout << "\nBill was too curious to just ignore it, so he went over to check out that strange thing anyway. It was just a plate of pancakes... while Bill stare at the pancakes, he starts to notice that he's hungry. Should he eat the pancakes?" << "\n Type any number to see the choices: ";
}
else if (choice == 3)
{
cout << "\nBill stood still for 12 seconds, nothing happened. Congrats you wasted 12 seconds of Bill's life. Bill went over to check out that strange thing. It was just a plate of pancakes... while Bill stare at the pancakes, he starts to notice that he's hungry. Should he eat the pancakes?" << "\n Type any number to see the choices: "; 
}
else
cout << "Invaild choice, enter your choice: "; // This code will be ignored, if someone types in the wrong value more then once then it will move on to the next Scenario without context.
cin >> choice;


cout << "Choices\n";
cout << "-------\n";
cout << "1.) Yes! I mean.... Y E S!!!\n";
cout << "2.) Uh no\n";
cout << "Enter your choice: ";
cin >> choice;
if (choice == 1)
{
cout << "\nBill ate the pancakes, he thought they were okay. Bill began walking while trying to figure a way out of Earth part 2, but then he sees a strange old man. Bill walked up to the old man and asked him if he knew how to leave Earth part 2. The old man explains to Bill that he will only answer his question if he entertains him. Bill agrees with the old man's odd request, what should Bill do to entertain the old man?" << "\n Type any number to see the choices: ";
}
else if ( choice == 2)
{
cout << "\nBill died from starvation, YOU FAILED!!!\n";
cout << "Ending game..." << endl;
return 0;
}
else
cout << "Invaild choice, enter your choice: ";
cin >> choice;


cout << "Choices\n";
cout << "-------\n";
cout << "1.) Do the whip nay nay boom watch me watch me super man soulja boy stanky leg dab.\n";
cout << "2.) Talk about politics\n";
cout << "3.) Have a mental breakdown for no reason.\n";
cout << "Enter your choice: ";
cin >> choice;
if (choice == 1)
{
    cout << "\nWhen Bill did uh... that, the old man started to show a face of discomfort and started to pull something out. Was it a map? NO! it was a gun... Oh.\n";
    cout << "Well good games I guess, Ending game..." << endl;
    return 0;
}
else if (choice == 2)
{
   cout << "\nThe old man died from Bill talking about something the old man didn't care about. Now Bill is stuck here forever.\n";
   cout << "You tried and failed, good games. Ending game..." << endl;
   return 0;
}
else if (choice == 3)
{
    cout << "\nThe old man looked at Bill like Bill had emotional problems, so he decided to tell him on how to escape Earth part 2. Bill finds out that he has to defeat the ruler of earth part 2, ruler evil guy, to go back home." << "\n Type any number to continue... ";
}
 else
   cout << "Invaild choice, enter your choice: ";
   cin >> choice;


cout << "\nWith this knowledge, Bill went out to find ruler evil guy, the old man said that ruler evil guy's castle is right down the street so Bill went down the street and found the castle. In order to enter the castle, Bill must go through the front door but there is someone with a spear that is guarding the door. What should Bill do?" << endl;
cout << "Choices\n";
cout << "-------\n";
cout << "1.) Up-slide this fool\n";
cout << "2.) distract the guard\n";
cout << "3.) Ask the old man for help\n";
cout << "4.) pretend to have a scheduled meeting with ruler evil guy\n";
cout << "Enter your choice: ";
cin >> choice;
if (choice == 1)
{
cout << "\nBill started to charge the guard but again HE HAS A SPEAR so Bill easily gets stabbed and dies.\n";
cout << "I guess you should cut Bill some slack" << endl;
return 0;
}
else if (choice == 2)
{
cout << "\nBill made a loud noise but towards his direction so the guard noticed Bill's location and killed him.\n";
cout << "I would say that you tried your best but you didn't soooo...." << endl;
return 0;
}
else if (choice == 3)
{
cout << "\nBill went back to the old man and explained his situation, the old man agreed to help him. The old man took out a gun and shot the guard, Bill is now able to enter the castle." << "\n Type any number to continue... ";
} 
else if (choice == 4)
{
cout << "\nBill went up to the guard and told him that he has a scheduled meeting with ruler evil guy. The guard said he was full of baloney and killed Bill.\n";
cout << "rip" << endl;
return 0;
}
else
 cout << "Invaild choice, enter your choice: ";
   cin >> choice;

   cout << "\nBill was now inside the castle, he is 1 step closer to meeting ruler evil guy. There was one more obstacle to overcome and it is a riddle. If Bill solves the riddle then he can open the door that leads to ruler evil guy's location, but if he gets the answer wrong then he will die. The riddle is: What is 2 + 2? What should Bill's answer be to this riddle?" << endl;
   cout << "Choices\n";
cout << "-------\n";
cout << "1.) 2\n";
cout << "2.) Fish\n";
cout << "3.) ITS 6!!!\n";
cout << "4.) Bro, this ain't a riddle\n";
cout << "Enter your choice: ";
cin >> choice;

if (choice == 1)
{
    cout << "\nThe door says: you're riiight... But I'm still gonna like kill you.\n";
    cout << "O O H" << endl;
    return 0;
}
else if (choice == 2)
{
cout << "\nThe door says: bad character *kills Bill*\n";
cout << "The door has a point" << endl;
return 0;
}
else if (choice == 3)
{
cout << "\nThe door says: .... *kills Bill*\n";
cout << "I guess the door didn't understand the reference and neither will you, bummer...." << endl;
return 0;
}
else if (choice == 4)
{
cout << "\nThe door says: you right *opens* Bill has solved the riddle, now he can finally meet ruler evil guy" <<  "\n Type any number to continue... ";
}
else
 cout << "Invaild choice, enter your choice: ";
   cin >> choice;
   
   cout << "\nBill came face to face with ruler evil guy, Bill asked ruler evil guy to send him home but ruler evil guy said no. Bill knows that he can go home if he defeats evil ruler guy. This is the final showdown, what should Bill do?" << endl;
    cout << "Choices\n";
cout << "-------\n";
cout << "1.) Up-slide this fool\n";
cout << "2.) Bribe him\n";
cout << "3.) Ask the old man for help again\n";
cout << "4.) ???????\n";
cout << "Enter your choice: ";
cin >> choice;

if (choice == 1)
{
cout << "\nBill charged at ruler evil guy and killed him. It turns out that ruler evil guy was pretty weak. Suddenly you see a bright light." << "\n Type any number to continue... ";
}
else if (choice == 2)
{
cout << "\nBill told ruler evil guy that he will pay him $100 to peck off and take him home, but ruler evil guy responded to Bill by chopping off his head.\n";
cout << "Bill didn't have $100 anyway" << endl;
return 0;
}
else if (choice == 3)
{
cout << "\nBill went to the old man and asked the old man to help him but the old man was sick of Bill so the old man shot Bill out of fustration.\n";
cout << "That is not a healthy way to deal with anger" << endl;
return 0;
}
else if (choice == 4)
{
cout << "\n???????????\n";
cout << "?????????????" << endl;
return 0;
}
else
cout << "Invaild choice, enter your choice: ";
   cin >> choice;

   cout << "\nBill woke up in his office, all of his co-workers looked at him funny. It turns out Bill was only gone for 5 mintutes. All Bill cared about though was doing his work, so he went back to work.\n\n";
   cout << "Congratulations, you did it. NOW DO IT AGAIN!\n\n";


} while (userchoice != Quit); // This code kinda does nothing and I don't know why.
return 0;
}
