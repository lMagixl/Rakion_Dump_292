
void __fastcall FUN_3611b1d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd40) == 0) {
    *(undefined4 *)(param_1 + 0x6b8) = DAT_362c545c;
    *(undefined4 *)(param_1 + 0x6bc) = DAT_362a417c;
  }
  else {
    *(undefined4 *)(param_1 + 0x6b8) = 0;
    *(undefined4 *)(param_1 + 0x6bc) = 0x3f800000;
  }
  iVar1 = *(int *)(param_1 + 0x694);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x694) + 0x74) = 0;
  iVar1 = *(int *)(param_1 + 0x694);
  *(undefined4 *)(iVar1 + 0x68) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x70) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x694) + 0x13c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x694) + 0x140) = 0x3f666666;
  (**(code **)**(undefined4 **)(param_1 + 0x694))();
  iVar1 = CListHead::IsEmpty((CListHead *)&DAT_362fcaa8);
  if ((iVar1 == 0) && (DAT_362fcaa8 != DAT_362fcab0)) {
    iVar1 = FUN_3611f7a0(0x362fcaa8);
    FUN_36121f00(&DAT_362fcaa8);
    FUN_36121eb0(&DAT_362fcaa8,iVar1);
  }
  DAT_362fcabc = 0;
  iVar1 = CListHead::IsEmpty((CListHead *)&DAT_362fca8c);
  if ((iVar1 == 0) && (DAT_362fca8c != DAT_362fca94)) {
    iVar1 = FUN_3611f750(0x362fca8c);
    FUN_36121e20(&DAT_362fca8c);
    FUN_36121dd0(&DAT_362fca8c,iVar1);
  }
  DAT_362fcaa0 = 0;
  iVar1 = CListHead::IsEmpty((CListHead *)&DAT_362fcac4);
  if ((iVar1 == 0) && (DAT_362fcac4 != DAT_362fcacc)) {
    iVar1 = FUN_3611f7f0(0x362fcac4);
    FUN_36121fa0(&DAT_362fcac4);
    FUN_36121f50(&DAT_362fcac4,iVar1);
  }
  DAT_362fcad8 = 0;
  *(undefined4 *)(param_1 + 0xe10) = 0;
  *(undefined4 *)(param_1 + 0xe20) = 0;
  iVar1 = FUN_3611f510(&DAT_362fcb10);
  if (iVar1 < *(int *)(param_1 + 0xe28)) {
    if (DAT_362fcb10 != 0) {
      operator_delete__(DAT_362fcb14);
      DAT_362fcb10 = 0;
      DAT_362fcb14 = (void *)0x0;
    }
    FUN_3611f480(&DAT_362fcb10,*(int *)(param_1 + 0xe28));
    if (DAT_362fcb18 != 0) {
      operator_delete__(DAT_362fcb1c);
      DAT_362fcb18 = 0;
      DAT_362fcb1c = (void *)0x0;
    }
    iVar1 = *(int *)(param_1 + 0xe28);
    if (iVar1 != 0) {
      DAT_362fcb18 = iVar1;
      DAT_362fcb1c = (void *)thunk_FUN_361bf99c(iVar1 * 4 + 4);
    }
    if (DAT_362fcb20 != 0) {
      operator_delete__(DAT_362fcb24);
      DAT_362fcb20 = 0;
      DAT_362fcb24 = (void *)0x0;
    }
    iVar1 = *(int *)(param_1 + 0xe28);
    if (iVar1 != 0) {
      DAT_362fcb20 = iVar1;
      DAT_362fcb24 = (void *)thunk_FUN_361bf99c(iVar1 * 4 + 4);
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xe28)) {
    do {
      *(undefined4 *)((int)DAT_362fcb1c + iVar1 * 4) = 0;
      *(undefined4 *)((int)DAT_362fcb24 + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xe28));
  }
  *(undefined4 *)(param_1 + 0xd60) = 0xff000000;
  if (DAT_362fcbf8 == 2) {
    *(undefined4 *)(param_1 + 0xd60) = 0xffff0000;
  }
  else if (DAT_362fcbf8 == 3) {
    *(undefined4 *)(param_1 + 0xd60) = 0xff0000;
  }
  else if (DAT_362fcbf8 == 1) {
    *(undefined4 *)(param_1 + 0xd60) = 0xff00;
  }
  *(undefined4 *)(param_1 + 0xe58) = 0;
  *(undefined4 *)(param_1 + 0xd68) = 0;
  *(undefined4 *)(param_1 + 0xd64) = 0;
  *(float *)(param_1 + 0xe60) = (float)*(int *)(param_1 + 0xe2c);
  *(int *)(param_1 + 0xe5c) = *(int *)(param_1 + 0xe2c);
  return;
}

