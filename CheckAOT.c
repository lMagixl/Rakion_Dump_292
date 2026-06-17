
/* public: virtual bool __thiscall CAOTimeInfo::CheckAOT(void) */

bool __thiscall CAOTimeInfo::CheckAOT(CAOTimeInfo *this)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  
                    /* 0x19ea60  1166  ?CheckAOT@CAOTimeInfo@@UAE_NXZ */
  if (*(int *)(this + 8) == 0) {
    return false;
  }
  timeGetTime();
  uVar3 = FUN_361bfd6c();
  if (*(uint *)(this + 4) < (uint)uVar3) {
    iVar1 = *(int *)(this + 0x10);
    if (0 < iVar1) {
      *(int *)(this + 0x10) = iVar1 + -1;
      DVar2 = timeGetTime();
      *(DWORD *)(this + 0xc) = DVar2;
      return true;
    }
    if (iVar1 == -1) {
      DVar2 = timeGetTime();
      *(DWORD *)(this + 0xc) = DVar2;
      return true;
    }
  }
  return false;
}

