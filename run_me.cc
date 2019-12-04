#include "run_me.h"

using namespace theonlygamethatmatters;

#define red "\033[1;31m"
#define white "\033[0m\033[40m"
#define blue "\033[1;34m"
#define text "\033[1;30m\033[1;47m"
#define RED "\033[1;33m\033[1;41m"

int main() {
  cout << white << "The FooBar Coding Exam is a multistage arithmancy capacity test that progressively gets more difficult as it continues." << endl;
  X::sleep(3);
  cout << "The first competency round will begin in 3 seconds." << endl;
  X::sleep(1);
  cout << "3" << endl;
  X::sleep(1);
  cout << "2" << endl;
  X::sleep(1);
  cout << "1" << endl;
  X::sleep(1);
  cout << "Question 1." << endl;
  X::sleep(1);
  cout << "The best known classical factoring algorithm, the general number field sieve, has asymptotic runtime" << endl;
  cout << "A. O(exp[1.9 N^(1/3) (log N)^(2/3)])" << endl;
  cout << "B. O(exp[1.9 (log N)^(1/3) (log log N)^(2/3)])" << endl;
  cout << "C. O(N^(1.9 log N))" << endl;
  cout << "D. O(exp[1.9 N^(2/3) (log N)^(1/3)])" << endl;
  string ans = X::userin();
  X::sleep(1.5);
  cout << blue << "Welp, totally guessed on that one.  This is bad.  If you don't pass this exam, you don't know how you will face the dishonor on you and your cow." << endl;
  X::sleep(3);
  cout << "You take a deep breath before the second question..." << white << endl;
  X::sleep(2);
  cout << "Question 2." << endl;
  X::sleep(1);
  cout << "Which of the following statements about the programming language Chef is false?" << endl;
  cout << "A. The main principle of language design is: program recipes should not only generate valid output, but be easy to prepare and delicious." << endl;
  cout << "B. The state of the ingredient (liquid, dry or unspecified) defines whether it will be printed as a Unicode character (liquid) or as a number." << endl;
  cout << "C. Mixing bowls are stacks which store integer values." << endl;
  cout << "D. Baking dishes are arrays which store ingredients." << endl;
  ans = X::userin();
  X::sleep(1.5);
  cout << blue << "You don't understand why a question this esoteric came up, but your job (and your livelihood) depends on you acing this.  You think of your home.  You shed a single tear thinking about how you might never taste your mother's cookies again if you don't get your shit together." << white << endl;
  X::sleep(7);
  cout << "Question 3." << endl;
  X::sleep(1);
  cout << "N pirates are standing in a row.  They each have the same priorities: from highest to lowest, they want to live, profit, and kill the other pirates.  The 1st pirate declares how to distribute 100 gold coins, and all N pirates vote.  If half or more vote to kill the 1st pirate, the 1st pirate dies, the 2nd pirate becomes the new 1st pirate and proposes a new coin distribution, and voting commences again.  If less than half vote to kill the 1st pirate, the coins are distributed and no pirates die.  Write a function that takes in a number N, and outputs the optimal coin distribution the 1st pirate should propose." << endl;
  X::sleep(20);
  cout << blue << "You think you've heard this question before on a brain teaser forum, and you're not doing so hot on this exam.  You're pretty confident that if you were to look this up quickly, you'd boost your score and the company would be none the wiser." << endl;
  X::sleep(10);
  cout << red << "PRESS ENTER WITHIN 5 SECONDS TO USE A SEARCH ENGINE" << endl;
  ans = X::userin(5);
  if (ans == "") {
    cout << blue << "The rest of the problems are much like the first few: you are totally lost.  You crawl into bed, curl into a ball, and watch Netflix to try to forget the past few hours."  << endl;
    X::sleep(4);
    cout << "The following day, you receive an automated rejection email from the company.  Better luck next time!" << endl;
    cout << red << "THE END." << endl;
    return 0;
  }
  cout << blue << "You quickly find the forum page and read a solution someone put up online.  Huh, that was easier than you thought." << endl;
  X::sleep(5);
  cout << white << "Question 4." << endl;
  X::sleep(1);
  cout << blue << "Question 4 is something like coding an algorithm to schedule clothing batches inside washing and drying machines.  You vaguely remember this had something to do with dynamic programming.  Or is this a greedy algorithm problem?  You're stumped." << endl;
  X::sleep(10);
  cout << blue << "Your phone dings.  It's your friend Gracie." << endl;
  X::sleep(3);
  cout << text << "Gracie: What's up uwu" << endl;
  X::sleep(2);
  cout << text << "Gracie: I just finished my exam, want me to help?" << endl;
  X::sleep(2);
  cout << white << blue << "You start to sweat.  Earlier was just a discreet search --- you were just using the resources available to anyone with an internet connection.  This is a more serious form of cheating you're considering." << endl;
  X::sleep(8);
  cout << "But hey, you've already cheated on this exam; if you get the job in the end, what does it matter?" << endl;
  X::sleep(4);
  cout << RED << "RESPOND YES TO GRACIE IF YOU WANT HER HELP, ELSE RESPOND NO" << flush << text << endl;
  ans = X::userin();
  if (ans.find("N") != std::string::npos || ans.find("n") != std::string::npos) {
    cout << white << blue << "You decide it's not worth it.  Accepting help from Gracie would mean admitting to your friend that you're not the hotshot you pretended to be, and that you really don't deserve this job." << endl;
    X::sleep(5);
    cout << blue << "A few days later, you receive word from the company that you've passed the technical interview round.  You don't have time to celebrate though, as the in-person interview is coming up.  You feel uncomfortable with the dehumanizing process you must put yourself through, receiving rejections from robots for struggling on arbitrary problems which are both irrelevant to the job and extremely easy to cheat on.  But you submit yourself to your fate --- you need to prove your worth as to show you haven't wasted the past few years spending a lot of time and money..." << endl;
    X::sleep(20);
    cout << white << "THE END." << endl;
  } else {
    X::sleep(2);
    cout << white << blue << "You've never seen more bittersweet words than when your screen flashes after you've finished, that you've passed the online technical interview." << endl;
    X::sleep(3);
    cout << blue << "A few days later, you receive a confusing text from Gracie." << endl;
    X::sleep(2);
    cout << text << "Gracie: I'm sorry!!!1 I don't know what just happened" << endl;
    X::sleep(2);
    cout << white << blue << "The cause becomes apparent soon when you receive the first email from the company seemingly written by a human.  It says that they have evidence of you cheating and have proceeded to blacklist you at all companies that use that online technical exam service." << endl;
    X::sleep(6);
    cout << blue << "You feel your stomach sink into a bottomless pit, reading those words over and again, trying to understand.  You realize that Gracie sold you out." << endl;
    X::sleep(4);
    cout << blue << "You spend the next few days moping around aimlessly.  You feel that you won't last in the career path you've chosen, but also you don't have any other way of paying back the loads of student debt you took on to try to get jobs like these in the first place." << endl;
    X::sleep(8);
    cout << red << "THE END." << endl;
  }
}
