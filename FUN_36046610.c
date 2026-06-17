
DWORD __thiscall FUN_36046610(void *this,DWORD param_1,DWORD param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  LPVOID lpBuffer;
  DWORD nNumberOfBytesToRead;
  LPOVERLAPPED lpOverlapped;
  
  DVar4 = param_1;
  if (*(int *)(param_1 + 0xc) < (int)param_2) {
    return 0xffffffff;
  }
  DVar5 = 0;
  iVar2 = FUN_36047b80((undefined4 *)((int)this + 4));
  if (0 < iVar2) {
    pDVar6 = *(DWORD **)((int)this + 8);
    do {
      if ((*pDVar6 == DVar4) && (pDVar6[1] == param_2)) {
        if (-1 < (int)DVar5) {
          FUN_36046370(this,DVar5);
          return DVar5;
        }
        break;
      }
      DVar5 = DVar5 + 1;
      pDVar6 = pDVar6 + 0xc;
    } while ((int)DVar5 < iVar2);
  }
  DVar5 = FUN_36047b90((undefined4 *)((int)this + 4),*(int *)((int)this + 0xc) + -0x28);
  pDVar6 = (DWORD *)(DVar5 * 0x30 + *(int *)((int)this + 8));
  if (param_3 != 0) {
    if (pDVar6[9] == 0) goto LAB_360466ba;
    bVar1 = FUN_360463a0(this,DVar5);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return 0xffffffff;
    }
  }
  if (pDVar6[9] != 0) {
    FUN_360463f0(this,DVar5);
  }
LAB_360466ba:
  lpOverlapped = (LPOVERLAPPED)(pDVar6 + 3);
  lpOverlapped->Internal = 0;
  pDVar6[4] = 0;
  pDVar6[5] = 0;
  pDVar6[6] = 0;
  pDVar6[7] = 0;
  pDVar6[5] = param_2;
  pDVar6[6] = 0;
  pDVar6[7] = pDVar6[8];
  *pDVar6 = DVar4;
  pDVar6[1] = param_2;
  pDVar6[9] = 1;
  param_1 = 0;
  if (DAT_362b2aa8 == 0) {
    SetFilePointer(*(HANDLE *)(DVar4 + 8),param_2,(PLONG)0x0,0);
    nNumberOfBytesToRead = *(DWORD *)this;
    lpBuffer = (LPVOID)pDVar6[2];
    lpOverlapped = (LPOVERLAPPED)0x0;
    hFile = *(HANDLE *)(DVar4 + 8);
  }
  else {
    nNumberOfBytesToRead = *(DWORD *)this;
    lpBuffer = (LPVOID)pDVar6[2];
    hFile = *(HANDLE *)(DVar4 + 8);
  }
  BVar3 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&param_1,lpOverlapped);
  if (BVar3 != 0) {
    pDVar6[9] = 0;
    FUN_36046370(this,DVar5);
    return DVar5;
  }
  DVar4 = GetLastError();
  if (DVar4 != 0x3e5) {
    FUN_3603fc40();
  }
  FUN_36046370(this,DVar5);
  return DVar5;
}

