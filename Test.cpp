#include "Entry.h"
#include "HashedEntry.h"
#include "HashedDictionary.h"
#include<string>
#include<iostream>
using namespace std;


int main()
{
	cout<<boolalpha;
	//make all the necessary variables
	KeyType k1=0;KeyType k2=1;KeyType k3=2;KeyType k4=3;KeyType k5=4;KeyType k6=5;KeyType k7=6;KeyType k8=7;KeyType k9=108; KeyType k10=105;
	ItemType hg="Happy Gilmore";ItemType cb="Cody Buckley";ItemType pd="Patrick Donaghue";ItemType gt="Grant Tebb";ItemType jm="Jordan Moore";ItemType pk="Peter Kopaskie";ItemType ae="Andy Erikson";ItemType so="Sarah Ostrander";ItemType tc="Teagan Cramer";
	
	//show HashedEntry works
	HashedEntry *ent1= new HashedEntry(k1,hg);
	//initialize HashedDictionary
	HashedDictionary hd;
	cout<<"is the dictionary empty?"<<hd.isEmpty()<<endl;
	//add all the items to hd
	hd.add(k1,hg);hd.add(k2,cb);hd.add(k3,pd);hd.add(k4,gt);hd.add(k5,jm);hd.add(k6,ae);hd.add(k7,so);hd.add(k8,hg);hd.add(k9,tc);
	//check the isEmpty function
	cout<<"is the dictionary empty? "<<hd.isEmpty()<<endl;
	//check other functions
	cout<<"How many items are there? "<<hd.getNumberOfItems()<<endl;
	//hd.remove(k1);
	cout<<hd.contains(k10)<<endl;
	cout<<hd.contains(k1)<<endl;
	//print out the correct name for k9 (should be teagan cramer) and k8 (should be Happy Gilmore)
	cout<<hd.search(k9)<<endl;
	cout<<hd.search(k8)<<endl;
	//hd.clear();


	return 0;
}