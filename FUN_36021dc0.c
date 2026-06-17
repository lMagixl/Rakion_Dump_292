
void __thiscall FUN_36021dc0(void *this,undefined4 *param_1)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  
  if (*(int *)((int)this + 0x28) == 0) {
    pFVar1 = fopen((char *)*param_1,&DAT_36224008);
    *(FILE **)((int)this + 0x28) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      piVar2 = _errno();
      pcVar3 = strerror(*piVar2);
      FatalError(&DAT_3622400c,pcVar3);
    }
  }
  return;
}

