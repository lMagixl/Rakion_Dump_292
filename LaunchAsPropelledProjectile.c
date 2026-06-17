
/* public: void __thiscall CMovableEntity::LaunchAsPropelledProjectile(class Vector<float,3> const
   &,class CMovableEntity *) */

void __thiscall
CMovableEntity::LaunchAsPropelledProjectile
          (CMovableEntity *this,Vector<float,3> *param_1,CMovableEntity *param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x1ade30  2531
                       ?LaunchAsPropelledProjectile@CMovableEntity@@QAEXABV?$Vector@M$02@@PAV1@@Z */
  *(undefined4 *)(this + 0x120) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 8);
  local_c = *(float *)(this + 0x54) * *(float *)param_1 +
            *(float *)(this + 0x5c) * *(float *)(param_1 + 8) +
            *(float *)(this + 0x58) * *(float *)(param_1 + 4);
  local_8 = *(float *)(this + 0x68) * *(float *)(param_1 + 8) +
            *(float *)(this + 100) * *(float *)(param_1 + 4) +
            *(float *)(this + 0x60) * *(float *)param_1;
  local_4 = *(float *)(this + 0x74) * *(float *)(param_1 + 8) +
            *(float *)(this + 0x70) * *(float *)(param_1 + 4) +
            *(float *)(this + 0x6c) * *(float *)param_1;
  FUN_361b4260(this + 0x250,&local_c);
  AddToMovers(this);
  return;
}

