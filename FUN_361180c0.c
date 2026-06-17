
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361180c0(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *this_00;
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float unaff_EBX;
  int unaff_ESI;
  float unaff_EDI;
  undefined1 local_30 [24];
  undefined1 local_18 [12];
  int iStack_c;
  ulong uStack_8;
  int iStack_4;
  
  if (DAT_362fcbcc != 0) {
    iVar4 = *param_3;
    uVar3 = (**(code **)(*param_1 + 100))();
    (**(code **)(iVar4 + 0x18))(uVar3);
    if ((float)param_3[0x13] <= -unaff_EBX) {
      (**(code **)(*param_3 + 0x24))(&stack0xffffffc4,local_30);
      uStack_8 = CDrawPort::GetID(*(CDrawPort **)((int)this + 8));
      this_00 = (undefined4 *)((int)this + 0xddc);
      iVar4 = FUN_3611f430((int)this_00);
      iVar6 = 0;
      if (0 < iVar4) {
        piVar5 = *(int **)((int)this + 0xde0);
        do {
          if ((piVar5[2] == iStack_c) && ((piVar5[1] == uStack_8 || (0 < piVar5[0xb]))))
          goto LAB_361181c5;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 0xe;
        } while (iVar6 < iVar4);
      }
      iVar6 = *(int *)((int)this + 0xde4) + 1;
      *(int *)((int)this + 0xde4) = iVar6;
      iVar4 = FUN_3611f8c0(this_00);
      if (iVar4 < iVar6) {
        iVar4 = FUN_3611f8c0(this_00);
        FUN_36120960(this_00,iVar4 + *(int *)((int)this + 0xde8));
      }
      piVar5 = (int *)(*(int *)((int)this + 0xde0) + -0x38 + *(int *)((int)this + 0xde4) * 0x38);
      *piVar5 = DAT_362a6460;
      DAT_362a6460 = DAT_362a6460 + 1;
      fVar2 = *(float *)(_pTimer + 8) - _DAT_362253e8;
      piVar5[0xb] = iStack_4;
      piVar5[0xc] = 0;
      piVar5[0xd] = 0;
      piVar5[10] = (int)fVar2;
LAB_361181c5:
      piVar5[1] = uStack_8;
      piVar5[2] = iStack_c;
      piVar5[6] = unaff_ESI;
      piVar5[7] = (int)unaff_EBX;
      piVar5[8] = (int)-unaff_EDI;
      piVar5[9] = (int)((_DAT_36223384 - (float)param_3[0x4c] / unaff_EDI) * (float)param_3[0x4d] +
                       (float)param_3[0x4e]);
      piVar5[3] = (int)local_18;
      piVar5[4] = (int)local_30;
      piVar5[5] = (int)unaff_EDI;
      uVar1 = piVar5[0xd];
      piVar5[0xd] = uVar1 & 0xfffffff3 | 1;
      if (*(int *)((int)this + 0xd64) != 0) {
        piVar5[0xd] = uVar1 & 0xfffffff3 | 5;
      }
      if (*(int *)((int)this + 0xd68) != 0) {
        piVar5[0xd] = piVar5[0xd] | 8;
      }
    }
  }
  return;
}

