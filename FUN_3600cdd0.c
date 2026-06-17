
void __thiscall FUN_3600cdd0(void *this,uint param_1,undefined4 *param_2,uint param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x3c);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)((int)this + 0x34) == '\0') {
    uVar2 = 0;
    uVar1 = *(uint *)((int)this + 0x30) ^ param_1;
    if (param_3 != 0) {
      do {
        param_2[uVar2] =
             *(uint *)(*(int *)((int)this + 0x28) + (uVar1 >> 3) * 4) ^
             *(uint *)(*(int *)((int)this + 0x20) + uVar1 * 4);
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 1;
      } while (uVar2 < param_3);
    }
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *param_2 = 1;
      param_2 = param_2 + 1;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

