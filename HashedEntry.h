/** @file HashedEntry.h */
/** A class of entry objects for a hashing implementation of the ADT dictionary.*/
#ifndef _HASHED_ENTRY
#define _HASHED_ENTRY
#include "Entry.h"


class HashedEntry:public Entry
{
private:
  HashedEntry * nextPtr; //points to next node
public:
	//3 constructors each with different arguments and the destructor
  HashedEntry();
  HashedEntry(KeyType &Key, ItemType &newEntry);
  HashedEntry(KeyType &Key, ItemType &newEntry, HashedEntry *nextEntryPtr);
  ~HashedEntry();

  //public getter function to set next pointer
  void setNext(HashedEntry *nextEntryPtr);

  //returns nextPtr
  HashedEntry *getNext ()const;
};  // end HashedEntry

#endif