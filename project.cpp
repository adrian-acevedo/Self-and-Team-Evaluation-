/*
Team name: Turings
Members:  Adrian Acevedo, Moises Santiago, Youssef Koreatam
*/
#include <iostream>
#include <string>
using namespace std;

// function prototypes
string keyGen(string, string);
string txtUpr(string);
void encrypt(string, string);
void decrypt(string, string);

int main(){
    int choice;
    cout << "Welcome to the Vignere Cryptography program!" << endl;
    cout << "Would you like to encrypt or decrypt the text?" << endl << "1) Encrypt" << endl << "2) Decrypt";
    cout << endl << "Enter your choice: ";
    cin >> choice;

    string text;
    cout << "Please enter the text: ";
    cin >> text;

    string key;
    cout << "Please enter the key: ";
    cin >> key;

    string newKey = keyGen(text, key);
    string newTxt = txtUpr(text);
    if (choice == 1)
        encrypt(newTxt, newKey);
    else if (choice == 2)
        decrypt(newTxt, newKey);
    
    return 0;
}

// Generates key scalable to the text size and convert it to uppercase
string keyGen(string txt, string key){
    string newKey;
    for (int i = 0; i < txt.length(); i++)
        newKey += toupper(key[i % key.length()]);
    return newKey;
}

// Converts text to uppercase to unite the case of the text and key
string txtUpr(string txt){
    string newTxt;
    for (int i = 0; i < txt.length(); i++)
        newTxt += toupper(txt[i]);
    return newTxt;
}

// encrypts and outputs the encrypted text
void encrypt(string txt, string key){
    cout << txt << " was encrypted to ";
    string encrypted;
    for (int i = 0; i < txt.length(); i++){
        char num = (txt[i] + key[i]) % 26;
        encrypted += num + 65;
    }
    cout << encrypted << endl;
}

// decrypts and outputs the decrypted text
void decrypt(string txt, string key){
    cout << txt << " was decrypted to ";
    string decrypted;
    for (int i = 0; i < txt.length(); i++) {
        char num = (txt[i] - key[i] + 26) % 26;
        decrypted += num + 65;
    }
    cout << decrypted << endl;
}
