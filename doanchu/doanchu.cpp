#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Chức năng kiểm tra xem chữ cái đoán được có trong từ hay không
bool isLetterInWord(char letter, const string& word) {
    for (char c : word) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

// Chức năng hiển thị trạng thái hiện tại của từ được đoán
void displayWord(const string& guessedWord) {
    for (char c : guessedWord) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    vector<string> words = {"apple", "banana", "orange", "strawberry", "kiwi"};
    srand(time(0));
    string wordToGuess = words[rand() % words.size()];
    string guessedWord(wordToGuess.length(), '_');
    int attempts = 6;

    cout << "Welcome to the Guess the Word game!\n";
    cout << "Try to guess the word.\n";
    displayWord(guessedWord);

    while (attempts > 0 && guessedWord != wordToGuess) {
        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        if (isLetterInWord(guess, wordToGuess)) {
            cout << "Correct guess!\n";
            for (int i = 0; i < wordToGuess.length(); ++i) {
                if (wordToGuess[i] == guess) {
                    guessedWord[i] = guess;
                }
            }
        } else {
            cout << "Incorrect guess. Try again.\n";
            --attempts;
            cout << "Attempts left: " << attempts << endl;
        }

        displayWord(guessedWord);
    }

    if (guessedWord == wordToGuess) {
        cout << "Congratulations! You guessed the word: " << wordToGuess << endl;
    } else {
        cout << "Sorry, you ran out of attempts. The word was: " << wordToGuess << endl;
    }

    return 0;
}
