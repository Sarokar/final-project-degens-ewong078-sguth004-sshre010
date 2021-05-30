#include <iostream>
//#include "combat.hpp"
//#include "itemNames.hpp"
//#include "names.hpp"
//#include "overallText.hpp"
//#include "playerNames.hpp"
#include <string>
#include <unistd.h>


//NOTICE NOTCIE  I WILL UPDATE ALL THE COMBAT CALLS AND USER CALLS WHEN THEY ARE ACTUALLY IMPLEMENTED

// YOU HAVE TO DO THE CORRECT INPUT OR IT WILL NOT WORK PLEASE

// COUPLE BUGS WITH OUTPUT WHEN COMPLETING A ROUTE BUT IVE BEEN AT THIS FOR A WHILE SO IDC ANYMORE
using namespace std;

void longDelay() {
usleep(3000000);
}


void delay() {
usleep(1500000);
}

int main() { // I think we will just implement the story through main and call for classes and their functions throug main

// could implement saves somehow.....
cout << "==============================================================" << endl;
cout << "BLADEHEART by Edmund Wong, Sarokar Shrestha, and Shane Guthrie" << endl;
cout << "==============================================================" << endl;
longDelay(); // I might implement this different for each word but for now this is good enough
cout << "Once upon a time in a land far far away......" << endl;
delay();
cout << "There once was a boy.... a very good, strong boy!" << endl;
delay();
cout << "............" << endl;
delay();
cout << "What was his name again? i forgot..." << endl;
delay();
cout << "please type in your name" << endl;
string user = "";
cin >> user;;
longDelay();
//playername User;
//User(user);
cout << "Ah yes! Thats the one! " << user <<  endl;
delay();
//cout << User.getName();
cout << "Now " << user << " here really is a good kid." << endl;
delay();
cout << "Isn't that right, " << user << "?" << endl;
delay();
string ans;
cout << "Yes or No?" << endl;
cin >> ans;
longDelay();
if(ans == "Yes") {
cout << "Splendid! At least I remembered something!" << endl;
delay();
}
else if(ans == "No") {
cout << "HUH! does that mean your a... bad boy? O_O" << endl;
delay();
}
cout << "Regardless you have an adventure to go on! later loser! uwu" << endl;
delay();
cout << "(The boy wakes up from his deep slumber to see his mother right next to his bed)" << endl;
cout << "Good morning sugarplum! Who's ready to become an adventurer today?" << endl;
delay();
cout << "1 - OH OH ME ME PLEASE PICK ME!!!" << endl;
cout << "2 - Jeez mommy let me sleep in a bit im tired x(" << endl;
cout << "3 - I don't like the monkey bars, i fell when I was a kid :(" << endl;
cin >> ans;
if(ans == "1") {
cout << "Thats the spirit " << user << "!" << endl;
}
if(ans == "2") {
cout << "Shut your whiney ass up, loser!" << endl;
}
if(ans == "3") {
cout << ".....why the fuck did shane put this in the game...." << endl;
}
delay();
cout << "I do not like you at all." << endl;
delay();
cout << "....." << endl;
delay();
cout << "Now get out of my house and sign up to be an adventurer." << endl;
delay();
cout << "(" <<  user <<" scurries on over to the adventurers guild and goes right up to the beautiful looking receptionist)" << endl;
delay();
cout << "Hey little squirt! What can I do for you! <3" << endl;
delay();
cout << "1 - I want to be an adventurer WOOHOO" << endl;
cout << "2 - Yo u kinda cute honey ;)" << endl;
cout << "3 - Hello!" << endl;
cin >> ans;

while(ans != "3") {
if(ans == "1") {
cout << "HAHAHAHAHAHAAAHAAH you want to be an adventurer? NO SHOT" << endl;
delay();
cout << "GAME OVER" << endl;
longDelay();

cout << "2 - Yo u kinda cute honey ;)" << endl;
cout << "3 - Hello!" << endl;
cin >> ans;
}
if(ans == "2") {
cout << "I'm a dude" << endl;
delay();
cout << "....." << endl;
delay();
cout << "GAME OVER" << endl;
delay();
cout << "1 - I want to be an adventurer WOOHOO" << endl;
cout << "3 - Hello!" << endl;
cin >> ans;
}
}
if(ans == "3") {
cout << "You seem like you got what it takes" << endl;
delay();
cout << "Here's your adventurer card now go on a quest! YIPEE" << endl;

}
delay();
cout << "Oh, I almost forgot head off to the blacksmith, his name is Shane he is really cool, funny, basically a perfect human being." << endl;
delay();
cout << "(" << user << " can't wait to meet Shane as he is so dreamy so he sprints to the blacksmith)" << endl;
delay();
cout << "Yo what up I'm Shane (⌐■_■)" << endl;
delay();
cout << "1 - OMG U R TOTES COOL" << endl;
cout << "2 - Bruh you look like a old camel" << endl;
cin >> ans;
delay();
if(ans == "1") {
cout << "Yessir heres your gear ugly" << endl;
delay();
cout << "*Received Shit Armor and Shit Sword from the heavenly Shane!*" << endl;
delay();
//armour("Shit Armour" 2);
//weapon("Shit Sword" 4);
}
if(ans == "2") {
cout << "get out please *cries*" << endl;
delay();
cout << "*Received nothing except for guilt for lying to the heavenly Shane...*" << endl;
delay();
}
cout << "(It seems we are all set for an adventure and a grand one too so " << user << " goes to check the open quests :) )" << endl;
longDelay();
cout << "1 - Edmund the Whale is killing all dolphins and fish for no reason O_O" << endl;
cout << "2 - Sarokar the Car is speeding D:" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
longDelay();

// START OF BRANCHING

bool first = false;  // to check it allowed to go to demon loard 
bool second = false;

if(ans == "1") {
cout << "(" << user << " begins to set sail to Degen Island where Edmund the Whale is usually spotted)" << endl;
delay();
cout << "…………" << endl;
delay();
cout << "(You encounter a fierce dolphin! (¬_¬)  )" << endl;
//person("Fierce Dolphin",); // water
//combat(user,dolphin);
delay();
cout << "*dying* You better watch out for Edmund…. *cough* *dead*" << endl;
delay();
cout << "*Receive Fin Sword :O*" << endl;
//weapon("Finn Sword", 4, "Water");
delay();
//after every fight just give full health
cout << "*splish*" << endl;
delay();
cout << "*splash*" << endl;
delay();
cout << ")_)" << endl;
delay();
cout << "(ITS A GIANT FIRE CRAB (╯°□°）╯︵ ┻━┻)" << endl;
delay();
cout << "……" << endl;
delay();
cout << "(His claws seem to shoot fire balls…...)" << endl;
delay();
//person("Giant Fire Crab" 4,3,"Fire")A
//combot(user, Giant Crab);
cout << "*Received Crab Armor (ᵔᴥᵔ)*" << endl;
//armour("Crab Armor",5,"Water");
delay();
cout << "(Eventually " << user << " finds Edmund! O_o)" << endl;
delay();
cout << "…………" << endl;
delay();
cout << "(Edmund the Whale was not in water, but ON THE LAND!! -_-)" << endl;
delay();
cout << "Hello little one….. Please push me back into Lake Primogem…… *suffocating*" << endl;
delay();
cout << "1 - *Push him in*" << endl;
cout << "2 - *Attack him when he’s vulnerable and sad ;(*" << endl;
cout << "3 - *Walk away B)*" << endl;
cin >> ans;
longDelay();
if(ans == "3") {
cout <<  "Hey come back!!!! Why would you come all this way…. *suffocating* just to leave????????? F2P Scum……."<<endl;
delay();
cout << "1 - *Push him in*" << endl;
cout << "2 - *Attack him when he’s vulnerable and sad ;(*" << endl;
cin >> ans;
}
if(ans == "1") {
delay();
cout << "Thank you idiot! I gacha now!!!" << endl;
//person("Edmund the Whale".5.10."Water");
//combat(User,"Edmund the Whale");
}
if(ans == "2") {
delay();
cout << "“WTF IS WRONG WITH YOU D:”" << endl;
//person("Edmund the Whale",3,7,"Water");
//combat(User,"Edmund the Whale");
}
delay();
cout << "gg bro" << endl;
delay();
cout << "*Received Whale Tooth Sword ＼( °□° )／*" << endl;
delay();
cout << "(Back to the safety of the village (⌐■_■) )" << endl;
delay();
first = true;
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding D:" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >>  ans;
longDelay();
if(ans == "1" && first == true) {
while(ans == "1") {
cout << "You already did this route" << endl;
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
}

}

}

if(ans == "2") {
cout << "(" << user << " decides to head on over to the streets  ╮ (. ❛ ᴗ ❛.) ╭)" << endl;
delay();
cout << "(The screeching sound of tires is everywhere! ( ͡° ʖ̯ ͡°) )" << endl;
delay();
cout << "………" << endl;
delay();
cout << "(Hol up, that motorcycle baby looks kinda cute (づ｡◕‿‿◕｡)づ )" << endl;
delay();
cout << "Pet it?" << endl;
delay();
cout << "Yes or No" << endl;
cin >> ans;
longDelay();
if(ans == "Yes") {
cout << "WHO THE FUCK YOU THINK YOU ARE TOUCHING MY SON!" << endl;
delay();
}
else {
cout << "WHO THE FUCK YOU THINK YOU ARE IGNORING MY SON!" << endl;
delay();
}
cout << "(A wild angry Motorcycle Mother appears! (゜-゜) )" << endl;
delay();
cout << "(The mother pulls out the newly created Grass Grass Gun O_O" << endl;
delay();
//person("Motor Mother", 6. 9, "Grass");
//combat(User,Motor Mother);
cout << "*Received Grass Grass Gun* ヽ༼ຈل͜ຈ༽ﾉ*" << endl;
//weapon("Grass Grass Gun", 5, "Grass");
delay();
cout << "(Well you just killed his mother)" << endl;
delay();
cout << "(..........................)" << endl;
delay();
cout << "(Lets move on :D)" << endl;
delay();
cout << "(The roads are so long and winding "<< user << " starts to get tired ¯\(°_o)/¯)" << endl;
delay();
cout << user << " falls asleep standing up? o_O"  << endl;
delay();
cout << "W" << endl;
delay();
cout << "T" << endl;
delay();
cout << "F" << endl;
delay();
cout << "....." << endl;
delay();
cout << ".." << endl;
delay();
cout << ".   . . ....." << endl;
delay();
cout << "............" << endl;
longDelay();
cout << "THE SLEEP DEMON APPEARS O_O" << endl;
delay();
cout << "oooOOooooooOOOO its me, the SLEEP demon ಠ_ಠ" << endl;
delay();
cout << "1 - nah fuck this *wake up*" << endl;
cout << "2 -  WOOHOO FIGHT FIGHT FIGHT" << endl;
cin >> ans;
if(ans == "1") {
cout << "HAHAHAHA SLEEP FOREVER TWERP" << endl;
delay();
//person("Sleep Demon",5,4,3);
//combat("Sleep Demon", User);
}
else{
cout << "Nah u the real demon O_O fuck this" << endl;
}
delay();
cout << "…." << endl;
delay();
cout << "(Anyways, lets get back to our adventure!!!!!!)" << endl;
delay();
cout << "VRMMMMM VRMMMMMMMM" << endl;
delay();
cout << "SKRRRRRRRRT" << endl;
delay();
cout << "(Yo that car was going super fast!)" << endl;
delay();
cout << "….….….….…." << endl;
longDelay();
cout << "THAT MUST BE SAROKAR!" << endl;
delay();
cout << "(After 53 months of trying to catch up to Sarokar)" << endl;
cout << "1 - IM A HUGE FAN PLEASE TALK TO MEEEEEEEE" << endl;
cout << "2 - Bruh u slow af it didnt take anytime to catch up to u" << endl;
cin >> ans;
longDelay();

if(ans == "1") {
cout << "Ooooooo ok, what do u want from me little man" << endl;
cout << "1 - lmao get baited idiot time to stop ur no good speeding" << endl;
cout << "2 - *cut his tires* I am speed now" << endl;
cin >> ans;
if(ans == "1") {
//person("Sarokar the Car",4,18,8,"Fire");
//combat(User,Sarokar);
} 
else {
//person("Sarokar the Car",4,18,4,"Fire");
////combat(User,Sarokar);
//
}
}
else {
//person("Sarokar the Car",4,18,8,"Fire");
////combat(User,Sarokar);
//
}
cout << "gg bro" << endl;
delay();
cout << "*Received Rubber Armor* ＼( °□° )／*" << endl;
//armour("Rubber Armor" 7);
delay();
cout << "(Back to the safety of the village (⌐■_■) )" << endl;
second = true;
delay();
if(first == false){
cout << "1 - Edmund the Whale is killing all dolphins and fish for no reason O_O" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
delay();
if(first == true) {
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
}
}
if(ans == "2" && second == true) {
while(ans == "2") {
cout << "1 - Edmund the Whale is killing all dolphins and fish for no reason O_O" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
}
}
if(ans == "1" && first == true) {
while(ans == "1") {
cout << "You already did this route" << endl;
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
}
}
if(ans == "1" && first == false) {
cout << "(" << user << " begins to set sail to Degen Island where Edmund the Whale is usually spotted)" << endl;
delay();
cout << "…………" << endl;
delay();
cout << "(You encounter a fierce dolphin! (¬_¬)  )" << endl;
//person("Fierce Dolphin",); // water
//combat(user,dolphin);
delay();
cout << "*dying* You better watch out for Edmund…. *cough* *dead*" << endl;
delay();
cout << "*Receive Fin Sword :O*" << endl;
//weapon("Finn Sword", 4, "Water");
delay();
//after every fight just give full health
cout << "*splish*" << endl;
delay();
cout << "*splash*" << endl;
delay();
cout << ")_)" << endl;
delay();
cout << "(ITS A GIANT FIRE CRAB (╯°□°）╯︵ ┻━┻)" << endl;
delay();
cout << "……" << endl;
delay();
cout << "(His claws seem to shoot fire balls…...)" << endl;
delay();
//person("Giant Fire Crab" 4,3,"Fire")A
//combot(user, Giant Crab);
cout << "*Received Crab Armor (ᵔᴥᵔ)*" << endl;
//armour("Crab Armor",5,"Water");
delay();
cout << "(Eventually " << user << " finds Edmund! O_o)" << endl;
delay();
cout << "…………" << endl;
delay();
cout << "(Edmund the Whale was not in water, but ON THE LAND!! -_-)" << endl;
delay();
cout << "Hello little one….. Please push me back into Lake Primogem…… *suffocating*" << endl;
delay();
cout << "1 - *Push him in*" << endl;
cout << "2 - *Attack him when he’s vulnerable and sad ;(*" << endl;
cout << "3 - *Walk away B)*" << endl;
cin >> ans;
longDelay();
if(ans == "3") {
cout <<  "Hey come back!!!! Why would you come all this way…. *suffocating* just to leave????????? F2P Scum……."<<endl;
delay();
cout << "1 - *Push him in*" << endl;
cout << "2 - *Attack him when he’s vulnerable and sad ;(*" << endl;
cin >> ans;
}
if(ans == "1") {
delay();
cout << "Thank you idiot! I gacha now!!!" << endl;
//person("Edmund the Whale".5.10."Water");
//combat(User,"Edmund the Whale");
}
if(ans == "2") {
delay();
cout << "“WTF IS WRONG WITH YOU D:”" << endl;
//person("Edmund the Whale",3,7,"Water");
//combat(User,"Edmund the Whale");
}
delay();
cout << "gg bro" << endl;
delay();
cout << "*Received Whale Tooth Sword ＼( °□° )／*" << endl;
delay();
cout << "(Back to the safety of the village (⌐■_■) )" << endl;
delay();
first = true;
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding D:" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >>  ans;
longDelay();
if(ans == "1" && first == true) {
while(ans == "1") {
cout << "You already did this route" << endl;
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
}
}
while(ans == "2") {
cout << "You already did this route" << endl;
cout << "1 - Edmund the Whale is dead….. - You…... Killed…... Him ¯\(°_o)/¯" << endl;
cout << "2 - Sarokar the Car is speeding in heaven :D" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;

}
}
if(ans == "3" && first == true && second == true) {
cout << "(Alright looks like you made it this far)" << endl;
delay();
cout << "(Sorry whoever made this story is an absolute idiot)" << endl;
delay();
cout << "(I apologize for what has happened so far)" << endl;
delay();
cout << "(But now the story will be super duper clean)" << endl;
delay();
cout << ":)" << endl;
longDelay();
cout << "(With the power you gained from your journey so far)" << endl;
delay();
cout << "(You are finally on your way to the Demon Lord O_O)" << endl;
delay();
cout << "…." << endl;
delay();
cout << "(Whats this?)" << endl;
delay();
cout << "(A bandit appears! Oh No!)" << endl;
delay();
cout << "(With a complete Supa Hot Fire Armor set with fire sword with no additional cost!)" << endl;
delay();
cout << "Text Fighting Time Now!" << endl;
delay();
//person("Bandit",5,10,5,"Grass");
//combat(User,Bandit);
cout << "(Do you want the armor or the sword? ( ͡° ͜ʖ ͡°))" << endl;
cout << "1 - Armor" << endl;
cout << "2 - Sword" << endl;
cin >> ans;
if(ans == "1") {
//armor("Bandit Armor", 7, "Fire""
}
else {
//weapon("Bandit Sword",7,"Fire");
}
longDelay();
cout << "(I would’ve taken the other option…)" << endl;
delay();
cout << "(Regardless, "<< user << " is near the demon lords castle)" << endl;
cout << "1 - Oh boy! I finally made it! Lets walk through the front door :) :) " << endl;
cout << "2 - I’m sleepy bruh *fall asleep standing up?* - Nah this aint the time, "<< user <<"!" << endl;
cout << "3 - Yo this mushroom on the ground looks tasty *eat mushroom" << endl;
cin >> ans;
if(ans == "2") {
cout << "Nah this aint the time, " << user << "!" << endl;
}
if(ans == "3") {
//user.setAttack(x + 1);
cout << "gain 1 attack PogU" << endl;
}
delay();
cout << "……" << endl;
delay();
cout << "“Whatcha doing over there squirt?" << endl;
delay();
cout << "(It’s Shane!!!!! (づ｡◕‿‿◕｡)づ)" << endl;
delay();
cout << "“Good to see you, whatcha doing around here :P”" << endl;
delay();
cout << "1 - Here to take down the demon lord, heard hes causing a ruckus! ｡^‿^｡" << endl;
cout << "2 - I was just…. Passing by… wh… what about you…. (✿◠‿◠)" << endl;
cout << "3 - Get lost ugly" << endl;
cin >> ans;
delay();
if(ans == "1") {
cout << "Oh well good luck with that :)" << endl;
delay();
}
if(ans == "2") {
cout << "oh u know just livin Ahahaha….." << endl;
delay();
}
if(ans == "3") {
cout << "Ill let that slide cuz I am Shane (. ❛ ᴗ ❛.)" << endl;
delay();
}
cout << "“Anyways Im gone”" << endl;
delay();
cout << "*Shane Disappeared* (╯°□°）╯︵ ┻━┻" << endl;
delay();
cout << "(Man that Shane guy is cool ~(˘▾˘~) )" << endl;
delay();
cout << "......." << endl;
delay();
cout << "“Ayo whatchu doing out here”" << endl;
delay();
cout << "(A mysterious man pulls up in full water gear O_O)" << endl;
delay();
cout << "1 - yo man who u?" << endl;
cout << "2 - i like the drip young man" << endl;
cout << "3 - u wanna fight" << endl;
cin >> ans;
delay();
if(ans == "1") {
cout << "Im the demon lords apprentice" << endl;
delay();
cout << "Oh....." << endl;
longDelay();
}
if(ans == "2") {
cout << "Thanks man :D my dads the demon lord so he gave it to me" << endl;
delay();
cout << "Oh....." << endl;
longDelay();
}
if(ans == "3") {
cout << "aight bet" << endl;
delay();
}
//person("Demon Lord Apprentice",8,8,6,"Water");
//combat(user,DemonLordApprentice);
cout << "Aye good shit u got my ass" << endl;
delay();
cout << ":3" << endl;
delay();
cout << "gg my dads chilling that there castle gl" << endl;
delay();
cout << "*Received Water Armor (=^ェ^=)*" << endl;
delay();
//armor("Water Armor",9);
cout << "("<< user<< " heeds his advice and advances on)" << endl;
delay();
cout << "yo" << endl;
longDelay();
cout << "....." << endl;
longDelay();
cout << "O_O" << endl;
longDelay();
cout << "I didn’t expect to see you again so soon" << endl;
longDelay();
cout << "(.... ITS SHANE ( ͡° ʖ̯ ͡°) )" << endl;
longDelay();
cout << "(THE DEMON LORD IS SHANE??? (▀̿Ĺ̯▀̿ ̿) )" << endl;
delay();
cout << "So we fighting or wot" << endl;
delay();
cout << "1 - aight bet" << endl;
cout << "2 - WHY ARE YOU THE DEMON LORD!? ┻━┻ ︵ ＼( °□° )／ ︵ ┻━┻" << endl;
cout << "3 - I knew it was u lmao this author is so predictable" << endl;
cin >> ans;
delay();
if(ans == "1") {
cout << "ok" << endl;
delay();
}
if(ans == "2") {
cout << "HAHA FOOL HOW DID U NOT KNOW?????????" << endl;
delay();
}
if(ans == "3") {
cout << "lol shut up" << endl;
delay();
}
cout << "Aight no mo stalling story getting a bit too long" << endl;
delay();
//person("Demon Lord",9,9,7,"Fire");
//combat(user,demonlord);
cout << "gg bro" << endl;
delay();
cout << "Hope you enjoyed the game, TAs and graders" << endl;
delay();
cout << "L8r" << endl;
delay();
cout << "(Please give good grade, we got a 27/50 on first proposal)" << endl;
delay();
cout << "…….." << endl;
delay();
cout << "(Thank you (: )" << endl;
delay();

}

else {
cout << "Just reset bruh" << endl;
}


}

return 0;
}





























