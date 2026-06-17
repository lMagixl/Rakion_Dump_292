
void __cdecl FUN_361b9660(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar1 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    cVar2 = param_1[iVar1];
  }
  FUN_361b9510((int)param_1,iVar3);
  return;
}

