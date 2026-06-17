
/* public: void __thiscall CCommunicationInterface::Client_Init_t(char *) */

void __thiscall CCommunicationInterface::Client_Init_t(CCommunicationInterface *this,char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfda20  1322  ?Client_Init_t@CCommunicationInterface@@QAEXPAD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621741c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  pcVar3 = param_1;
  local_4 = 0;
  pcVar1 = StringDuplicate(param_1);
  param_1 = pcVar1;
  uVar2 = StringToAddress((CTString *)&param_1);
  StringFree(pcVar1);
  if (uVar2 == 0xffffffff) {
    pcVar1 = Translate(s_ETRSHost___s__not_found__3623591c,4);
    ThrowF_t(pcVar1,pcVar3);
  }
  Client_Init_t(this,uVar2);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

