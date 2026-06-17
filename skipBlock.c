
/* private: bool __thiscall Xenesis::xFile::skipBlock(void) */

bool __thiscall Xenesis::xFile::skipBlock(xFile *this)

{
  uint uVar1;
  LPCRITICAL_SECTION p_Var2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint local_18;
  LPCRITICAL_SECTION local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a3e20  4421  ?skipBlock@xFile@Xenesis@@AAE_NXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b868;
  local_c = ExceptionList;
  if (*(char *)(*(int *)(this + 0x20) + 0x10) == '\0') {
    uVar1 = *(uint *)this;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 0x20000;
    *(uint *)this = uVar1 + 0x20000;
    *(uint *)(this + 4) = *(int *)(this + 4) + (uint)(0xfffdffff < uVar1);
    return true;
  }
  p_Var2 = *(LPCRITICAL_SECTION *)(this + 0x30);
  bVar4 = false;
  local_10 = 0;
  ExceptionList = &local_c;
  local_14 = p_Var2;
  FUN_361a3220(p_Var2);
  local_4 = 0;
  bVar3 = FUN_361a2f10(*(void **)(this + 0x1c),*(LONG *)this,*(LONG *)(this + 4));
  if (bVar3) {
    local_18 = 0;
    bVar3 = FUN_361a2fa0(*(void **)(this + 0x1c),&local_18,3);
    if (bVar3) {
      iVar5 = 5;
      if ((local_18 & 0x800000) != 0) {
        if ((local_18 & 0x400000) != 0x400000) {
          bVar4 = FUN_361a2fa0(*(void **)(this + 0x1c),&local_18,3);
          if (!bVar4) goto LAB_361a3ea5;
          iVar5 = 8;
        }
        FUN_361a3230(p_Var2);
        bVar4 = true;
      }
      local_18 = local_18 & 0xfffff;
      uVar1 = *(uint *)this;
      *(undefined4 *)(this + 0x10) = 0;
      *(uint *)this = uVar1 + iVar5 + local_18;
      *(uint *)(this + 4) = *(int *)(this + 4) + (uint)CARRY4(uVar1,iVar5 + local_18);
      local_4 = 0xffffffff;
      if (!bVar4) {
        FUN_361a3230(p_Var2);
      }
      ExceptionList = local_c;
      return true;
    }
  }
LAB_361a3ea5:
  local_4 = 0xffffffff;
  FUN_361a3230(p_Var2);
  ExceptionList = local_c;
  return false;
}

