
/* public: void __thiscall CAnimData::CreateAnimations(long,class CTString,long,float) */

void __thiscall
CAnimData::CreateAnimations
          (CAnimData *this,int param_1,char *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1f670  1409  ?CreateAnimations@CAnimData@@QAEXJVCTString@@JM@Z */
  puStack_8 = &LAB_3620ec9d;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this + 8))();
  *(int *)(this + 0x14) = param_1;
  piVar3 = (int *)thunk_FUN_361bf99c(param_1 * 0x2c + 4);
  local_4._0_1_ = 1;
  if (piVar3 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar3 + 1;
    *piVar3 = param_1;
    _eh_vector_constructor_iterator_(piVar7,0x2c,param_1,FUN_3601f4c0,FUN_3601f4d0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(int **)(this + 0x18) = piVar7;
  if (0 < param_1) {
    iVar8 = 0;
    do {
      pcVar4 = (char *)(*(int *)(this + 0x18) + iVar8);
      pcVar6 = param_3;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *pcVar4 = cVar2;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      *(undefined4 *)(iVar8 + 0x20 + *(int *)(this + 0x18)) = param_5;
      *(undefined4 *)(iVar8 + 0x24 + *(int *)(this + 0x18)) = 1;
      pvVar5 = AllocMemory(4);
      *(void **)(iVar8 + 0x28 + *(int *)(this + 0x18)) = pvVar5;
      iVar1 = iVar8 + 0x28;
      iVar8 = iVar8 + 0x2c;
      param_1 = param_1 + -1;
      **(undefined4 **)(iVar1 + *(int *)(this + 0x18)) = param_4;
    } while (param_1 != 0);
  }
  local_4 = 0xffffffff;
  StringFree(param_3);
  ExceptionList = pvStack_c;
  return;
}

