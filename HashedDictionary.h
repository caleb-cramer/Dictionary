//* @file HashedDictionary.h */
#ifndef _HASHED_DICTIONARY
#define _HASHED_DICTIONARY
#include "HashedEntry.h"

class HashedDictionary
{
private:
  HashedEntry * hashTable[101]; //effectively an array which holds pointers   
  int itemCount;//# of items/entries in the table
  int hashTableSize;// # of occupied indexes
  static const int DEFAULT_SIZE = 101; //size of array/table
  int hashFunc (const KeyType & Key) const; // modulo: searchKey%DEFAULT_SIZE;

public:
  //hd constructor
  HashedDictionary (); 

  //hd destructor
  ~ HashedDictionary (); 

  //checks to see if itemCount==0. returns true if empty
  bool isEmpty () const;

  //checks number of items. returns an int 
  int getNumberOfItems () const; 

  //adds a new node to key%101 in the list. the node holds the key as well as the name of the person.
  //will update itemCount and hashTableSize.
  void add (KeyType &Key, ItemType &newItem); 

  //removes a node with the specified key. returns true if found and removed
  bool remove (const KeyType & Key);

  //empties the entire dictionary
  void clear ();

  //finds node with the same key and returns its item
  ItemType search (const KeyType & Key) const;

  //checks to see if the list contains a certain key. returns true if found.
  bool contains (const KeyType & Key) const;

};  // end HashedDictionary

#endif