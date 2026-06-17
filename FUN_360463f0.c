
void __thiscall FUN_360463f0(void *this,DWORD param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  
  if (-1 < (int)param_1) {
    piVar3 = (int *)(param_1 * 0x30 + *(int *)((int)this + 8));
    FUN_36046370(this,param_1);
    if (piVar3[9] != 0) {
      while( true ) {
        if ((DAT_362b2aa8 == 0) ||
           (BVar1 = GetOverlappedResult(*(HANDLE *)(*piVar3 + 8),(LPOVERLAPPED)(piVar3 + 3),&param_1
                                        ,1), BVar1 != 0)) goto LAB_3604648d;
        DVar2 = GetLastError();
        if (DVar2 == 0x26) break;
        if ((DVar2 != 0x3e5) && (DVar2 != 0x3e4)) {
          iVar4 = *piVar3;
          FUN_3603fc40();
          piVar3[9] = 0;
          ThrowF_t(s_Error_reading_from_zip__362279ec,iVar4);
        }
      }
      param_1 = *(DWORD *)this;
LAB_3604648d:
      piVar3[9] = 0;
      DAT_362befa0 = DAT_362befa0 + param_1;
    }
  }
  return;
}

