
/* public: void __thiscall CMovableEntity::GiveImpulseTranslationRelative(class Vector<float,3>
   const &) */

void __thiscall
CMovableEntity::GiveImpulseTranslationRelative(CMovableEntity *this,Vector<float,3> *param_1)

{
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1add40  2219
                       ?GiveImpulseTranslationRelative@CMovableEntity@@QAEXABV?$Vector@M$02@@@Z */
  local_30 = *(float *)param_1;
  local_2c = *(undefined4 *)(param_1 + 4);
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = *(undefined4 *)(this + 0x48);
  local_10 = 0;
  local_8 = *(undefined4 *)(this + 0x4c);
  local_4 = *(undefined4 *)(this + 0x50);
  CPlacement3D::RelativeToAbsolute((CPlacement3D *)&local_30,(CPlacement3D *)&local_18);
  FUN_361b4260(this + 0x250,&local_30);
  AddToMovers(this);
  return;
}

