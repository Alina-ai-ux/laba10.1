#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Функція для введення рядка
void CreateTextFile(char* fname)
{
    ofstream fout(fname);
    char ch;
    string s;
    do {
        cin.get();
        cin.sync();
        cout << "enter line:"; getline(cin, s);
        fout << s << endl;
        cout << "continue? (y/n)";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');     cout << endl;
    cout << "s1.length=" <<s.length() <<  "\n";
    fout.close();
}
// --------------------------------------------
// Функція для виведення рядка
void PrintTextFile(char* fname)
{
    ifstream fin(fname);
    string s;
 
    while (getline(fin, s))
    {
        cout << s << endl;
        
    }

    cout << endl;
    fin.close();
}
// --------------------------------------------
// Функція для підрахунку комбінацій “abc”
int K_abc(char* fname)
{
    ifstream fin(fname);
    string s;// = "abc123abc456abc";
    unsigned i;
    int k = 0;
    while (getline(fin,s))
    {
    for (i = 0; i <= s.length() - 3; i++)
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') k++;
   
    }
    return k;
}
// Основна функція
int main()
{
    char fname[100];

    cout << "enter name file1:   "; cin >> fname;
   
   // CreateTextFile(fname);
   
    PrintTextFile(fname);
    cout << "k(abc) = " << K_abc(fname) <<endl;
    return 0;
}
