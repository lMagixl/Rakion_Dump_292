
/* public: static int __cdecl CTStream::ExceptionFilter(unsigned long,struct _EXCEPTION_POINTERS *)
    */

int __cdecl CTStream::ExceptionFilter(ulong param_1,_EXCEPTION_POINTERS *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  CTSingleLock local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3fd30  1584  ?ExceptionFilter@CTStream@@SAHKPAU_EXCEPTION_POINTERS@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210baf;
  local_c = ExceptionList;
  if (param_1 != 0xc0000005) {
    return 0;
  }
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  uVar1 = param_2->ExceptionRecord->ExceptionInformation[1];
  local_4 = 0;
  piVar2 = (int *)*DAT_362befa8;
  do {
    piVar3 = piVar2;
    piVar2 = (int *)*piVar3;
    if (piVar2 == (int *)0x0) goto LAB_3603fdab;
  } while ((uVar1 < (uint)piVar3[2]) || ((uint)piVar3[3] <= uVar1));
  if (piVar3 + -1 != (int *)0x0) {
    uVar4 = (uVar1 - piVar3[2]) / DAT_362bef94;
    if ((uint)piVar3[6] < uVar1) {
      piVar3[6] = uVar1;
    }
    (**(code **)piVar3[-1])(uVar4,param_2->ExceptionRecord->ExceptionInformation[0] == 0);
    local_c = (void *)0xffffffff;
    CTSingleLock::~CTSingleLock((CTSingleLock *)&stack0xffffffe0);
    ExceptionList = pvStack_14;
    return -1;
  }
LAB_3603fdab:
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return 0;
}

