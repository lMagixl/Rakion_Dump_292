
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaSetPixelProgram(long) */

void __cdecl shaSetPixelProgram(long param_1)

{
  int *piVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcStack_60;
  char *pcStack_5c;
  undefined1 *puStack_58;
  char *pcStack_54;
  undefined4 uStack_50;
  int local_4c [15];
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  _DAT_362a4370 = param_1;
                    /* 0x90cb0  4381  ?shaSetPixelProgram@@YAXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212961;
  pvStack_c = ExceptionList;
  param_1 = -1;
  if (((DAT_362c9844 & 3) == 0) || (DAT_362a4374 < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar3 = _DAT_362a4370;
  if (bVar2) {
    iVar6 = *(int *)(DAT_362c9804 + 0x44);
    if (DAT_362a4378 == 0) {
      iVar6 = iVar6 * 2;
    }
    lVar3 = iVar6 + _DAT_362a4370;
    param_1 = DAT_362a4374;
  }
  piVar1 = (int *)(*(int *)(DAT_362c9804 + 0x34) + lVar3 * 4);
  ExceptionList = &pvStack_c;
  if (*piVar1 == 0) {
    ExceptionList = &pvStack_c;
    param_1 = (long)StringDuplicate(&DAT_36222fa0);
    local_4 = 0;
    FUN_36091b10(local_4c);
    local_4._0_1_ = 1;
    (**(code **)(DAT_362c9804 + 0x18))();
    if (iStack_10 == 1) {
      puVar4 = (undefined4 *)
               operator+((char *)&pcStack_5c,(CTString *)s_Shaders_PixelPrograms__3622e1e4);
      local_4._0_1_ = 2;
      pcStack_54 = StringDuplicate((char *)*puVar4);
      uStack_50 = 0;
      local_4._0_1_ = 3;
      CTString::Load_t((CTString *)&param_1,(CTFileName *)&pcStack_54);
      local_4._0_1_ = 2;
      StringFree(pcStack_54);
      local_4._0_1_ = 1;
      StringFree(pcStack_5c);
    }
    else {
      (**(code **)(DAT_362c9804 + 0x20))(&param_1);
    }
    puStack_58 = &stack0xffffff8c;
    pcVar5 = StringDuplicate((char *)param_1);
    FUN_3608e0a0((char *)&pcStack_60,pcVar5,iStack_10);
    local_4._0_1_ = 4;
    iVar6 = (*DAT_362c46f4)(pcStack_60);
    *piVar1 = iVar6;
    local_4._0_1_ = 1;
    StringFree(pcStack_60);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_36091b80(local_4c);
    local_4 = 0xffffffff;
    StringFree((char *)param_1);
    if (*piVar1 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  (*DAT_362c46dc)();
  ExceptionList = pvStack_c;
  return;
}

