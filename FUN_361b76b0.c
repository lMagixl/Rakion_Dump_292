
char FUN_361b76b0(void)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar8;
  undefined1 *puVar9;
  int iVar10;
  size_t _Count;
  undefined1 *puVar11;
  
  puVar11 = DAT_36382cf4;
  puVar9 = *(undefined1 **)(DAT_36382d10 + 4);
  if (puVar9 + 1 + (int)DAT_36382d08 < DAT_36382d14) {
    FUN_361b7340();
  }
  puVar4 = DAT_36382d14;
  iVar6 = DAT_36382d10;
  if (*(int *)(DAT_36382d10 + 0x20) == 0) {
    return ((int)DAT_36382d14 - (int)DAT_36382cf4 != 1) + '\x01';
  }
  puVar7 = DAT_36382d14 + (-1 - (int)DAT_36382cf4);
  puVar5 = puVar7;
  if (0 < (int)puVar7) {
    do {
      *puVar9 = *puVar11;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined1 *)0x0);
  }
  if (*(int *)(iVar6 + 0x24) == 2) {
    DAT_36382d08 = (undefined1 *)0x0;
LAB_361b786e:
    if (puVar7 == (undefined1 *)0x0) {
      cVar8 = '\x01';
      FUN_361b7670(DAT_36382d28);
      iVar6 = DAT_36382d10;
    }
    else {
      cVar8 = '\x02';
      *(undefined4 *)(iVar6 + 0x24) = 2;
    }
  }
  else {
    iVar10 = *(int *)(iVar6 + 0xc) - (int)puVar7;
    while (_Count = iVar10 - 1, (int)_Count < 1) {
      pvVar2 = *(void **)(iVar6 + 4);
      piVar1 = (int *)(iVar6 + 4);
      if (*(int *)(iVar6 + 0x14) == 0) {
        *piVar1 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar6 + 0xc);
        iVar10 = uVar3 * 2;
        if (iVar10 < 1) {
          iVar10 = (uVar3 >> 3) + uVar3;
        }
        *(int *)(iVar6 + 0xc) = iVar10;
        iVar10 = FUN_361b7380(pvVar2);
        iVar6 = DAT_36382d10;
        *piVar1 = iVar10;
      }
      if (*piVar1 == 0) {
        FUN_361b7340();
        iVar6 = DAT_36382d10;
      }
      DAT_36382d14 = puVar4 + (*piVar1 - (int)pvVar2);
      puVar4 = DAT_36382d14;
      iVar10 = *(int *)(iVar6 + 0xc) - (int)puVar7;
    }
    if (0x2000 < (int)_Count) {
      _Count = 0x2000;
    }
    if (*(int *)(iVar6 + 0x18) == 0) {
      DAT_36382d08 = (undefined1 *)fread(puVar7 + *(int *)(iVar6 + 4),1,_Count,(FILE *)DAT_36382d28)
      ;
      iVar6 = DAT_36382d10;
      if (DAT_36382d08 == (undefined1 *)0x0) {
        puVar9 = DAT_36382d08;
        if ((*(byte *)(DAT_36382d28 + 0xc) & 0x20) != 0) {
          FUN_361b7340();
          iVar6 = DAT_36382d10;
          puVar9 = DAT_36382d08;
        }
        goto LAB_361b786a;
      }
    }
    else {
      puVar9 = (undefined1 *)0x0;
      if (0 < (int)_Count) {
        do {
          iVar10 = getc((FILE *)DAT_36382d28);
          iVar6 = DAT_36382d10;
          puVar11 = puVar9;
          if (iVar10 == -1) break;
          if (iVar10 == 10) goto LAB_361b77f5;
          puVar11 = puVar9 + 1;
          puVar9[(int)(puVar7 + *(int *)(DAT_36382d10 + 4))] = (char)iVar10;
          puVar9 = puVar11;
        } while ((int)puVar11 < (int)_Count);
        if (iVar10 == 10) {
LAB_361b77f5:
          puVar11[(int)(puVar7 + *(int *)(iVar6 + 4))] = (char)iVar10;
          puVar11 = puVar11 + 1;
        }
        puVar9 = puVar11;
        if ((iVar10 == -1) && ((*(byte *)(DAT_36382d28 + 0xc) & 0x20) != 0)) {
          FUN_361b7340();
          iVar6 = DAT_36382d10;
        }
      }
LAB_361b786a:
      DAT_36382d08 = puVar9;
      if (DAT_36382d08 == (undefined1 *)0x0) goto LAB_361b786e;
    }
    cVar8 = '\0';
  }
  DAT_36382d08 = DAT_36382d08 + (int)puVar7;
  DAT_36382d08[*(int *)(iVar6 + 4)] = 0;
  DAT_36382d08[*(int *)(iVar6 + 4) + 1] = 0;
  DAT_36382cf4 = *(undefined1 **)(iVar6 + 4);
  return cVar8;
}

