#ifndef MYHASHTABLE_H
#define MYHASHTABLE_H

#include <list>
#include <string>

using namespace std;
class MyHashTable {
private:
  list<int> *tabla;
  int size; //# de valores en la tabla
  int sizeA; //tamaño del arreglo
  int getPos(string key);
  void rehashing();
public:
  MyHashTable();
  ~MyHashTable();
  bool isEmpty();
  void put(string key,int value);
  int get(string key);
  void remove(string key);
};

#endif