
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36046b60(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  void *this;
  bool bVar5;
  char *local_120;
  CTSingleLock local_11c [12];
  undefined1 local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211497;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  if (((-1 < param_1) &&
      (ExceptionList = &local_c, iVar1 = FUN_36047be0(0x362bf40c), param_1 < iVar1)) &&
     (this = (void *)(param_1 * 100 + DAT_362bf410), *(int *)(param_1 * 100 + DAT_362bf410) != 0)) {
    if ((int)param_3 < *(int *)((int)this + 0x14)) {
      uVar2 = *(int *)((int)this + 0x14) - param_3;
      if ((int)uVar2 < (int)param_4) {
        param_4 = uVar2;
      }
      DAT_362befa4 = DAT_362befa4 + param_4;
      if ((*(byte *)((int)this + 0x20) & 1) == 0) {
        CTSingleLock::CTSingleLock(local_11c,(CTCriticalSection *)&DAT_362b8ddc,1);
        uVar2 = *(uint *)((int)this + 0x38);
        local_4 = 0;
        bVar5 = false;
        if (param_3 < uVar2) {
          FUN_3614ded0((int)this + 0x24);
          *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x18);
          uVar2 = *(uint *)((int)this + 0x38);
          *(undefined4 *)((int)this + 0x24) = 0;
          *(undefined4 *)((int)this + 0x28) = 0;
          bVar5 = param_3 < uVar2;
        }
        if (!bVar5 && param_3 != uVar2) {
          do {
            iVar1 = *(int *)((int)this + 0x28);
            while (iVar1 == 0) {
              iVar1 = FUN_360468f0((int)this);
              if (iVar1 < 1) goto LAB_36046ddd;
              *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x60);
              *(int *)((int)this + 0x28) = iVar1;
            }
            iVar1 = param_3 - *(int *)((int)this + 0x38);
            if (0x100 < iVar1) {
              iVar1 = 0x100;
            }
            *(int *)((int)this + 0x34) = iVar1;
            *(undefined1 **)((int)this + 0x30) = local_110;
            pcVar3 = (char *)FUN_3614e150((int *)((int)this + 0x24),2);
            if ((pcVar3 != (char *)0x0) && (pcVar3 != (char *)0x1)) {
              pcVar4 = Translate(s_ETRSError_seeking_in_zip_36227c78,4);
              CTString::CTString((CTString *)&local_120,pcVar4);
              local_4._0_1_ = 1;
              FUN_36045fa0(this,pcVar3,&local_120);
              local_4 = (uint)local_4._1_3_ << 8;
              StringFree(local_120);
            }
          } while (*(uint *)((int)this + 0x38) < param_3);
        }
        if (param_3 == *(uint *)((int)this + 0x38)) {
          *(uint *)((int)this + 0x34) = param_4;
          *(undefined4 **)((int)this + 0x30) = param_2;
          while (param_4 != 0) {
            iVar1 = *(int *)((int)this + 0x28);
            while (iVar1 == 0) {
              iVar1 = FUN_360468f0((int)this);
              if (iVar1 < 1) goto LAB_36046ddd;
              *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x60);
              *(int *)((int)this + 0x28) = iVar1;
            }
            pcVar3 = (char *)FUN_3614e150((int *)((int)this + 0x24),2);
            if ((pcVar3 != (char *)0x0) && (pcVar3 != (char *)0x1)) {
              pcVar4 = Translate(s_ETRSError_reading_from_zip_36227c94,4);
              CTString::CTString((CTString *)&local_120,pcVar4);
              local_4._0_1_ = 2;
              FUN_36045fa0(this,pcVar3,&local_120);
              local_4 = (uint)local_4._1_3_ << 8;
              StringFree(local_120);
            }
            param_4 = *(uint *)((int)this + 0x34);
          }
        }
        else {
          for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *param_2 = 0;
            param_2 = param_2 + 1;
          }
          for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)param_2 = 0;
            param_2 = (undefined4 *)((int)param_2 + 1);
          }
        }
LAB_36046ddd:
        local_4 = 0xffffffff;
        CTSingleLock::~CTSingleLock(local_11c);
      }
      else {
        iVar1 = FUN_36046780(*(void **)((int)this + 4),param_2,*(int *)((int)this + 0x18) + param_3,
                             param_4);
        if (2 < DAT_362bef9c) {
          CPrintF(s_stoRead___9d_>_9d_36227c60,param_4,iVar1);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

