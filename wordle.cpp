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

    cout << "本次題目：" << words[questionIndex];
}
