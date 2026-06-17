
/* public: void __thiscall CAnimObject::SetAnim(long) */

void __thiscall CAnimObject::SetAnim(CAnimObject *this,long param_1)

{
  long lVar1;
  CChangeable *this_00;
  
                    /* 0x206a0  3395  ?SetAnim@CAnimObject@@QAEXJ@Z */
  if (*(int *)(this + 0x14) != 0) {
    lVar1 = GetAnimsCt(this);
    if (lVar1 <= param_1) {
      param_1 = 0;
    }
    if (*(int *)(this_00 + 8) != param_1) {
      *(undefined4 *)(this_00 + 4) = *(undefined4 *)(_pTimer + 0xc);
    }
    *(long *)(this_00 + 8) = param_1;
    *(long *)(this_00 + 0x10) = param_1;
    CChangeable::MarkChanged(this_00);
  }
  return;
}

