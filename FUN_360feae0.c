
/* WARNING: Removing unreachable block (ram,0x360feb42) */

int __fastcall FUN_360feae0(int param_1)

{
  longlong lVar1;
  uint3 uVar2;
  ulonglong uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_362a6078 <= (int)(uint)*(byte *)(param_1 + 0x10)) {
    return 2;
  }
  CTimer::GetHighPrecisionTimer(_pTimer);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_361bfd6c();
  lVar1 = uVar3 + lVar1;
  uVar2 = (uint3)((ulonglong)lVar1 >> 8);
  if (lVar1 <= CONCAT44(local_4,local_8)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

