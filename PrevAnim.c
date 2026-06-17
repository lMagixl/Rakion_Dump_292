
/* public: void __thiscall CAnimObject::PrevAnim(void) */

void __thiscall CAnimObject::PrevAnim(CAnimObject *this)

{
  int iVar1;
  
                    /* 0x20070  2825  ?PrevAnim@CAnimObject@@QAEXXZ */
  iVar1 = (*(int *)(*(int *)(this + 0x14) + 0x14) + -1 + *(int *)(this + 8)) %
          *(int *)(*(int *)(this + 0x14) + 0x14);
  *(int *)(this + 8) = iVar1;
  *(int *)(this + 0x10) = iVar1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(_pTimer + 0xc);
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

