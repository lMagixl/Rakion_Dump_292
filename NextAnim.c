
/* public: void __thiscall CAnimObject::NextAnim(void) */

void __thiscall CAnimObject::NextAnim(CAnimObject *this)

{
  int iVar1;
  
                    /* 0x20040  2673  ?NextAnim@CAnimObject@@QAEXXZ */
  iVar1 = (*(int *)(this + 8) + 1) % *(int *)(*(int *)(this + 0x14) + 0x14);
  *(int *)(this + 8) = iVar1;
  *(int *)(this + 0x10) = iVar1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(_pTimer + 0xc);
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

