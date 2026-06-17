
void FUN_36029960(void)

{
  int iVar1;
  int in_EAX;
  char *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x18) + 0x10);
  pcVar2 = StringDuplicate(&DAT_3622539c);
  StringFree((char *)*puVar3);
  *puVar3 = pcVar2;
  iVar1 = *(int *)(in_EAX + 0x18);
  pcVar2 = Translate(s_ETRSNone_362253a4,4);
  pcVar2 = StringDuplicate(pcVar2);
  StringFree(*(char **)(iVar1 + 0x14));
  *(char **)(iVar1 + 0x14) = pcVar2;
  return;
}

