
/* public: void __thiscall CCollisionCapsule::SetPosition0(class Vector<float,3>) */

void __thiscall
CCollisionCapsule::SetPosition0
          (CCollisionCapsule *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x18b7e0  3559  ?SetPosition0@CCollisionCapsule@@QAEXV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined4 *)(this + 0x18) = param_4;
  return;
}

