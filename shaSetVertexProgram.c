
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaSetVertexProgram(long) */

void __cdecl shaSetVertexProgram(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  CTString *pCVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcStack_5c;
  char *local_58;
  char *pcStack_54;
  undefined4 uStack_50;
  int local_4c [15];
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x910f0  4400  ?shaSetVertexProgram@@YAXJ@Z */
  lVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362129b5;
  pvStack_c = ExceptionList;
  if (((DAT_362c9844 & 3) == 0) || (DAT_362a4374 < 0)) {
    local_58 = (char *)0x0;
    _DAT_362a436c = param_1;
  }
  else {
    local_58 = (char *)0x1;
    _DAT_362a436c = *(int *)(DAT_362c9804 + 0x40) + param_1;
  }
  iVar7 = *(int *)(DAT_362c9804 + 0x2c) + _DAT_362a436c * 0x18;
  iVar8 = *(int *)(iVar7 + DAT_362c9854 * 4);
  piVar1 = (int *)(iVar7 + DAT_362c9854 * 4);
  ExceptionList = &pvStack_c;
  if (iVar8 == 0) {
    ExceptionList = &pvStack_c;
    FUN_36091b10(local_4c);
    local_4 = 0;
    (**(code **)(DAT_362c9804 + 0x18))(local_4c);
    pcVar9 = *(char **)(iVar7 + 0x14);
    if (0 < DAT_362c9854) {
      pcVar9 = (char *)((uint)pcVar9 | 0x80);
    }
    pcStack_5c = StringDuplicate(&DAT_36222fa0);
    local_4._0_1_ = 1;
    param_1 = (long)StringDuplicate(&DAT_36222fa0);
    local_4._0_1_ = 2;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 2;
    if (iStack_10 == 1) {
      puVar4 = (undefined4 *)
               operator+((char *)&local_58,(CTString *)s_Shaders_VertexPrograms__3622e1cc);
      local_4._0_1_ = 3;
      pcStack_54 = StringDuplicate((char *)*puVar4);
      uStack_50 = 0;
      local_4._0_1_ = 4;
      CTString::Load_t((CTString *)&param_1,(CTFileName *)&pcStack_54);
      local_4._0_1_ = 3;
      StringFree(pcStack_54);
      local_4._0_1_ = 2;
      StringFree(local_58);
    }
    else {
      local_4._0_1_ = uVar3;
      if (((uint)pcVar9 & 0x80000000) == 0) {
        (**(code **)(DAT_362c9804 + 0x1c))(&pcStack_5c,lVar2);
        pCVar5 = FUN_3608dc40((CTString *)&pcStack_54,pcVar9);
        local_4._0_1_ = 5;
        pcVar6 = StringDuplicate(*(char **)pCVar5);
        StringFree((char *)param_1);
        local_4._0_1_ = 2;
        param_1 = (long)pcVar6;
        StringFree(pcStack_54);
        if (local_58 != (char *)0x0) {
          pCVar5 = (CTString *)FUN_3608daa0((char *)&pcStack_54,DAT_362a4374);
          local_4._0_1_ = 6;
          CTString::operator+=((CTString *)&param_1,pCVar5);
          local_4._0_1_ = 2;
          StringFree(pcStack_54);
        }
      }
      else {
        (**(code **)(DAT_362c9804 + 0x1c))(&param_1);
        pcVar9 = (char *)((uint)pcVar9 & 0x7fffffff);
      }
    }
    iVar7 = (*DAT_362c46f0)(param_1,pcVar9);
    *piVar1 = iVar7;
    local_4._0_1_ = 1;
    StringFree((char *)param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(pcStack_5c);
    local_4 = 0xffffffff;
    FUN_36091b80(local_4c);
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  if (DAT_362c97f4 == 0) {
    (*DAT_362c46d8)(iVar8);
  }
  ExceptionList = pvStack_c;
  return;
}

