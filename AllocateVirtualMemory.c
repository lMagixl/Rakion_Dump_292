
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTStream::AllocateVirtualMemory(unsigned long) */

void __thiscall CTStream::AllocateVirtualMemory(CTStream *this,ulong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  char *pcVar3;
  ulong uVar4;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3ebb0  1051  ?AllocateVirtualMemory@CTStream@@QAEXK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362109e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  pvVar2 = VirtualAlloc((LPVOID)0x0,param_1,0x2000,1);
  *(LPVOID *)(this + 0xc) = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    uVar4 = param_1;
    pcVar3 = Translate(s_ETRSVirtualAlloc_failed__d_byte__36227128,4);
    FatalError(pcVar3,uVar4);
    _DAT_00000000 = 0;
  }
  iVar1 = *(int *)(this + 0xc);
  *(ulong *)(this + 0x10) = iVar1 + param_1;
  *(int *)(this + 0x14) = iVar1;
  *(int *)(this + 0x1c) = iVar1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

