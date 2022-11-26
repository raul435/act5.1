#include "MyHashTable.h"
#include <string>
#include <list>
#include <cmath>
#include <functional>
#include <algorithm>


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

void MyHashTable::put(string key,int value){
  if (this->size >= .75*this->sizeA) {
    MyHashTable::rehashing();
  }
  
  nodo *place=new nodo();
  place->dato=value;
  for(int i = 0;i == 1;){
    if (tabla == NULL){
      tabla [key] = value;
      i = 1;
    }
    else{
      key += 7;
      if (key > sizeA){
        key -= sizeA;
      }
    }
  }

}

void MyHashTable::rehashing(){
  int tempSizeA;
  list<int> *tempTabla;
  tempTabla = tabla;

  tabla->clear();

  tempSizeA = (sizeA * 2) + 1 ;

  tabla->resize(sizeA);

  for (int i = 0; i < tempSizeA; i++) {
    if (tempTabla[i] != NULL){
      tabla.put(to_string(MyHashTable::getPos(to_string(tempTabla[i]))), tempTabla[i]);
    }
  }

  sizeA = tempSizeA;

  tempTabla->clear();
}

int get(string key){
  return tabla[key];
}

void remove(string key){
  tabla[key] = -1;
}