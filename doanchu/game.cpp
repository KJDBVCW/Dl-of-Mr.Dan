#include <iostream>
using namespace std;
#include <fcntl.h>


#include "mylib.h"
int main(){
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);

    string dstu[1000];
    int N;
    

    srand(time(0)); // Khởi tạo seed cho hàm ngẫu nhiên
    vector<string> words;

    NapTuDien(words, "data.txt"); // Gọi hàm NapTuDien để lấy danh sách từ

    string wordToGuess = words[rand() % words.size()]; // Lấy từ ngẫu nhiên từ danh sách
    string guessedWord(wordToGuess.length(), '_'); // Khởi tạo chuỗi guessedWord với dấu gạch dưới

    int attempts = 6; // Số lần thử

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

