/** @file HashedDictionary.cpp */
#include "HashedEntry.h"
#include "HashedDictionary.h"
#include<iostream>
using namespace std;

HashedDictionary::HashedDictionary(){
	itemCount=0;
	hashTableSize=0;
}

HashedDictionary::~HashedDictionary(){
	int i=0;
	while (i<=hashTableSize){
		hashTable[i]=NULL;
		i++;
	}
	hashTableSize=0;
	itemCount=0;
}

int HashedDictionary::hashFunc(const KeyType & Key) const{
	return Key%DEFAULT_SIZE;
}

bool HashedDictionary::isEmpty()const{
	return itemCount==0;
}

int HashedDictionary::getNumberOfItems()const{
	return itemCount;
}

void HashedDictionary::add(KeyType &Key, ItemType &newItem){
	HashedEntry* ptr1= new HashedEntry(Key, newItem);
	int i = hashFunc(Key);
	if (hashTable[i]==NULL)
	{
		hashTable[i]=ptr1;
		hashTableSize+=1;
	}
	else{
		ptr1->setNext(hashTable[i]->getNext());
		hashTable[i]->setNext(ptr1);
	}
	itemCount+=1;
}

bool HashedDictionary::remove(const KeyType & Key){
	cout<<"made1";
	if (search(Key)==""){
		return false;
	}
	
	else{
		int i = hashFunc(Key);
		HashedEntry *curr=hashTable[i];
		HashedEntry *prev=hashTable[i];
		cout<<"made2";
		while(curr->getNext()!=NULL){
			if (curr->getKey()==Key){
				break;
			}
			else {curr=curr->getNext();}			
		}
		while(prev->getNext()!=curr){
			prev=prev->getNext();
		}

		if (hashTable[i]->getKey()==Key)
		{
			hashTable[i]=hashTable[i]->getNext();
			hashTableSize-=1;
			return true;
		}
		else{
			prev->setNext(curr->getNext());
			curr->setNext(NULL);
			curr->setItem("");
			return true;
		}
	}
}

void HashedDictionary::clear(){
	itemCount=0;
	hashTableSize=0;
	cout<<"made1";
	for(int i=0; i<=DEFAULT_SIZE; i++){
		if (hashTable[i]==NULL)
		{
			return;
		}
		else{
			while(hashTable[i]!=NULL){
				HashedEntry *curr=hashTable[i];
				while(curr->getNext()!=NULL){
					curr->setNext(curr->getNext());
				}
				delete curr; curr->setNext(NULL);
			}
		}
	}
}

ItemType HashedDictionary::search(const KeyType &Key) const{
	int i = hashFunc(Key);
	if (hashTable[i]!=NULL){
		HashedEntry *curr=hashTable[i];
		while(curr->getNext()!=NULL){
			if (curr->getKey()==Key){
				break;
			}
			else {curr=curr->getNext();}	
		}
		if(curr->getKey()==Key){
			return curr->getItem();
		}
		else{return "";}
	}
	else{
		return "";
	}
}

bool HashedDictionary::contains(const KeyType & Key) const{
	return !(search(Key)=="");
}