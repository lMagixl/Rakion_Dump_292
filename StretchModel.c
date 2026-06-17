
/* public: void __thiscall CModelInstance::StretchModel(class Vector<float,3> &) */

void __thiscall CModelInstance::StretchModel(CModelInstance *this,Vector<float,3> *param_1)

{
                    /* 0x15c490  3692  ?StretchModel@CModelInstance@@QAEXAAV?$Vector@M$02@@@Z */
  *(undefined4 *)(this + 0x90) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 8);
  return;
}

