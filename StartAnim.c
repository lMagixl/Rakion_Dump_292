
/* public: void __thiscall CAnimObject::StartAnim(long) */

void __thiscall CAnimObject::StartAnim(CAnimObject *this,long param_1)

{
                    /* 0x206e0  3656  ?StartAnim@CAnimObject@@QAEXJ@Z */
  if (*(int *)(this + 0x14) != 0) {
    SetAnim(this,param_1);
    *(undefined4 *)(this + 0xc) = 2;
  }
  return;
}

