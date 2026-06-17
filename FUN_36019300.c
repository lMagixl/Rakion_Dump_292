
uint __thiscall FUN_36019300(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *local_4;
  
  uVar4 = rand_();
  puVar6 = (undefined4 *)(*(undefined4 **)((int)this + 0x18))[1];
  cVar1 = *(char *)((int)puVar6 + 0x11);
  puVar2 = *(undefined4 **)((int)this + 0x18);
  while (cVar1 == '\0') {
    if ((uint)puVar6[3] < (uVar4 & 0xffff)) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar2;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar2 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x11);
  }
  puVar6 = *(undefined4 **)((int)this + 0x18);
  iVar7 = 0;
  uVar4 = 0;
  local_4 = puVar2;
  if (puVar2 != puVar6) {
    do {
      if (iVar7 == 0) {
        uVar4 = local_4[3];
        iVar7 = 1;
      }
      else if (local_4[3] == uVar4 + iVar7) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == param_1) {
        uVar4 = uVar4 ^ *(uint *)((int)this + 0x30);
        FUN_36019250(this,uVar4,param_1);
        return uVar4;
      }
      FUN_3600e990((int *)&local_4);
    } while (local_4 != *(undefined4 **)((int)this + 0x18));
  }
  puVar6 = (undefined4 *)*puVar6;
  iVar7 = 0;
  uVar4 = 0;
  while( true ) {
    if (puVar6 == puVar2) {
      *(undefined1 *)((int)this + 0x34) = 1;
      return 0;
    }
    if (iVar7 == 0) {
      uVar4 = puVar6[3];
      iVar7 = 1;
    }
    else if (puVar6[3] == uVar4 + iVar7) {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = 0;
    }
    if (iVar7 == param_1) break;
    if (*(char *)((int)puVar6 + 0x11) == '\0') {
      puVar5 = (undefined4 *)puVar6[2];
      if (*(char *)((int)puVar5 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x11);
        puVar6 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x11);
          puVar6 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar6[1] + 0x11);
        puVar3 = (undefined4 *)puVar6[1];
        puVar5 = puVar6;
        while ((puVar6 = puVar3, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar6[2]))) {
          cVar1 = *(char *)((int)puVar6[1] + 0x11);
          puVar3 = (undefined4 *)puVar6[1];
          puVar5 = puVar6;
        }
      }
    }
  }
  uVar4 = uVar4 ^ *(uint *)((int)this + 0x30);
  FUN_36019250(this,uVar4,param_1);
  return uVar4;
}

