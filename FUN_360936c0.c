
int FUN_360936c0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  undefined3 extraout_var;
  
  iVar1 = *(int *)(in_EAX + 0x70);
  iVar2 = *(int *)(in_EAX + 0x6c);
  bVar3 = FUN_36098750(*(int *)(in_EAX + 0x78));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    return (iVar1 + 2) * iVar2 * 2;
  }
  return iVar1 * iVar2;
}

