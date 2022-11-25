#include "MyHashTable.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  int value;
  string key;
  int i=1;
  MyHashTable tabla;
  while(i=1){
    cout<<"valor a insertar:";
    cin>>value;
    cout<<"key a insertar:";
    cin>>key;
    tabla.put(key, value);
    cout<<"agregar otro valor si=1 no=0:";
    cin>>i;
  }
}