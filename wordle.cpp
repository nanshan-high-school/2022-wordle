#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int indexOf(char, string);

int main() {
    vector<string> words {
        "apple",
        "pizza",
        "never",
        "gonna",
        "mourn",
        "nasty",
        "rupee",
        "choke",
        "chant",
        "spill",
        "vivid",
        "bloke",
        "trove",
        "thorn",
        "other",
        "tacit",
        "swill",
        "dodge",
        "shake",
        "caulk",
        "aroma",
        "cynic",
        "robin",
        "ultra",
        "ulcer",
        "pause",
        "humor",
        "frame",
        "elder",
        "skill",
        "aloft",
        "pleat",
        "shard",
        "moist",
        "those",
        "light",
        "wrung",
        "could",
        "perky",
        "mount",
        "whack",
        "sugar",
        "knoll",
        "crimp",
        "wince",
        "prick",
        "robot",
        "point",
        "proxy",
        "shire",
        "solar",
        "panic",
        "tangy",
        "abbey",
        "favor",
        "drink",
        "query",
        "gorge",
        "crank",
        "slump",
        "banal",
        "tiger",
        "siege",
        "truss",
        "boost",
        "rebus",
        // TODO: 請協助 PR 以擴充題庫
    };

    srand(time(NULL));

    int wordCount = words.size();
    int questionIndex = rand() % wordCount;
    string answer = words[questionIndex];
    short guessCount = 0;
  
    printf("\x1b[46m\x1b[37m __      __                   __   ___             \n/\\ \\  __/\\ \\                 /\\ \\ /\\_ \\            \n\\ \\ \\/\\ \\ \\ \\    ___   _ __  \\_\\ \\\\//\\ \\      __   \n \\ \\ \\ \\ \\ \\ \\  / __`\\/\\`'__\\/'_` \\ \\ \\ \\   /'__`\\ \n  \\ \\ \\_/ \\_\\ \\/\\ \\L\\ \\ \\ \\//\\ \\L\\ \\ \\_\\ \\_/\\  __/ \n   \\ `\\___x___/\\ \\____/\\ \\_\\\\ \\___,_\\/\\____\\ \\____\\\n    '\\/__//__/  \\/___/  \\/_/ \\/__,_ /\\/____/\\/____/\n                                                   \n                                                   \n\x1b[0m");
  
    while(true) {
        printf("\x1b[0m\n");

        if(guessCount < 6) {
          guessCount++;
        } else {
          printf("\n\x1b[1;31;42mNo more try\n\x1b[0m");
          break;
        }

        string input;
        printf("Answer:");
        cin >> input;

        if(answer.size() != input.size()) {
          printf("Input length must be %d long\n", (int)answer.size());
          continue;
        }

        if(input == "") {
          printf("Say Something\n");
          continue;
        }

        for(int i = 0; i < input.size(); i++) {
          if(answer[i] == input[i]) {
            printf("\x1b[32m%c", input[i]);  //green
            } else {
            if(indexOf(input[i], answer) != -1) {
              printf("\x1b[33m%c", input[i]);  // yellow
            } else {
              printf("\x1b[37m%c", input[i]);  // white
            }
        }
    }

    if(answer == input) {
      printf("\n\x1b[1;31;42mYou Win!!!\n\x1b[0m");  // red foreground with green background and reset the color to default
      break;
    }
}

int indexOf(char target, string src) {
  int index = -1;
  for(int i = 0; i < src.size(); i++) {
    if(src[i] == target) {
      index = i;
    }
  }

  return index;
}
