#pragma once
#include "TrieTreeEntry.h"
#pragma once

const int LETTERS = 26;
struct Trienode
{
	Trienode();
	Trienode* branch[LETTERS];
	EntryType* ref;
};
Trienode::Trienode()
{
	int ch;
	for (ch = 0; ch < LETTERS; ch++)
		branch[ch] = NULL;
	ref = NULL;
}