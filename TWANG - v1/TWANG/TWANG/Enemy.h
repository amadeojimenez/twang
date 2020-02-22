#include "Arduino.h"

class Enemy
{
  public:
    void Spawn(int pos, int dir, int sp, int wobble, bool fear, int fire);
    void Tick(int posPlayer);
    void Kill();
    bool Alive();
    int _pos;
    int _wobble;
    int posPlayer
    int playerSide;
  private:
    int _dir;
    int _sp;
    int _alive;
    int _origin;

    
    bool _fear;
    int _safety;
    int _fire;
    
};

void Enemy::Spawn(int pos, int dir, int sp, int wobble, bool fear, int fire){
    _pos = pos;
    _dir = dir;          // 0 = left, 1 = right
    _wobble = wobble;    // 0 = no, >0 = yes, value is width of wobble
    _origin = pos;
    _sp = sp;
    _alive = 1;
    _fear = fear;
    _fire = fire;
}

void Enemy::Tick(_posPlayer){
    if(_alive){
        //if(_wobble > 0){
        //    _pos = _origin + (sin((millis()/3000.0)*_sp)*_wobble);
        //}else{
        //change direction with fear or 
        if (_fear && abs(_pos-_posPlayer)<_safety && playerSide && dir == 0||_fear && _posPlayer> _pos && _dir == 1|| _fear && _pos -_posPlayer>2*_safety && dir == 1||_fear && _posPlayer-_pos>2*_safety && _dir == 0){_dir=1-_dir;}
            if(_dir == -1){
                _pos -= _sp;
            }else{
                _pos += _sp;
            }
            if(_pos > 1000) {
                Kill();
            }
            if(_pos <= 0) {
                Kill();
            }
        }
    }
}


bool Enemy::Alive(){
    return _alive;
}

void Enemy::Kill(){
    _alive = 0;
}
