
/* public: int __thiscall CAnimObject::IsAnimFinished(void)const  */

int __thiscall CAnimObject::IsAnimFinished(CAnimObject *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
                    /* 0x202a0  2357  ?IsAnimFinished@CAnimObject@@QBEHXZ */
  if ((*(int *)(this + 0x14) != 0) && ((*(uint *)(this + 0xc) & 2) == 0)) {
    iVar1 = *(int *)(*(int *)(this + 0x14) + 0x18);
    iVar2 = *(int *)(this + 8);
    uVar4 = FUN_361bfd6c();
    uVar3 = FUN_360201f0(this,(uint)uVar4);
    return (uint)(uVar3 == *(int *)(iVar2 * 0x2c + iVar1 + 0x24) - 1U);
  }
  return 0;
}

