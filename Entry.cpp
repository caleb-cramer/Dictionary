//* @file Entry.cpp */
#include "Entry.h"


Entry::Entry(){
	item="";
	searchKey=0;
}

Entry::~Entry(){
	item="";
	searchKey=0;
}

Entry::Entry(KeyType &Key, ItemType &newEntry){
	searchKey=Key;
	item=newEntry;
}

void Entry::setKey(const KeyType &Key){
	searchKey=Key;
}

ItemType Entry::getItem() const{
	return item;
}

KeyType Entry::getKey() const{
	return searchKey;
}

void Entry::setItem (const ItemType &newEntry){
	item=newEntry;
}
