
/* public: void __thiscall CTString::ReadFromStreamShort(class CTStream *) */

void __thiscall CTString::ReadFromStreamShort(CTString *this,CTStream *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
                    /* 0x24a00  2962  ?ReadFromStreamShort@CTString@@QAEXPAVCTStream@@@Z */
  uVar1 = **(ushort **)(param_1 + 0x14);
  *(ushort **)(param_1 + 0x14) = *(ushort **)(param_1 + 0x14) + 1;
  StringFree(*(char **)this);
  uVar4 = (uint)uVar1;
  puVar2 = (undefined4 *)FUN_360232c0(uVar4);
  *(undefined4 **)this = puVar2;
  if (uVar1 != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
    *(undefined1 *)(uVar4 + *(int *)this) = 0;
    return;
  }
  **(undefined1 **)this = 0;
  return;
}

