
/* public: void __thiscall CTString::ReadUntilEOF_t(class CTStream &) */

void __thiscall CTString::ReadUntilEOF_t(CTString *this,CTStream *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  
                    /* 0x23900  2998  ?ReadUntilEOF_t@CTString@@QAEXAAVCTStream@@@Z */
  lVar3 = CTStream::GetStreamSize(param_1);
  lVar4 = CTStream::GetPos_t(param_1);
  uVar9 = lVar3 - lVar4;
  StringFree(*(char **)this);
  puVar5 = (undefined4 *)FUN_360232c0(uVar9);
  *(undefined4 **)this = puVar5;
  if (0 < (int)uVar9) {
    puVar10 = *(undefined4 **)(param_1 + 0x14);
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar9;
  }
  *(undefined1 *)(uVar9 + *(int *)this) = 0;
  pcVar7 = *(char **)this;
  cVar2 = *pcVar7;
  pcVar8 = pcVar7;
  while (cVar2 != '\0') {
    if (cVar2 != '\r') {
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    }
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = '\0';
  return;
}

