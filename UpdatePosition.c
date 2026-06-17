
/* public: void __thiscall CCollisionSphere::UpdatePosition(class Vector<float,3>) */

void __thiscall
CCollisionSphere::UpdatePosition
          (CCollisionSphere *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x18b730  3920  ?UpdatePosition@CCollisionSphere@@QAEXV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined4 *)(this + 0x18) = param_4;
  return;
}

