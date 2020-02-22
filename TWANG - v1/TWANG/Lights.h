#include "Arduino.h"

class Lights
{
  public:
    void Kill();
    bool Alive();
    void Spawn(int left, int right);
    int _left;
    int _right;
    bool _on;
    int _alive; 
    
 
};

void Lights::Spawn(int left, int right){
    _left = left;
    _right = right;         
    _on = true;   
    _alive = 1;    
}

bool Lights::Alive(){
    return _alive;
}

void Lights::Kill(){
    _alive = 0;
}
