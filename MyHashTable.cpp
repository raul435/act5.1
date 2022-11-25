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

void MyHashTable::rehashing(){
  this->temptabla=new list<int>[this->sizeA]
  tempTabla = tabla;

  tabla.clear();

  sizeA = (sizeA * 2) + 1 ;

  tabla.resize(sizeA);

  for (int i = 0; i < tempTabla.size; i++) {
    if (tempTabla[i] != NULL){
      tabla.put(to_string(MyHashTable::getPos(to_string(tempTabla[i]))), tempTabla[i]);
    }
  }

  tempTabla.clear();
}

void MyHashTable::put(string key,int value){
  if (this->size >= .75*this->sizeA) {
    MyHashTable::rehashing()
  }
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

int get(string key){
  return tabla[key];
}

void remove(string key){
  tabla[key] = -1;
}