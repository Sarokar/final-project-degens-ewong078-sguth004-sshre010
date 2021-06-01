#include <iostream>
#include "combat.cpp"
#include "fire.hpp"
#include "water.hpp"
#include "grass.hpp"
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
else {
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
cout << "*Received shit armor and sword but now you feel sad for hurting the Great Shane's feelings D:" << endl;
delay();
}
cout << "(It seems we are all set for an adventure and a grand one too so " << user << " goes to check the open quests :) )" << endl;
longDelay();
cout << "1 - Edmund the Whale is killing all dolphins and fish for no reason O_O" << endl;
cout << "2 - Sarokar the Car is speeding D:" << endl;
cout << "3 - The Demon Lord has risen :)" << endl;
cin >> ans;
longDelay();
Grass Player(user,100,20,10,10,"Grass");
Water Player2(user,100,20,10,10,"Water");
Fire Player3(user,100,20,10,10,"Fire");

// START OF BRANCHING

bool first = false;  // to check it allowed to go to demon loard 
bool second = false;

if(ans == "1") {
cout << "(" << user << " begins to set sail to Degen Island where Edmund the Whale is usually spotted)" << endl;
delay();
cout << "…………" << endl;
delay();
cout << "(You encounter a fierce dolphin! (¬_¬)  )" << endl;
Water dolphin("Fierce Dolphin",75,10,20,20,"Water");

//FIRST TESTED FIGHT

while(dolphin.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
dolphin.calcEnemyAttack(Player);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(dolphin);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - What up" << endl;
cout << "2 - ARF ARF ARF" << endl;
cout << "3 - Yo u looking good today O)O" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Please stop talking to me" << endl;
}
else if(talking == "2") {
delay();
cout << "Yea theres something wrong with you" << endl;
}
else if(talking == "3") {
delay();
cout << "Thanks man <3" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
if(Player.getHealth() == 0) {
	cout << "lol u lost in a text based game" << endl;
	return 0;
}
}

delay();
cout << "*dying* You better watch out for Edmund…. *cough* *dead*" << endl;
delay();
cout << "*Receive Fin Sword and Fin Armor :O*" << endl;
Player2.setArmor(20);
Player2.setWeapon(20);
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
Fire crab("Fire Crab",100,15,35,30,"Fire");

while(crab.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player2.calcAttack(crab);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Aren't crabs supposed to be a water type??????" << endl;
cout << "2 - Man I only have one more day to work on this project" << endl;
cout << "3 - I LOVE THE TASTE OF CRAB YYEYEYEYEYEYE" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Not this one, ugly little one :P" << endl;
}
else if(talking == "2") {
delay();
cout << "Yea, the author of this story procrastinated heavy" << endl;
}
else if(talking == "3") {
delay();
cout << "O_O WTF relax man its just a game" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
cout << "==============================================================" << endl;
if(crab.getHealth() != 0) {
crab.calcEnemyAttack(Player2);
delay();
}
if(Player2.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}
cout << "*Received Crab Armor and Swordᵔᴥᵔ)*" << endl;
Player3.setArmor(45);
Player3.setWeapon(30);
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
Water ed("Edmund the Whale",100,15,10,50,"Water");
while(ed.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
ed.calcEnemyAttack(Player);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(ed);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Are you some sort of killer whale?! O_O" << endl;
cout << "2 - FIGHT ME ON THE LAND YOU COWARD" << endl;
cout << "3 - *Drops 20,000 BNB on the ground*" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "AHAHAHAHAH good one loser" << endl;
}
else if(talking == "2") {
delay();
cout << "SHOULDVE BROUGHT UR MONA F2P SCUM!" << endl;
}
else if(talking == "3") {
delay();
cout << "AHHHHHH WHAT??? IVE BEEN OUTWHALED?????" << endl;
ed.setHealth(0);
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
if(Player.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
ans = "";
}

}
if(ans == "2") {
delay();
cout << "“WTF IS WRONG WITH YOU D:”" << endl;
Water ed("Edmund the Whale",100,15,10,50,"Water");
while(ed.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(ed);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Are you some sort of killer whale?! O_O" << endl;
cout << "2 - FIGHT ME ON THE LAND YOU COWARD" << endl;
cout << "3 - *Drops 20,000 BNB on the ground*" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "AHAHAHAHAH good one loser" << endl;
}
else if(talking == "2") {
delay();
cout << "SHOULDVE BROUGHT UR MONA F2P SCUM!" << endl;
}
else if(talking == "3") {
delay();
cout << "AHHHHHH WHAT??? IVE BEEN OUTWHALED?????" << endl;
ed.setHealth(0);
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
if(ed.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
ed.calcEnemyAttack(Player);
}
if(Player.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}

}
delay();
cout << "gg bro" << endl;
delay();
cout << "*Received Whale Tooth Sword and Armor ＼( °□° )／*" << endl;
delay();
cout << "(Back to the safety of the village (⌐■_■) )" << endl;
delay();
first = true;
Player2.setArmor(35);
Player2.setWeapon(35);
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
cout << "(The mother pulls out the newly created Grass Grass Gun and Helmet 2 for 1 combo O_O" << endl;
delay();
Grass motor("Mamacycle",69,18.5,15,15,"Grass");

if(first == true) {

while(motor.getHealth() != 0) {
if(Player3.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
motor.calcEnemyAttack(Player3);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player3.calcAttack(motor);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - WTF is your problem lady???" << endl;
cout << "2 - Can we all just relax and talk this out?" << endl;
cout << "3 - FUCK YOU AND YA KIDDO" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "HOW DARE YOU, TO MY PRECIOUS SON?? NO SHOT" << endl;
}
else if(talking == "2") {
delay();
cout << "i mean i guess we can talk for a sec, what is it :S" << endl;
cout << "1 - I understand family is important madam, however I wish no harm on your son." <<endl;
cout << "2 - You look beautiful today, I dont want to fuck you up." << endl;
cout << "3 - Nah fuck words" << endl;
cin >> ans;
delay();
if(ans == "1") {

cout << "Yea I don't believe you, take this shit pussy." << endl;
delay();
}
if(ans == "2") {
cout << "FLATTERY WONT GET U ANYWHERE TWERP!" << endl;
delay();
}
if(ans == "3") {
cout << "aight bet" << endl;
delay();
}
}
else if(talking == "3") {
delay();
cout << "yea u dead bruh" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
}

}
else {
if(Player3.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}

while(motor.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
motor.calcEnemyAttack(Player);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(motor);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - WTF is your problem lady???" << endl;
cout << "2 - Can we all just relax and talk this out?" << endl;
cout << "3 - FUCK YOU AND YA KIDDO" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "HOW DARE YOU, TO MY PRECIOUS SON?? NO SHOT" << endl;
}
else if(talking == "2") {
delay();
cout << "i mean i guess we can talk for a sec, what is it :S" << endl;
cout << "1 - I understand family is important madam, however I wish no harm on your son."<<endl;
cout << "2 - You look beautiful today, I dont want to fuck you up." << endl;
cout << "3 - Nah fuck words" << endl;
cin >> ans;
delay();
if(ans == "1") {

cout << "Yea I don't believe you, take this shit pussy." << endl;
delay();
}
if(ans == "2") {
cout << "FLATTERY WONT GET U ANYWHERE TWERP!" << endl;
delay();
}
if(ans == "3") {
cout << "aight bet" << endl;
delay();
}

}
 if(talking == "3") {
delay();
cout << "yea u dead bruh" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
}
}
bool demonKilled = false;
cout << "*Received Grass Grass Gun and Helmet* ヽ༼ຈل͜ຈ༽ﾉ*" << endl;
Player.setArmor(30);
Player.setWeapon(30);
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
cout << "oooOOooooooOOOO its me, the SLEEPING WATER DEMON ಠ_ಠ" << endl;
delay();
cout << "1 - nah fuck this *wake up*" << endl;
cout << "2 -  WOOHOO FIGHT FIGHT FIGHT" << endl;
cin >> ans;
if(ans == "1") {
cout << "HAHAHAHA SLEEP FOREVER TWERP" << endl;
delay();
Water demon("Sleep Demon",140,25,25,25,"Water");
while(demon.getHealth() != 0) {
if(Player.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(demon);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - O_O why r u here?" << endl;
cout << "2 - AHAHAHAHA YES TIME TO KILL KILL KILL" << endl;
cout << "3 - Am i dreaming right now?" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "You've been a very bad boy ;)" << user << "!" << endl;
}
else if(talking == "2") {
delay();
cout << "Yea nvm fuck this im gone" << endl;
demon.setHealth(0);
delay();
}
else if(talking == "3") {
delay();
cout << "Yea you are :)" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
cout << "==============================================================" << endl;
if(demon.getHealth() != 0) {
demon.calcEnemyAttack(Player2);
delay();
}
if(demon.getHealth() == 0) {
demonKilled = true;
}
}
}
else{
cout << "Nah u the real demon O_O fuck this" << endl;
}
if(demonKilled == true) {
cout << "*Received Ghost Knife and Armor*" << endl;
Player2.setArmor(35);
Player2.setWeapon(35);
Player2.setHealth(100);
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
Fire Sarokar("Sarokar the Car",125,30,20,20,"Fire");
while(Sarokar.getHealth() != 0) {
if(Player2.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
Sarokar.calcEnemyAttack(Player2);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player2.calcAttack(Sarokar);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Kachow" << endl;
cout << "2 - Do you like hot dogs or hamburgers more" << endl;
cout << "3 - Im out of content to talk about" << endl;
cin >> talking;
delay();
if(talking == "1") {
delay();
cout << "..........please stop" << endl;
}
else if(talking == "2") {
delay();
cout << "Hamburgers definetely" << endl;
}
else if(talking == "3") {
delay();
cout << "Same here man" << endl;
}
else {
cout << "????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}

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
Water dolphin("Fierce Dolphin",75,10,20,20,"Water");

while(dolphin.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
dolphin.calcEnemyAttack(Player);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(dolphin);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - What up" << endl;
cout << "2 - ARF ARF ARF" << endl;
cout << "3 - Yo u looking good today O)O" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Please stop talking to me" << endl;
}
else if(talking == "2") {
delay();
cout << "Yea theres something wrong with you" << endl;
}
else if(talking == "3") {
delay();
cout << "Thanks man <3" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
if(Player.getHealth() == 0) {
	cout << "lol u lost in a text based game" << endl;
	return 0;
}
}

delay();
cout << "*dying* You better watch out for Edmund…. *cough* *dead*" << endl;
delay();
cout << "*Receive Fin Sword and Fin Armor :O*" << endl;
Player2.setArmor(20);
Player2.setWeapon(20);
delay();
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
Fire crab("Fire Crab",100,15,35,30,"Fire");

while(crab.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player2.calcAttack(crab);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Aren't crabs supposed to be a water type??????" << endl;
cout << "2 - Man I only have one more day to work on this project" << endl;
cout << "3 - I LOVE THE TASTE OF CRAB YYEYEYEYEYEYE" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Not this one, ugly little one :P" << endl;
}
else if(talking == "2") {
delay();
cout << "Yea, the author of this story procrastinated heavy" << endl;
}
else if(talking == "3") {
delay();
cout << "O_O WTF relax man its just a game" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
cout << "==============================================================" << endl;
if(crab.getHealth() != 0) {
crab.calcEnemyAttack(Player2);
delay();
}
if(Player2.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}
cout << "*Received Crab Armor and Swordᵔᴥᵔ)*" << endl;
Player3.setArmor(45);
Player3.setWeapon(30);
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
Water ed("Edmund the Whale",100,15,10,50,"Water");
while(ed.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
ed.calcEnemyAttack(Player);
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(ed);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Are you some sort of killer whale?! O_O" << endl;
cout << "2 - FIGHT ME ON THE LAND YOU COWARD" << endl;
cout << "3 - *Drops 20,000 BNB on the ground*" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "AHAHAHAHAH good one loser" << endl;
}
else if(talking == "2") {
delay();
cout << "SHOULDVE BROUGHT UR MONA F2P SCUM!" << endl;
}

else if(talking == "3") {
delay();
cout << "AHHHHHH WHAT??? IVE BEEN OUTWHALED?????" << endl;
ed.setHealth(0);
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
if(Player.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
ans = "";
}

}
if(ans == "2") {
delay();
cout << "“WTF IS WRONG WITH YOU D:”" << endl;
Water ed("Edmund the Whale",100,15,10,50,"Water");
while(ed.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(ed);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Are you some sort of killer whale?! O_O" << endl;
cout << "2 - FIGHT ME ON THE LAND YOU COWARD" << endl;
cout << "3 - *Drops 20,000 BNB on the ground*" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "AHAHAHAHAH good one loser" << endl;
}
else if(talking == "2") {
delay();
cout << "SHOULDVE BROUGHT UR MONA F2P SCUM!" << endl;
}
else if(talking == "3") {
delay();
cout << "AHHHHHH WHAT??? IVE BEEN OUTWHALED?????" << endl;
ed.setHealth(0);
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
if(ed.getHealth() != 0) {
cout << "==============================================================" << endl;
cout << "Enemy first O_O" << endl;
ed.calcEnemyAttack(Player);
}
if(Player.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}

}
delay();
cout << "gg bro" << endl;
delay();
cout << "*Received Whale Tooth Sword and Armor ＼( °□° )／*" << endl;
delay();

first = true;

cout << "(Back to the safety of the village (⌐■_■) )" << endl;
delay();
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
Fire bandit("Bandit",100,30,25,20,"Fire");
while(bandit.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player2.calcAttack(bandit);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Why is a useless npc like you at the end of the game" << endl;
cout << "2 - Why are you attacking me" << endl;
cout << "3 - I'm sad" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Shane wanted to add another fight" << endl;
}
else if(talking == "2") {
delay();
cout << "Shane wanted to add another fight" << endl;
}
else if(talking == "3") {
delay();
cout << "Me too man, me too" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
cout << "==============================================================" << endl;
if(bandit.getHealth() != 0) {
bandit.calcEnemyAttack(Player2);
delay();
}
if(Player2.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}
longDelay();
delay();
cout << "(Regardless, "<< user << " is near the demon lords castle)" << endl;
cout << "1 - Oh boy! I finally made it! Lets walk through the front door :) :) " << endl;
cout << "2 - I’m sleepy bruh *fall asleep standing up?*"<< user <<"!" << endl;
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
Water appren("Demon Lords Apprentice",135,30,30,20,"Water");
while(appren.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player.calcAttack(appren);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - ....You come here often?" << endl;
cout << "2 - Man i gotta take cs111 next quarter too...." << endl;
cout << "3 - this project is killing my soul but i like making this game" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Yes" << endl;
}
else if(talking == "2") {
delay();
cout << "Brutal, it least its ur only class at that session" << endl;
}
else if(talking == "3") {
delay();
cout << "Yea NPCs talk like me gets a bit tiresome" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
cout << "==============================================================" << endl;
if(appren.getHealth() != 0) {
appren.calcEnemyAttack(Player);
delay();
}
if(Player.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}


cout << "Aye good shit u got my ass" << endl;
delay();
cout << ":3" << endl;
delay();
cout << "gg my dads chilling in that there castle gl" << endl;
delay();
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
Grass demonlord("Shane the Demon Lord",145,35,35,20,"Grass");
while(demonlord.getHealth() != 0) {
delay();
cout << "==============================================================" << endl;
cout << "1 - Attack" << endl;
cout << "2 - Talk" << endl;
cout << "3 - Run" << endl;
cin >> ans;
if(ans == "1") {
cout << "==============================================================" << endl;
Player3.calcAttack(demonlord);
delay();
}
else if(ans == "2") {
string talking;
delay();
cout << "1 - Hello" << endl;
cout << "2 - Hi" << endl;
cout << "3 - Yo" << endl;
cin >> talking;
delay();

if(talking == "1") {
delay();
cout << "Stop talking to me loser" << endl;
}
else if(talking == "2") {
delay();
cout << "Stop talking to me loser" << endl;
}
else if(talking == "3") {
delay();
cout << "Yo" << endl;
}
else {
cout << "?????????????" << endl;
}
}
else if(ans == "3") {
cout << "Nah you can't run on this one" << endl;
}
cout << "==============================================================" << endl;
if(demonlord.getHealth() != 0) {
demonlord.calcEnemyAttack(Player3);
delay();
}
if(Player3.getHealth() == 0) {
        cout << "lol u lost in a text based game" << endl;
        return 0;
}
}

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

}
if(ans == "3" && first == false && second == false) {
cout << "Just reset bruh" << endl;
}



return 0;
}





























