
void FUN_36182000(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_EDI;
  float afStack_30 [12];
  
  (*DAT_362c462c)();
  (*DAT_362c461c)();
  (*DAT_362c45f8)();
  (*DAT_362c45f4)();
  (*DAT_362c4678)(0x5c);
  (*DAT_362c4670)(0);
  (*DAT_362c4634)();
  iVar7 = FUN_361743e0((undefined4 *)(unaff_EDI + 0x100));
  iVar9 = 0;
  if (0 < iVar7) {
    iVar8 = 0;
    do {
      iVar2 = *(int *)(unaff_EDI + 0x104);
      uVar3 = *(undefined4 *)(iVar2 + 0x11c + iVar8);
      iVar4 = *(int *)(iVar2 + 0x134 + iVar8);
      FUN_36162680(afStack_30,(float *)&DAT_36300d18,(float *)(iVar2 + iVar8 + 0x48));
      FUN_3617d780();
      FUN_3617e390(unaff_EDI,iVar9);
      uVar6 = DAT_3630154c;
      puVar1 = (uint *)(*(int *)(unaff_EDI + 0x104) + 0x130 + iVar8);
      *puVar1 = *puVar1 | 8;
      uVar5 = *(undefined4 *)(iVar2 + iVar8 + 0x140);
      (*DAT_362c4690)(uVar6,uVar3);
      (*DAT_362c46a8)(0xff0000ff);
      (*DAT_362c46b8)();
      (*DAT_362c46a4)(iVar4 * 3,uVar5);
      FUN_3607acb0();
      *(uint *)(*(int *)(unaff_EDI + 0x104) + 0x130 + iVar8) =
           *(uint *)(*(int *)(unaff_EDI + 0x104) + 0x130 + iVar8) & 0xffffffe7;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x160;
    } while (iVar9 < iVar7);
  }
  (*DAT_362c4620)();
  (*DAT_362c4678)(0x5b);
  return;
}

