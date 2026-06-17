
void FUN_36024d70(void)

{
  wchar_t *in_EAX;
  size_t sVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  sVar1 = wcslen(in_EAX);
  puVar2 = (undefined4 *)FUN_36024c90();
  uVar4 = sVar1 * 2 + 2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *(undefined4 *)in_EAX;
    in_EAX = in_EAX + 2;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar2 = (char)*in_EAX;
    in_EAX = (wchar_t *)((int)in_EAX + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}

