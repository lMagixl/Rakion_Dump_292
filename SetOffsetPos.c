
/* public: void __thiscall CModelInstance::SetOffsetPos(class Vector<float,3>) */

void __thiscall
CModelInstance::SetOffsetPos
          (CModelInstance *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x15c440  3538  ?SetOffsetPos@CModelInstance@@QAEXV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0xcc) = param_2;
  *(undefined4 *)(this + 0xd0) = param_3;
  *(undefined4 *)(this + 0xd4) = param_4;
  return;
}

