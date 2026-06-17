
void __thiscall FUN_36022150(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ee22;
  local_c = ExceptionList;
  if (this != (void *)0x0) {
    ExceptionList = &local_c;
    CTSingleLock::CTSingleLock(local_18,this,1);
    pcVar2 = param_1;
    local_4 = 0;
    if (*(FILE **)((int)this + 0x28) != (FILE *)0x0) {
      fprintf(*(FILE **)((int)this + 0x28),&DAT_36224018);
      fflush(*(FILE **)((int)this + 0x28));
    }
    if (DAT_362b8ee8 != 0) {
      param_1 = StringDuplicate(pcVar2);
      local_4._0_1_ = 1;
      CTString::operator+=((CTString *)&DAT_362b8ef0,(CTString *)&param_1);
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(param_1);
    }
    if (_bDedicatedServer != 0) {
      printf(&DAT_3622401c);
    }
    cVar1 = *pcVar2;
    pcVar3 = pcVar2;
    while (cVar1 != '\0') {
      if (*(int *)((int)this + 0xc) == *(int *)((int)this + 0x10) + *(int *)((int)this + 0x18)) {
        FUN_360220d0(this,1);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x10);
      }
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          FUN_360220d0(this,1);
          *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x10);
        }
        else {
          **(char **)((int)this + 0xc) = cVar1;
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        }
      }
      cVar1 = *pcVar3;
    }
    if (DAT_362b8eec != (code *)0x0) {
      StringDuplicate(pcVar2);
      (*DAT_362b8eec)();
    }
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_18);
  }
  ExceptionList = local_c;
  return;
}

