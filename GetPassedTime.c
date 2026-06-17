
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CAnimObject::GetPassedTime(void)const  */

float __thiscall CAnimObject::GetPassedTime(CAnimObject *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
                    /* 0x20240  2031  ?GetPassedTime@CAnimObject@@QBEMXZ */
  if (*(int *)(this + 0x14) == 0) {
    return _DAT_3622376c;
  }
  iVar1 = *(int *)(*(int *)(this + 0x14) + 0x18);
  iVar2 = *(int *)(this + 8);
  uVar4 = FUN_361bfd6c();
  uVar3 = FUN_360201f0(this,(uint)uVar4);
  return (float)(int)uVar3 * *(float *)(iVar2 * 0x2c + iVar1 + 0x20);
}

