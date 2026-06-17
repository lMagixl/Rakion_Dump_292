
/* public: class CAbsTimeInfo * __thiscall CAOTime::Find(unsigned long) */

CAbsTimeInfo * __thiscall CAOTime::Find(CAOTime *this,ulong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x19eb10  1627  ?Find@CAOTime@@QAEPAVCAbsTimeInfo@@K@Z */
  if (*(int *)(this + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(this + 0xc);
    do {
      if (*(ulong *)(*piVar2 + 4) == param_1) {
        return (CAbsTimeInfo *)(*(int **)(this + 0xc))[iVar3];
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  return (CAbsTimeInfo *)0x0;
}

