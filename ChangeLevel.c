
/* public: void __thiscall CNetworkLibrary::ChangeLevel(class CTFileName const &,int,long) */

void __thiscall
CNetworkLibrary::ChangeLevel(CNetworkLibrary *this,CTFileName *param_1,int param_2,long param_3)

{
  char *pcVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf3b70  1154  ?ChangeLevel@CNetworkLibrary@@QAEXABVCTFileName@@HJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621662a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  local_4 = 0;
  if (DAT_362cce88 == 0) {
    pcVar1 = StringDuplicate(*(char **)param_1);
    StringFree(*(char **)(this + 0x97c));
    *(char **)(this + 0x97c) = pcVar1;
    *(undefined4 *)(this + 0x980) = *(undefined4 *)(param_1 + 4);
    *(int *)(this + 0x984) = param_2;
    *(long *)(this + 0x988) = param_3;
    DAT_362cce88 = 1;
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

