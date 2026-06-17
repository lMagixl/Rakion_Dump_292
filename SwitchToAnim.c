
/* public: void __thiscall CAnimObject::SwitchToAnim(long) */

void __thiscall CAnimObject::SwitchToAnim(CAnimObject *this,long param_1)

{
  long lVar1;
  int extraout_ECX;
  
                    /* 0x207d0  3707  ?SwitchToAnim@CAnimObject@@QAEXJ@Z */
  if (*(int *)(this + 0x14) != 0) {
    lVar1 = GetAnimsCt(this);
    if (lVar1 <= param_1) {
      param_1 = 0;
    }
    *(long *)(extraout_ECX + 8) = param_1;
    *(long *)(extraout_ECX + 0x10) = param_1;
  }
  return;
}

