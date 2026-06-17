
/* public: virtual void __thiscall CTFileStream::HandleAccess(long,int) */

void __thiscall CTFileStream::HandleAccess(CTFileStream *this,long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40be0  2227  ?HandleAccess@CTFileStream@@UAEXJH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210cd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  lVar2 = param_1;
  local_4 = 0;
  if ((*(int *)(this + 0x5c) != 0) && (param_2 == 0)) {
    param_1 = (long)Translate(s_ETRSWrite_attempted_on_read_only_36227364,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
  }
  iVar1 = *(int *)(this + 0x58);
  if (iVar1 == -1) {
    FileCommitPage(this,param_1);
    FileCommitPage(this,lVar2 + 1);
  }
  else if (param_1 == iVar1 + 2) {
    FileDecommitPage(this,iVar1);
    FileCommitPage(this,lVar2);
    lVar2 = lVar2 + -1;
  }
  else {
    iVar3 = param_1 + 1;
    if (iVar1 == iVar3) {
      FileDecommitPage(this,iVar1 + 1);
      iVar3 = lVar2;
    }
    else {
      FileDecommitPage(this,iVar1);
      FileDecommitPage(this,*(int *)(this + 0x58) + 1);
      FileCommitPage(this,lVar2);
    }
    FileCommitPage(this,iVar3);
  }
  *(long *)(this + 0x58) = lVar2;
  if (*(int *)(this + 0x5c) != 0) {
    CTStream::ProtectPageFromWritting((CTStream *)this,*(long *)(this + 0x58));
    CTStream::ProtectPageFromWritting((CTStream *)this,*(int *)(this + 0x58) + 1);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

