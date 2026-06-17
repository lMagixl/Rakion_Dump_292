
/* private: bool __thiscall Xenesis::xFile::loadBlock(unsigned char *) */

bool __thiscall Xenesis::xFile::loadBlock(xFile *this,uchar *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  short local_28 [2];
  uint local_24;
  LPVOID local_20;
  uint local_1c;
  uint local_18;
  LPCRITICAL_SECTION local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a40b0  4238  ?loadBlock@xFile@Xenesis@@AAE_NPAE@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b882;
  local_c = ExceptionList;
  p_Var1 = *(LPCRITICAL_SECTION *)(this + 0x30);
  local_10 = '\0';
  ExceptionList = &local_c;
  local_14 = p_Var1;
  FUN_361a3220(p_Var1);
  local_4 = 0;
  bVar4 = FUN_361a2f10(*(void **)(this + 0x1c),*(LONG *)this,*(LONG *)(this + 4));
  if (!bVar4) {
    local_4 = 0xffffffff;
    FUN_361a3230(p_Var1);
    ExceptionList = local_c;
    return false;
  }
  if (*(char *)(*(int *)(this + 0x20) + 0x10) == '\0') {
    local_18 = *(int *)(*(int *)(this + 0x20) + 8) - *(int *)(this + 0xc);
    puVar6 = &local_18;
    if (0x1ffff < local_18) {
      puVar6 = &DAT_3624321c;
    }
    uVar2 = *puVar6;
    bVar4 = FUN_361a2fa0(*(void **)(this + 0x1c),param_1,uVar2);
    FUN_361a3230(p_Var1);
    uVar3 = *(uint *)this;
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar2;
    *(uint *)this = uVar3 + uVar2;
    *(uint *)(this + 4) = *(int *)(this + 4) + (uint)CARRY4(uVar3,uVar2);
    ExceptionList = local_c;
    return bVar4;
  }
  local_24 = 0;
  bVar4 = FUN_361a2fa0(*(void **)(this + 0x1c),&local_24,3);
  if (bVar4) {
    bVar4 = (local_24 & 0x400000) != 0x400000;
    local_18 = 5;
    local_1c = 0x20000;
    if (((local_24 & 0x800000) != 0) && (local_1c = local_24 & 0xfffff, bVar4)) {
      bVar5 = FUN_361a2fa0(*(void **)(this + 0x1c),&local_24,3);
      if (!bVar5) goto LAB_361a427d;
      local_18 = 8;
    }
    bVar5 = FUN_361a2fa0(*(void **)(this + 0x1c),local_28,2);
    if (bVar5) {
      local_24 = local_24 & 0xfffff;
      if (bVar4) {
        FUN_361a4b10(&local_20,local_24);
        local_4._0_1_ = 1;
        bVar4 = FUN_361a2fa0(*(void **)(this + 0x1c),local_20,local_24);
        if (!bVar4) {
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_36018d70(&local_20);
          goto LAB_361a427d;
        }
        FUN_361a3e00(&local_14);
        iVar7 = FUN_36152040(param_1,&local_1c,(int)local_20,local_24);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar7 != 0) {
          FUN_36018d70(&local_20);
          local_4 = 0xffffffff;
          if (local_10 == '\0') {
            FUN_361a3230(local_14);
          }
          ExceptionList = local_c;
          return false;
        }
        FUN_36018d70(&local_20);
      }
      else {
        local_1c = local_24;
        bVar4 = FUN_361a2fa0(*(void **)(this + 0x1c),param_1,local_24);
        if (!bVar4) goto LAB_361a427d;
        FUN_361a3e00(&local_14);
      }
      uVar2 = *(uint *)this;
      *(undefined4 *)(this + 0x10) = 0;
      *(uint *)this = uVar2 + local_18 + local_24;
      *(uint *)(this + 4) = *(int *)(this + 4) + (uint)CARRY4(uVar2,local_18 + local_24);
      if (this[0x15] != (xFile)0x0) {
        iVar7 = FUN_3600b1b0((ushort *)param_1,(ushort *)(param_1 + (local_24 & 0xfffffffe)),0);
        local_4 = 0xffffffff;
        if (local_10 == '\0') {
          FUN_361a3230(local_14);
        }
        ExceptionList = local_c;
        return (short)iVar7 == local_28[0];
      }
      local_4 = 0xffffffff;
      if (local_10 == '\0') {
        FUN_361a3230(local_14);
      }
      ExceptionList = local_c;
      return true;
    }
  }
LAB_361a427d:
  local_4 = 0xffffffff;
  FUN_361a3230(p_Var1);
  ExceptionList = local_c;
  return false;
}

