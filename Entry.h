//* @file Entry.h */
#ifndef _ENTRY
#define _ENTRY
#include<string>
using namespace std;

typedef string ItemType;
typedef int KeyType;

class Entry
{
protected:
  ItemType item; // string
  KeyType searchKey;// int
  void setKey (const KeyType &Key); //sets new key(int)
public:
	//2 constructors and a destructor
  Entry();
  Entry(KeyType &Key, ItemType &newEntry);
  ~Entry();

  //getter and setter functions for private data members
  ItemType getItem () const;
  KeyType getKey () const;\
  void setItem (const ItemType &newEntry);

};// end Entry

#endif