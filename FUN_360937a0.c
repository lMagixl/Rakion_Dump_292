
uint FUN_360937a0(void)

{
  int in_EAX;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  FUN_36093770();
  uVar1 = FUN_360936c0();
  pvVar2 = AllocMemory(uVar1 + 8);
  *(void **)(in_EAX + 100) = pvVar2;
  pvVar2 = AllocMemory(uVar1 + 8);
  *(void **)(in_EAX + 0x68) = pvVar2;
  puVar4 = *(undefined4 **)(in_EAX + 100);
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  puVar4 = *(undefined4 **)(in_EAX + 0x68);
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return uVar1;
}

