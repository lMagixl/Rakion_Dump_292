
void __fastcall FUN_3611cc50(void *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  void *this;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621863d;
  local_c = ExceptionList;
  this = (void *)(*(int *)((int)param_1 + 4) + 0x15c);
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this,iVar4);
      if (*(int *)(iVar1 + 4) == 4) {
LAB_3611cd4e:
        iVar1 = 0;
        piVar3 = (int *)FUN_360cafb0(this,iVar4);
        FUN_3611ca20(param_1,piVar3,iVar1);
      }
      else {
        iVar1 = FUN_360cafb0(this,iVar4);
        if ((*(int *)(iVar1 + 4) == 8) && (DAT_362fcb90 != 0)) goto LAB_3611cd4e;
        iVar1 = FUN_360cafb0(this,iVar4);
        if (*(int *)(iVar1 + 4) == 3) {
LAB_3611cd3c:
          pfVar2 = (float *)FUN_360cafb0(this,iVar4);
          FUN_3611a760(param_1,pfVar2);
        }
        else {
          iVar1 = FUN_360cafb0(this,iVar4);
          if ((*(int *)(iVar1 + 4) == 5) && (DAT_362fcb8c != 0)) goto LAB_3611cd3c;
          iVar1 = FUN_360cafb0(this,iVar4);
          if (*(int *)(iVar1 + 4) == 9) {
LAB_3611cd2a:
            pfVar2 = (float *)FUN_360cafb0(this,iVar4);
            FUN_3611ab90(param_1,pfVar2);
          }
          else {
            iVar1 = FUN_360cafb0(this,iVar4);
            if ((*(int *)(iVar1 + 4) == 10) && (DAT_362fcb8c != 0)) goto LAB_3611cd2a;
            iVar1 = FUN_360cafb0(this,iVar4);
            if (*(int *)(iVar1 + 4) == 0xb) {
              iVar1 = FUN_360cafb0(this,iVar4);
              FUN_3611afa0(param_1,iVar1);
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360caf20((int)this);
    } while (iVar4 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

