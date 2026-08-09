#include <iostream>
using namespace std;

class CricketPlayer {
    string playerName;
    int matchesPlayed;
    int totalRuns;

public:

    // 1. Accept player details
    void input() {
        cout << "Enter player name: ";
        cin >> playerName;

        cout << "Enter matches played: ";
        cin >> matchesPlayed;

        cout << "Enter total runs: ";
        cin >> totalRuns;
    }

    // 2. Calculate batting average
    float battingAverage() {
        return (float)totalRuns / matchesPlayed;
    }

    // 3. Display complete player report
    void display() {
        float average = battingAverage();

        cout << "\n----- Player Report -----" << endl;
        cout << "Player Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Batting Average: " << average << endl;

        if (average >= 50) {
            cout << "Performance: Excellent" << endl;
        }
        else if (average >= 35) {
            cout << "Performance: Good" << endl;
        }
        else if (average >= 20) {
            cout << "Performance: Average" << endl;
        }
        else {
            cout << "Performance: Poor" << endl;
        }
    }
};

int main() {
    CricketPlayer player;

    player.input();
    player.display();

    return 0;
}