
void __thiscall FUN_36122d40(void *this,int param_1)

{
  CListHead *this_00;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_4;
  
  iVar6 = *(int *)(DAT_362fcb1c + param_1 * 4);
  if (iVar6 != 0) {
    this_00 = (CListHead *)(DAT_362fcb14 + param_1 * 0xc);
    *(undefined4 *)((int)this + 0xe68) = 0;
    iVar4 = FUN_3611f5c0(0x362fcb38);
    FUN_361229e0(&DAT_362fcb28,iVar4 + iVar6);
    piVar7 = DAT_362fcb3c;
    piVar8 = DAT_362fcb2c;
    for (piVar5 = *(int **)this_00; *piVar5 != 0; piVar5 = (int *)*piVar5) {
      if (*piVar7 < piVar5[-1]) {
        do {
          *piVar8 = *piVar7;
          piVar8[1] = piVar7[1];
          piVar8[2] = piVar7[2];
          piVar1 = piVar7 + 3;
          piVar7 = piVar7 + 4;
          piVar8[3] = *piVar1;
          piVar8 = piVar8 + 4;
        } while (*piVar7 < piVar5[-1]);
      }
      piVar1 = (int *)piVar5[2];
      iVar2 = piVar1[1];
      *piVar8 = *piVar1;
      piVar8[1] = iVar2;
      piVar8[2] = (int)piVar1;
      piVar8[3] = local_4;
      piVar8 = piVar8 + 4;
    }
    CListHead::Clear(this_00);
    *(undefined4 *)(DAT_362fcb1c + param_1 * 4) = 0;
    piVar5 = DAT_362fcb3c;
    if (piVar7 <= DAT_362fcb3c + (iVar4 + -1) * 4) {
      do {
        *piVar8 = *piVar7;
        piVar8[1] = piVar7[1];
        piVar8[2] = piVar7[2];
        piVar8[3] = piVar7[3];
        piVar7 = piVar7 + 4;
        piVar8 = piVar8 + 4;
        piVar5 = DAT_362fcb3c;
      } while (piVar7 <= DAT_362fcb3c + (iVar4 + -1) * 4);
    }
    uVar3 = DAT_362fcb28;
    DAT_362fcb28 = DAT_362fcb38;
    DAT_362fcb3c = DAT_362fcb2c;
    DAT_362fcb38 = uVar3;
    DAT_362fcb40 = DAT_362fcb30;
    DAT_362fcb30 = 0;
    if (DAT_362fa9d8 < iVar6) {
      DAT_362fa9d8 = iVar6;
    }
    DAT_362fcb2c = piVar5;
    iVar6 = FUN_3611f5c0(0x362fcb38);
    if (DAT_362fa9dc < iVar6) {
      DAT_362fa9dc = FUN_3611f5c0(0x362fcb38);
    }
  }
  return;
}

