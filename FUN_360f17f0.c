
/* WARNING: Removing unreachable block (ram,0x360f18c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * __thiscall FUN_360f17f0(void *this,longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_8;
  
  CTimer::GetHighPrecisionTimer(_pTimer);
  uVar2 = FUN_361bfd6c();
  if ((*(float *)this < _DAT_3622376c == (*(float *)this == _DAT_3622376c)) ||
     (*(float *)((int)this + 4) < _DAT_3622376c == (*(float *)((int)this + 4) == _DAT_3622376c))) {
    rand_();
    uVar3 = FUN_361bfd6c();
  }
  else {
    uVar3 = FUN_361bfd6c();
  }
  lVar1 = uVar3 + local_8;
  if (lVar1 < *(longlong *)((int)this + 0x10)) {
    lVar1 = *(longlong *)((int)this + 0x10);
  }
  *(ulonglong *)((int)this + 0x10) = uVar2 + lVar1;
  *param_1 = uVar2 + lVar1;
  return param_1;
}

