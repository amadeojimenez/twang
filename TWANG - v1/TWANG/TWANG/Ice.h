#include "Arduino.h"

class Ice
{
  public:
    void Spawn(int left, int right);
    void Kill();
    void Hit();
    int Alive();
    int _left;
    int _right;
    int _lives;
    
  private:
    int _alive;
};

void Ice::Spawn(int left, int right){
    _left = left;
    _right = right;
    _lives = 200;
    _alive = 1;
    
}

void Ice::Kill(){
    _alive = 0;
}
void Ice::Hit(){
    _lives --;
    if(_lives == 0) {
        Kill(); 
        return;
    }
  //  if(_lives == 2){
  //      _pos = 200;
  //  }else if(_lives == 1){
  //      _pos = 600;
  //  }
}

int Ice::Alive(){
    return _alive;
}






//Falta icecount and icepool!!!
//pos +1 or getled first ????
