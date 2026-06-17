
/* public: void __thiscall CTString::WriteToStreamShort(class CTStream *) */

void __thiscall CTString::WriteToStreamShort(CTString *this,CTStream *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
                    /* 0x249a0  3998  ?WriteToStreamShort@CTString@@QAEXPAVCTStream@@@Z */
  pcVar4 = *(char **)this;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = (int)pcVar4 - (int)pcVar1;
  **(short **)(param_1 + 0x14) = (short)uVar5;
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar3 + 2);
  if ((short)uVar5 != 0) {
    puVar7 = *(undefined4 **)this;
    puVar8 = (undefined4 *)(iVar3 + 2);
    for (uVar6 = (uVar5 & 0xffff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uVar5 & 0xffff);
  }
  return;
}

