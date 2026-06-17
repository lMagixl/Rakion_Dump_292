
void __thiscall FUN_36106fe0(void *this,CNetworkMessage *param_1)

{
  CNetworkMessage *pCVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)this;
  do {
    piVar3 = piVar2;
    if ((int *)*piVar3 == (int *)0x0) break;
    if (piVar3[2] == *(int *)(param_1 + 0x20)) {
      FUN_36106f40(param_1);
      return;
    }
    piVar2 = (int *)*piVar3;
  } while (*(int *)(param_1 + 0x20) <= piVar3[2]);
  pCVar1 = param_1 + 0x18;
  *(CNetworkMessage **)piVar3[1] = pCVar1;
  *(int *)(param_1 + 0x1c) = piVar3[1];
  *(int **)pCVar1 = piVar3;
  piVar3[1] = (int)pCVar1;
  return;
}

