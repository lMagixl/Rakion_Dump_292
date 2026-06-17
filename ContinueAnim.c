
/* public: void __thiscall CAnimObject::ContinueAnim(void) */

void __thiscall CAnimObject::ContinueAnim(CAnimObject *this)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
                    /* 0x1ffc0  1360  ?ContinueAnim@CAnimObject@@QAEXXZ */
  uVar3 = *(uint *)(this + 0xc);
  if ((uVar3 & 1) != 0) {
    iVar4 = *(int *)(*(int *)(this + 0x14) + 0x18);
    iVar5 = *(int *)(this + 8);
    iVar6 = *(int *)(iVar5 * 0x2c + 0x24 + iVar4);
    if (0 < iVar6) {
      uVar7 = FUN_361bfd6c();
      fVar1 = *(float *)(iVar5 * 0x2c + iVar4 + 0x20);
      fVar2 = *(float *)(_pTimer + 0xc);
      *(uint *)(this + 0xc) = uVar3 & 0xfffffffe;
      *(float *)(this + 4) =
           fVar2 - (float)(((int)((longlong)
                                  ((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 |
                                  uVar7 & 0xffffffff) % (longlong)iVar6) + iVar6) % iVar6) * fVar1;
      CChangeable::MarkChanged((CChangeable *)this);
      return;
    }
  }
  return;
}

