
undefined4 __thiscall FUN_361dbc8b(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    puVar2 = (undefined4 *)FUN_361bf99c(*(int *)((int)this + 8) * 4 + 0x40);
    if (puVar2 != (undefined4 *)0x0) {
      if (*(undefined4 **)this != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)this;
        puVar9 = puVar2;
        for (uVar4 = *(uint *)((int)this + 4) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        operator_delete(*(void **)this);
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x10;
      *(undefined4 **)this = puVar2;
      goto LAB_361dbcd7;
    }
LAB_361dbcfc:
    uVar3 = 0x8007000e;
    *(undefined4 *)((int)this + 0xc) = 0x8007000e;
  }
  else {
LAB_361dbcd7:
    if (param_1 == (char *)0x0) {
      *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = 0;
    }
    else {
      pcVar7 = param_1;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = (int)pcVar7 - (int)(param_1 + 1);
      pcVar7 = (char *)FUN_361bf99c(uVar4 + 1);
      if (pcVar7 == (char *)0x0) goto LAB_361dbcfc;
      pcVar10 = pcVar7;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *param_1;
        param_1 = param_1 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar7[uVar4] = '\0';
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + uVar4;
      *(char **)(*(int *)this + *(int *)((int)this + 4) * 4) = pcVar7;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    uVar3 = 0;
  }
  return uVar3;
}

