
/* public: __thiscall CTimer::CTimer(int) */

CTimer * __thiscall CTimer::CTimer(CTimer *this,int param_1)

{
  float fVar1;
  HANDLE hProcess;
  HANDLE hThread;
  DWORD DVar2;
  int iVar3;
  MMRESULT MVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x44fb0  283  ??0CTimer@@QAE@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362112a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTCriticalSection::CTCriticalSection((CTCriticalSection *)(this + 0x1c));
  local_4 = 0;
  CListHead::Clear((CListHead *)(this + 0x24));
  _pTimer = this;
  *(int *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x20) = 1000;
  hProcess = GetCurrentProcess();
  hThread = GetCurrentThread();
  DVar2 = GetPriorityClass(hProcess);
  iVar3 = GetThreadPriority(hThread);
  SetPriorityClass(hProcess,0x100);
  SetThreadPriority(hThread,0xf);
  local_4._0_1_ = 1;
  lVar7 = FUN_36044ac0();
  *(longlong *)this = lVar7;
  FUN_36030910();
  local_4 = (uint)local_4._1_3_ << 8;
  SetPriorityClass(hProcess,DVar2);
  SetThreadPriority(hThread,iVar3);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  if (*(int *)(this + 0x18) != 0) {
    MVar4 = timeSetEvent(9,0,FUN_36044f50,0,1);
    *(MMRESULT *)(this + 0x14) = MVar4;
    if (MVar4 == 0) {
      pcVar5 = Translate(s_ETRSCannot_initialize_multimedia_36227694,4);
      FatalError(pcVar5);
    }
    iVar6 = 3000;
    iVar3 = 1;
    DVar2 = 1000;
    do {
      fVar1 = *(float *)(this + 8);
      uVar8 = FUN_361bfd6c();
      Sleep((DWORD)uVar8);
      if (fVar1 != *(float *)(this + 8)) {
        if (iVar3 < 4) {
          ExceptionList = local_c;
          return this;
        }
        break;
      }
      Sleep(DVar2);
      iVar6 = iVar6 + 3000;
      iVar3 = iVar3 + 1;
      DVar2 = DVar2 + 1000;
    } while (iVar6 < 0x2329);
    pcVar5 = Translate(s_ETRSProblem_with_initializing_mu_362276c0,4);
    FatalError(pcVar5);
  }
  ExceptionList = local_c;
  return this;
}

