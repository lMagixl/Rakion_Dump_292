
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_3603a960(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  CTString *this;
  int extraout_ECX;
  int iVar6;
  float10 extraout_ST0;
  char *pcVar7;
  double dVar8;
  char *pcStack_48;
  int iStack_44;
  int iStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  int local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_362105d0;
  pvStack_c = ExceptionList;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[0] = 0;
  local_24[5] = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_3603a830((int)param_1);
  pcVar7 = (char *)(iVar1 * 5);
  if (0 < iVar1) {
    piVar2 = *(int **)((int)param_1 + 0x18);
    iVar6 = iVar1;
    do {
      uVar5 = (uint)(*piVar2 != -1);
      if (piVar2[1] != -1) {
        uVar5 = uVar5 + 1;
      }
      if (piVar2[2] != -1) {
        uVar5 = uVar5 + 1;
      }
      if (piVar2[3] != -1) {
        uVar5 = uVar5 + 1;
      }
      if (piVar2[4] != -1) {
        uVar5 = uVar5 + 1;
      }
      piVar2 = piVar2 + 5;
      iVar6 = iVar6 + -1;
      local_24[uVar5] = local_24[uVar5] + 1;
    } while (iVar6 != 0);
  }
  pcStack_34 = pcVar7;
  iStack_30 = iVar1;
  iVar6 = FUN_3603a820((int)param_1);
  pcStack_38 = (char *)(((float)iVar6 / (float)(int)pcStack_34) * _DAT_36226670);
  CPrintF(&DAT_362265b0);
  FUN_3603a830((int)param_1);
  CPrintF(s_Compartments__d_362265b4);
  dVar8 = (double)(float)pcStack_38;
  uVar3 = FUN_3603a820((int)param_1);
  CPrintF(s_Slots__d__d___g____362265c8,uVar3,pcVar7,dVar8);
  iVar6 = 0;
  do {
    CPrintF(s_Compartments_with__d_used_slots___362265dc,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  CPrintF(&DAT_36226604);
  CPrintF(s_Dumping_compartments_usage__36226608);
  uVar5 = 0;
  iStack_44 = 0;
  if (0 < iVar1) {
    iStack_40 = 0;
    do {
      iVar6 = 0;
      iVar1 = *(int *)((int)param_1 + 0x18) + iStack_40;
      pcStack_48 = StringDuplicate(&DAT_36222fa0);
      uStack_4 = 0;
      CTString::PrintF(this,(char *)&pcStack_48,&DAT_36226628,uVar5);
      do {
        if (*(int *)(iVar1 + iVar6 * 4) == -1) {
          pcStack_3c = StringDuplicate(&DAT_36226630);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          CTString::operator+=((CTString *)&pcStack_48,(CTString *)&pcStack_3c);
          pcVar7 = pcStack_3c;
LAB_3603ab9e:
          uStack_4 = uStack_4 & 0xffffff00;
          StringFree(pcVar7);
        }
        else {
          uStack_2c = uVar5;
          iStack_28 = iVar6;
          FUN_3603a860(param_1,(int *)&uStack_2c);
          uVar4 = (**(code **)((int)param_1 + 4))();
          uVar4 = FUN_3603a840(param_1,uVar4);
          if (uVar4 != uVar5) {
            pcStack_34 = StringDuplicate(&DAT_36226638);
            uStack_4 = CONCAT31(uStack_4._1_3_,3);
            CTString::operator+=((CTString *)&pcStack_48,(CTString *)&pcStack_34);
            pcVar7 = pcStack_34;
            goto LAB_3603ab9e;
          }
          pcStack_38 = StringDuplicate(&DAT_36226634);
          uStack_4._0_1_ = 2;
          CTString::operator+=((CTString *)&pcStack_48,(CTString *)&pcStack_38);
          uStack_4 = (uint)uStack_4._1_3_ << 8;
          StringFree(pcStack_38);
          iStack_44 = iStack_44 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
      CPrintF(&DAT_3622663c);
      uStack_4 = 0xffffffff;
      StringFree(pcStack_48);
      uVar5 = uVar5 + 1;
      iStack_40 = iStack_40 + 0x14;
    } while ((int)uVar5 < iStack_30);
  }
  iVar1 = FUN_3603a820((int)param_1);
  dVar8 = (double)((extraout_ST0 / (float10)iVar1) * (float10)_DAT_36226670);
  uVar3 = FUN_3603a820(extraout_ECX);
  CPrintF(s__d__d___g____objects_are_in_own_c_36226640,iStack_44,uVar3,dVar8);
  ExceptionList = pvStack_c;
  return;
}

