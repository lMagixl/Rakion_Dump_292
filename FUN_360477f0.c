
int __cdecl FUN_360477f0(CTString *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  uint local_3c;
  char *local_38;
  CTSingleLock local_34 [12];
  undefined4 local_28 [5];
  short local_12;
  short local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621157a;
  local_c = ExceptionList;
  piVar11 = (int *)0x0;
  iVar8 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_36047bd0(0x362bf3fc);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar3 = CTString::operator==((CTString *)(DAT_362bf400 + 4 + iVar2),param_1);
      if (iVar3 != 0) {
        piVar11 = (int *)(iVar8 * 0x20 + DAT_362bf400);
        break;
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + 0x20;
      iVar3 = FUN_36047bd0(0x362bf3fc);
    } while (iVar8 < iVar3);
  }
  if (1 < DAT_362bef9c) {
    CPrintF(s_zipOpen____4d___s_36227bd8,iVar8,*(undefined4 *)param_1);
  }
  if (piVar11 == (int *)0x0) {
    uVar12 = *(undefined4 *)param_1;
    pcVar4 = Translate(s_ETRSFile_not_found___s_36227bf0,4);
    ThrowF_t(pcVar4,uVar12);
  }
  iVar8 = 1;
  iVar2 = FUN_36047be0(0x362bf40c);
  piVar9 = DAT_362bf410;
  if (1 < iVar2) {
    do {
      if (piVar9[0x19] == 0) goto LAB_36047916;
      iVar8 = iVar8 + 1;
      iVar2 = FUN_36047be0(0x362bf40c);
      piVar9 = piVar9 + 0x19;
    } while (iVar8 < iVar2);
  }
  iVar8 = FUN_36047be0(0x362bf40c);
  iVar10 = DAT_362bf414 + 1;
  DAT_362bf414 = iVar10;
  iVar3 = FUN_36047c50((undefined4 *)&DAT_362bf40c);
  iVar2 = DAT_362bf418;
  if (iVar3 < iVar10) {
    lVar1 = (longlong)DAT_362bf418;
    iVar3 = FUN_36047c50((undefined4 *)&DAT_362bf40c);
    FUN_360485c0(&DAT_362bf40c,iVar3 + iVar2 * ((int)(0 / lVar1) + 1));
  }
LAB_36047916:
  piVar9 = DAT_362bf410 + iVar8 * 0x19;
  piVar9[1] = *piVar11;
  pcVar4 = StringDuplicate((char *)piVar11[1]);
  StringFree((char *)piVar9[2]);
  piVar9[2] = (int)pcVar4;
  piVar9[3] = piVar11[2];
  piVar9[4] = piVar11[3];
  piVar9[5] = piVar11[4];
  piVar9[6] = piVar11[5];
  piVar9[7] = piVar11[6];
  piVar9[8] = piVar11[7];
  local_38 = (char *)piVar9[1];
  local_3c = piVar11[7] & 4;
  if (local_3c == 0) {
    iVar2 = piVar9[6];
  }
  else {
    uVar7 = piVar9[6];
    iVar2 = FUN_36046780(local_38,&local_3c,uVar7,4);
    uVar7 = uVar7 + iVar2;
    if (local_3c != 0x4034b50) {
      iVar2 = piVar9[3];
      iVar3 = piVar9[2];
      uVar12 = **(undefined4 **)piVar9[1];
      pcVar4 = Translate(s_ETRS_s__s__Wrong_signature_for___36227c08,4);
      ThrowF_t(pcVar4,uVar12,iVar3,iVar2);
    }
    iVar2 = FUN_36046780(local_38,local_28,uVar7,0x1a);
    iVar2 = (int)local_12 + (int)local_10 + uVar7 + iVar2;
    piVar11[7] = piVar11[7] & 0xfffffffb;
    piVar11[5] = iVar2;
    piVar9[6] = iVar2;
    piVar9[8] = piVar11[7];
  }
  piVar9[0x17] = iVar2;
  pvVar5 = AllocMemory(0x400);
  piVar9[0x18] = (int)pvVar5;
  CTSingleLock::CTSingleLock(local_34,(CTCriticalSection *)&DAT_362b8ddc,1);
  local_4 = 0;
  piVar9[0xc] = 0;
  piVar9[0xd] = 0;
  piVar9[9] = 0;
  piVar9[10] = 0;
  piVar9[0x11] = 0;
  piVar9[0x12] = 0;
  pcVar4 = (char *)FUN_3614df20((int)(piVar9 + 9),0xfffffff1,s_1_2_1_36227c3c,0x38);
  if (pcVar4 != (char *)0x0) {
    FreeMemory((void *)piVar9[0x18]);
    piVar9[0x18] = 0;
    pcVar6 = Translate(s_ETRSCannot_init_inflation_36227c44,4);
    pcVar6 = StringDuplicate(pcVar6);
    local_4._0_1_ = 1;
    local_38 = pcVar6;
    FUN_36045fa0(piVar9,pcVar4,&local_38);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(pcVar6);
  }
  *piVar9 = 1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_34);
  ExceptionList = local_c;
  return iVar8;
}

