
void __fastcall FUN_361158d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *this;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  Vector<float,3> aVStack_6c [12];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621856a;
  local_c = ExceptionList;
  this = (void *)(*(int *)(param_1 + 4) + 0x15c);
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this,iVar3);
      if ((*(int *)(iVar1 + 4) == 9) ||
         (iVar1 = FUN_360cafb0(this,iVar3), *(int *)(iVar1 + 4) == 10)) {
        iVar1 = FUN_360cafb0(this,iVar3);
        iVar1 = *(int *)(iVar1 + 0x7c);
        *(undefined4 *)(iVar1 + 0x14) = 0;
        piVar2 = (int *)FUN_360cafb0(this,iVar3);
        (**(code **)(*piVar2 + 100))(&local_78);
        MakeRotationMatrixFast((Matrix<float,3,3> *)&uStack_60,aVStack_6c);
        uStack_30 = local_78;
        uStack_2c = uStack_54;
        uStack_28 = uStack_50;
        uStack_24 = uStack_4c;
        uStack_20 = uStack_74;
        uStack_1c = uStack_48;
        uStack_18 = uStack_44;
        *(undefined4 *)(iVar1 + 100) = uStack_5c;
        uStack_14 = uStack_40;
        *(undefined4 *)(iVar1 + 0x68) = uStack_58;
        uStack_10 = uStack_70;
        *(undefined4 *)(iVar1 + 0x60) = uStack_60;
        *(undefined4 *)(iVar1 + 0x6c) = local_78;
        *(undefined4 *)(iVar1 + 0x70) = uStack_54;
        *(undefined4 *)(iVar1 + 0x74) = uStack_50;
        *(undefined4 *)(iVar1 + 0x78) = uStack_4c;
        *(undefined4 *)(iVar1 + 0x7c) = uStack_74;
        *(undefined4 *)(iVar1 + 0x80) = uStack_48;
        *(undefined4 *)(iVar1 + 0x84) = uStack_44;
        *(undefined4 *)(iVar1 + 0x88) = uStack_40;
        *(undefined4 *)(iVar1 + 0x8c) = uStack_70;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360caf20((int)this);
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

