#include <iostream>
#include <string>
#include "TrieTree.h"

using namespace std;

TrieType t;
char newelem[10];

void insert(TrieType& trie)
{
    Key word;
    cout << "Enter the word you would like to insert into trie: " << endl;
    cin >> word;

    EntryType* newEntry = new EntryType(word);

    trie.InsertTrie(word, newEntry);
    cout << "Word " << word << " has been inserted into trie!" << endl;
}

void getAllWords(TrieType& trie)
{
    cout << "All words in trie are: " << endl;

    EntryType* newEntry = new EntryType;
    //newEntry->PrintWord();
    trie.PrintTrie();
}

int main()
{
    int i;

    do
    {
        cout << "\nMENU\n-------------------- " << endl;
        cout << "1. Insert into a Trie" << endl;
        cout << "2. Search a Trie" << endl;
        cout << "3. Print Words Alphabetically" << endl;
        cout << "4. Exit" << endl;
        cout << "Please enter an integer value: ";
        cin >> i;
        switch (i)
        {
        case 1:
            insert(t);
            break;
        case 2:
            cout << "Enter string to search trie:";
            cin >> newelem;
            if (t.TrieSearch(newelem) != NULL)
            {
                cout << "String " << newelem << " is member of trie!" << endl;
            }
            else
            {
                cout << "String " << newelem << " is NOT member of trie!" << endl;
            }
            break;
        case 3:
            cout << "TO BE DONE!!!" << endl;
            t.PrintTrie();
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Wrong input" << endl;
            break;
        }

    } while (i != 4);
    return 0;
}