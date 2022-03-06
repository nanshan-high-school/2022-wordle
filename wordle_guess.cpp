#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#define RESET "\033[0m"
#define YELLOW "\033[43m"
#define GREEN "\033[42m"

using namespace std;

int main() {
    cout << RESET;
    vector<string> words {
        "apple",
        "pizza",
        "never",
        "gonna",
        "given",
        "yours",
        "upper",
        "utter",
        "cloth",
        "plant",
        "grand",
        "clear",
        "clean",
        "spill",
        "skill",
        "still",
        "worth",
        "wound",
        "would",
        "above",
        "below",
        "treat",
        "snail",
        "truth",
        "birth",
        "brand",
        "asset",
        "guess",
        "slave",
        "snake",
        "proof",
        "prove"
        // TODO: 請協助 PR 以擴充題庫
    };

    srand(time(NULL));

    int wordCount = words.size();
    int questionIndex = rand() % wordCount;

    cout << "本次題目：" << words[questionIndex] << endl; // comment out this line if needed

    cout << "Start Guessing:" << endl;
    bool correct = 0;
    int guess = 0;
    string guessing;
    string ans = words[questionIndex];
    do {
        int color[5] = {0}; // 0 = white, 1 = yellow, 2 = green
        bool used[5] = {0};
        guess++;
        cin >> guessing;
        for (int i = 0; i < 5; i++) {
            if (guessing[i] == ans[i]) {
                color[i] = 2;
                used[i] = 1;
            }
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (guessing[i] == ans[j] && !used[j] && i != j && guessing[i] != ans[i]) {
                    color[i] = 1;
                    used[j] = 1;
                }
            }
        }
        for (int i = 0; i < 5; i++) {
            switch (color[i]) {
                case 0:
                cout << RESET << guessing[i];
                break;
                case 1:
                cout << YELLOW << guessing[i];
                break;
                case 2:
                cout << GREEN << guessing[i];
                break;
                default:
                break;
            }
            cout << RESET;
        }
        cout << endl;
        if (color[0] == 2 && color[1] == 2 && color[2] == 2 && color[3] == 2 && color[4] == 2) {
            correct = 1;
            break;
        }
    } while (guess < 6);
    if (correct) {
        cout << RESET << "WORDLE NSCSC " << guess << "/6" << endl;
    }
    else {
        cout << RESET << "WORDLE NSCSC X/6" << endl;
    }
}
