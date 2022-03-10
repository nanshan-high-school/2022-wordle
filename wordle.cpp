#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

int main() {
    int mode;
    goto menu;
    
    menu:{
    	system("cls");
        cout << "1. Master level" << endl;
        cout << "2. common level" << endl;
        cout << "3. sweardle mode..." << endl;
        cout << "4. quit this trash game" << endl;
        cout << "type ur choice" << endl;
        cin >> mode;
    };
    if(mode == 1){
        goto master;
    }else if(mode == 2){
        goto commonmode;
    }else if(mode == 3){
        goto rule1;
    }else if(mode == 4){
    	cout << "we miss u :(";
    	return 0;
	}
	
    commonmode:{
    	int gae;
    	cout << "1.Skip" << endl;
    	cout << "2.read my lovely rule" << endl;
    	cin >> gae;
    	if(gae == 1){
    		goto common;
		}else if(gae == 2){
			goto rule;
		}
    };
    sweardlemode:{
        int gae1;
    	cout << "1.Skip" << endl;
    	cout << "2.read my lovely rule" << endl;
    	cin >> gae1;
    	if(gae1 == 1){
    		goto sweardle;
		}else if(gae1 == 2){
			goto rule1;
		}
    };
    rule : {
        cout << "So here is some description..." << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "this is pretty e z level" << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "all the word in this mode will be 5 letters" << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "u have only 6 rounds to guess the word" << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "wish luck be with you" << endl;
        goto common;
    };
    rule1 : {
        cout << "So here is some description..." << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "this is filled with trash word level" << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "the length of all the word will be told at the beginning" << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "u have only 6 rounds to guess the word" << endl;
        this_thread::sleep_for(std::chrono::seconds(3));
        cout << "wish luck be with you" << endl;
        goto sweardle;
    };
	common:{
        vector<string> dic{
        "click",
        "block",
        "apple",
        "swear",
        "power",
        "shell",
        "table",
        "black",
        "blown",
        "brown",
        "white",
        "sleep",
        "false",
        "check",
        "guess",
        "enter",
        "gmail",
        "round",
        "party",
        "level",
        "night",
        "bully",
        "class",
        "float",
        "stand",
        "under",
        "pants",
        "count",
        "sword",
        "knife",
        "spoon",
        "thank",
        "steak",
        "shift",
        "space",
        "place",
        "pizza",
        "pasta",
        "sugar",
        "toast",
        "bread",
        "break",
        "broke",
    };
        int dicall = dic.size();
        srand(time(0));
        int nums = 0 + rand()%dicall;

        string answer = dic[nums] , guess;

        for(int x = 0 ; x < 6 ; x++){
            bool check[5] = {false};
            int Acounter = 0 , Bcounter = 0;
            this_thread::sleep_for(std::chrono::seconds(3)); 
            cout << x + 1 << " " << "Round" << endl;
            cin >> guess;
            if(guess.size() > 5){
                cout << "u enter too much letters!";
                return 0;
            }
            for(int i = 0 ; i < 5 ; i++){ 
                if(!check[i] && guess[i] == answer[i] ){
                    Acounter++;
                    check[i] = true;
                }
            }
            for(int i = 0 ; i < 5 ; i++){
                for(int j = 0 ; j < 5 ; j++){
                    if(!check[i] && !check[j] && answer[j] == guess[i]){ 
                        Bcounter++;
                    }
                }
            }
            if(Acounter == 5){
                cout << "correct!" << endl;
                goto menu;
            }else{
                cout << Acounter << "A" << " " << Bcounter << "B" << endl;
            }
        }
        goto menu;
    };
    master:{
		cout << "gae";
		goto menu;
    };	
    sweardle:{
      vector<string> swear{
        "fuck",
        "shit",
        "nuts",
        "bitch",
    };
    	int swearall = swear.size();
        srand(time(0));
        int nums = 0 + rand()%swearall;

        string answer1 = swear[nums] , guess1;
        cout << answer1.size();

        for(int x = 0 ; x < 6 ; x++){
            bool check1[5] = {false};
            int Acounter1 = 0 , Bcounter1 = 0;
            this_thread::sleep_for(std::chrono::seconds(3)); 
            cout << x + 1 << " " << "Round" << endl;
            cin >> guess1;
            if(guess1.size() > answer1.size()){
                cout << "u enter too much letters!";
                return 0;
            }
            for(int i = 0 ; i < 5 ; i++){ 
                if(!check1[i] && guess1[i] == answer1[i] ){
                    Acounter1++;
                    check1[i] = true;
                }
            }
            for(int i = 0 ; i < 5 ; i++){
                for(int j = 0 ; j < 5 ; j++){
                    if(!check1[i] && !check1[j] && answer1[j] == guess1[i]){ 
                        Bcounter1++;
                    }
                }
            }
            if(Acounter1 == 5){
                cout << "correct!" << endl;
                goto menu;
            }else{
                cout << Acounter1 << "A" << " " << Bcounter1 << "B" << endl;
            }
        }
        goto menu;
	};
}
