
/* public: void __thiscall CCollisionCapsule::SetPosition1(class Vector<float,3>) */

void __thiscall
CCollisionCapsule::SetPosition1
          (CCollisionCapsule *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x18b800  3560  ?SetPosition1@CCollisionCapsule@@QAEXV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0x1c) = param_2;
  *(undefined4 *)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x24) = param_4;
  return;
}

