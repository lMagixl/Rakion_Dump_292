
/* public: void __thiscall CCollisionSphere::InitPosition(class Vector<float,3>) */

void __thiscall
CCollisionSphere::InitPosition
          (CCollisionSphere *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x18b700  2319  ?InitPosition@CCollisionSphere@@QAEXV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0x1c) = param_2;
  *(undefined4 *)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x24) = param_4;
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined4 *)(this + 0x18) = param_4;
  return;
}

