
/* public: void __thiscall CShader::ResetHandles(void) */

void __thiscall CShader::ResetHandles(CShader *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_4c [11];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x90f80  3164  ?ResetHandles@CShader@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212973;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_36091b10(local_4c);
  local_4 = 0;
  (**(code **)(this + 0x18))(local_4c);
  *(int *)(this + 0x40) = iStack_1c;
  *(int *)(this + 0x44) = iStack_18;
  iVar2 = FUN_3600c250((undefined4 *)(this + 0x28));
  if ((iVar2 == 0) && (iStack_1c * 2 != 0)) {
    *(int *)(this + 0x28) = iStack_1c * 2;
    uVar3 = thunk_FUN_361bf99c((iStack_1c * 6 + 3) * 8);
    *(undefined4 *)(this + 0x2c) = uVar3;
  }
  iVar2 = FUN_3600c2d0((undefined4 *)(this + 0x30));
  if ((iVar2 == 0) && (iStack_18 * 3 != 0)) {
    *(int *)(this + 0x30) = iStack_18 * 3;
    uVar3 = thunk_FUN_361bf99c(iStack_18 * 0xc + 4);
    *(undefined4 *)(this + 0x34) = uVar3;
  }
  iVar2 = 0;
  if (0 < iStack_1c) {
    iVar6 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(this + 0x2c) + iVar6);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0x18;
      puVar4[5] = *(undefined4 *)(iStack_20 + iVar1);
    } while (iVar2 < iStack_1c);
  }
  if (iStack_1c < iStack_1c * 2) {
    iVar2 = iStack_1c * 0x18;
    iVar6 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(this + 0x2c) + iVar2);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar4 = (undefined4 *)(iVar6 + iStack_20);
      iVar6 = iVar6 + 4;
      iVar2 = iVar2 + 0x18;
      iStack_1c = iStack_1c + -1;
      puVar5[5] = *puVar4;
    } while (iStack_1c != 0);
  }
  iVar2 = 0;
  if (0 < iStack_18 * 3) {
    do {
      iVar6 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(this + 0x34) + iVar6) = 0;
    } while (iVar2 < iStack_18 * 3);
  }
  local_4 = 0xffffffff;
  FUN_36091b80(local_4c);
  ExceptionList = pvStack_c;
  return;
}

