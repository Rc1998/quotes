#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    srand( time(0) );

    int n = rand() % 19;

    const char *a[19];
    a[0] = "\"Whenever you do a thing, act as if all the world were watching.\"\n\t- T. Jefferson";
    a[1] = "\"99% of failures come from people who make excuses.\"\n\t- G. Washington";
    a[2] = "\"Leave nothing for tomorrow which can be done today.\"\n\t- A. Lincoln";
    a[3] = "\"We hold these truths to be self-evident, that all men are created equal,\nthat they are endowed, by their Creator, with certain unalienable Rights,\nthat among these are Life, Liberty, and the pursuit of Happiness.\"\n\t - Thomas Jefferson";
    a[4] = "\"The U. S. Constitution doesn't guarantee happiness, only the pursuit of it. You have to catch up with it yourself.\"\n\t - Benjamin Franklin ";
    a[5] = "\"Those who stand for nothing fall for everything.\"\n\t- A. Hamilton";
    a[6] = "\"The art of reading is to skip judiciously.\"\n\t- A. Hamilton";
    a[7] = "\"It is better to be alone than in bad company.\"\n\t- G. Washington";
    a[8] = "\"The harder the conflict, the greater the triumph.\"\n\t- G. Washington";
    a[9] = "\"Liberty, once lost, is lost forever.\"\n\t- J. Adams";
    a[10] = "\"If a man has not discovered something that he will die for, he isn't fit to live.\"\n\t- MLK";
    a[11] = "\"I read my eyes out and can't read half enough...the more one reads the more one sees we have to read.\"\n\t- J. Adams";
    a[12] = "\"Ask not what your country can do for you; ask what you can do for your country.\"\n\t- JFK";
    a[13] = "\"Those who make peaceful revolution impossible will make violent revolution inevitable.\"\n\t- JFK";
    a[14] = "\"Three may keep a secret, if two of them are dead.\"\n\t- B. Franklin";
    a[15] = "\"You may delay, but time will not.\"\n\t- B. Franklin";
    a[16] = "\"Never ruin an apology with an excuse.\"\n\t- B. Franklin";
    a[17] = "\"They who can give up essential liberty to obtain a little temporary safety deserve neither liberty nor safety.\"\n\t- B. Franklin";
    a[18] = "\"Give me liberty, or give me death!\"\n\t- P. Henry";

    puts(a[n]);

    return 0;
}