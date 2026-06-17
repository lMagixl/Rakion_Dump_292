
void __thiscall FUN_361a6d90(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  **(undefined2 **)this = *(undefined2 *)(param_2 + 0x10);
  iVar2 = *(int *)this;
  *(byte **)this = (byte *)(iVar2 + 2);
  bVar1 = *(byte *)(param_1 + 0x14);
  *(byte *)(iVar2 + 2) = bVar1;
  iVar2 = *(int *)this;
  *(undefined4 **)this = (undefined4 *)(iVar2 + 1);
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar5 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 4);
  }
  puVar4 = (undefined4 *)(iVar2 + 1);
  for (uVar3 = (uint)(bVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = bVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  puVar5 = (undefined4 *)(*(int *)this + (uint)bVar1);
  *(undefined4 **)this = puVar5;
  *puVar5 = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(param_2 + 0x1c);
  iVar2 = *(int *)this;
  *(undefined4 **)this = (undefined4 *)(iVar2 + 6);
  *(undefined4 *)(iVar2 + 6) = *(undefined4 *)(param_2 + 0x20);
  iVar2 = *(int *)this;
  *(undefined4 **)this = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2 + 0x24);
  iVar2 = *(int *)this;
  *(byte **)this = (byte *)(iVar2 + 4);
  *(byte *)(iVar2 + 4) =
       (*(char *)(param_2 + 0x29) == '\0') - 1U & 2 | *(char *)(param_2 + 0x28) != '\0';
  *(int *)this = *(int *)this + 1;
  return;
}

