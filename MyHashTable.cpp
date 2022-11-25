#include "MyHashTable.h"
#include <string>
#include <cmath>
#include <functional>


using namespace std;

MyHashTable::MyHashTable(){
  this->size=0;
  this->sizeA=11;
  this->tabla=new list<int>[this->sizeA];
}

MyHashTable::~MyHashTable(){
  
}

bool MyHashTable::isEmpty(){
  return this->size == 0;
}

int MyHashTable::getPos(string key){
  size_t hashC=hash<string>{}(key);  
  int hashCode=static_cast<int>(hashC);
  return abs(hashCode)%this->sizeA;
}

