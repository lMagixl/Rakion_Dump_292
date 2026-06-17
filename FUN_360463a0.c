
bool __thiscall FUN_360463a0(void *this,DWORD param_1)

{
  int *piVar1;
  BOOL BVar2;
  
  if ((DAT_362b2aa8 != 0) && (-1 < (int)param_1)) {
    piVar1 = (int *)(param_1 * 0x30 + *(int *)((int)this + 8));
    if (*(int *)(param_1 * 0x30 + 0x24 + *(int *)((int)this + 8)) == 0) {
      return false;
    }
    BVar2 = GetOverlappedResult(*(HANDLE *)(*piVar1 + 8),(LPOVERLAPPED)(piVar1 + 3),&param_1,0);
    return (bool)('\x01' - (BVar2 != 0));
  }
  return true;
}

