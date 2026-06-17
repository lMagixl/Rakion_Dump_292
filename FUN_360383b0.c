
void FUN_360383b0(void)

{
  CTString *this;
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined3 extraout_var_00;
  undefined8 uVar6;
  int local_20 [2];
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_36210322;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)_pShell,1);
  FUN_36039a80(local_20,_pShell + 8);
  local_4 = CONCAT31(local_4._1_3_,2);
  bVar1 = FUN_36039ac0(local_20);
  iVar3 = CONCAT31(extraout_var,bVar1);
  do {
    if (iVar3 != 0) {
      local_4 = local_4 & 0xffffff00;
      CTSingleLock::~CTSingleLock(local_18);
      local_4 = 0xffffffff;
      CTString::~CTString((CTString *)&stack0x00000004);
      ExceptionList = local_c;
      return;
    }
    piVar2 = (int *)FUN_36039bd0(local_20);
    if ((*(byte *)(piVar2 + 5) & 2) != 0) {
      this = (CTString *)(piVar2 + 1);
      iVar3 = CTString::Matches(this,(CTString *)&stack0x00000004);
      if (iVar3 != 0) {
        piVar4 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*piVar2);
        if ((*(byte *)(piVar2 + 5) & 1) != 0) {
          CPrintF(s_const_36225edc);
        }
        if ((*(byte *)(piVar2 + 5) & 4) != 0) {
          CPrintF(s_persistent_36225ee4);
        }
        iVar3 = *piVar4;
        if (iVar3 == 2) {
          CPrintF(s_void__s_void__36225ef0);
        }
        else {
          if (iVar3 == 7) {
            uVar6 = CONCAT44(*(undefined4 *)piVar2[2],*(undefined4 *)this);
            pcVar5 = s_CTString__s_____s__36225f00;
            goto LAB_36038538;
          }
          if (iVar3 == 6) {
            CPrintF(s_FLOAT__s____g_36225f14,*(undefined4 *)this,(double)*(float *)piVar2[2]);
          }
          else if (iVar3 == 5) {
            CPrintF(s_INDEX__s____d__0x_08x__36225f24,*(undefined4 *)this,*(undefined4 *)piVar2[2]);
          }
          else if (iVar3 == 3) {
            piVar2 = (int *)thunk_FUN_36039b40(&DAT_362bec70,piVar4[2]);
            iVar3 = *piVar2;
            if (iVar3 == 6) {
              uVar6 = CONCAT44(piVar4[1],*(undefined4 *)this);
              pcVar5 = s_FLOAT__s__d__36225f3c;
            }
            else if (iVar3 == 5) {
              uVar6 = CONCAT44(piVar4[1],*(undefined4 *)this);
              pcVar5 = s_INDEX__s__d__36225f4c;
            }
            else {
              if (iVar3 != 7) goto LAB_36038540;
              uVar6 = CONCAT44(piVar4[1],*(undefined4 *)this);
              pcVar5 = s_CTString__s__d__36225f5c;
            }
LAB_36038538:
            CPrintF(pcVar5,uVar6);
          }
        }
LAB_36038540:
        iVar3 = FUN_36037b90(this);
        if (iVar3 == 0) {
          pcVar5 = Translate(s_ETRS_help_N_A_36225f6c,4);
          CPrintF(pcVar5);
        }
        CPrintF(&DAT_36225f7c);
      }
    }
    FUN_36039ab0(local_20);
    bVar1 = FUN_36039ac0(local_20);
    iVar3 = CONCAT31(extraout_var_00,bVar1);
  } while( true );
}

