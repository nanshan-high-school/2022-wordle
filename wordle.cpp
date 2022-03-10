#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    vector<string> words {
        "apple",
        "pizza",
        "never",
        "gonna",
        "waltz",
        "xerox",
        "xylem",
        "noone",
        // TODO: 請協助 PR 以擴充題庫
    };

    srand(time(NULL));

    int wordCount = words.size();
    int questionIndex = rand() % wordCount;

    cout << "本次題目：" << words[questionIndex];
}
