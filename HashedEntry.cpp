//* @file HashedEntry.cpp */
#include "Entry.cpp"
#include "HashedEntry.h"

HashedEntry::HashedEntry(){
	nextPtr=NULL;
}

HashedEntry::~HashedEntry(){
	nextPtr=NULL;
	item="";
	searchKey=0;
}

HashedEntry::HashedEntry(KeyType &Key, ItemType &newEntry){
	nextPtr=NULL;
	searchKey=Key;
	item=newEntry;
}

HashedEntry::HashedEntry(KeyType &Key, ItemType &newEntry, HashedEntry *nextEntryPtr){
	nextPtr=nextEntryPtr;
	searchKey=Key;
	item=newEntry;
}

void HashedEntry::setNext(HashedEntry *nextEntryPtr){
	nextPtr=nextEntryPtr;
}

HashedEntry *HashedEntry::getNext() const{
	return nextPtr;
}