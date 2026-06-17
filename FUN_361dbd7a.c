
undefined4 FUN_361dbd7a(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *extraout_ECX;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EBP;
  char *pcVar10;
  
  FUN_3620d000();
  **(undefined4 **)(unaff_EBP + 8) = 0;
  if (extraout_ECX[4] == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_361bf99c(0x10);
    *(undefined4 **)(unaff_EBP + -0x18) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_361dc132(puVar3);
      *(int **)(unaff_EBP + -0x14) = piVar4;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar4 == (int *)0x0) {
      uVar2 = 0x8007000e;
    }
    else {
      iVar5 = (**(code **)(*piVar4 + 0x18))(extraout_ECX[1] + 1 + extraout_ECX[4]);
      *(int *)(unaff_EBP + -0x10) = iVar5;
      if (iVar5 < 0) {
        (**(code **)(*piVar4 + 0x14))(1);
        uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
      }
      else {
        pcVar6 = (char *)(**(code **)(*piVar4 + 0xc))(piVar4);
        iVar5 = extraout_ECX[1];
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar5 != 0) {
          do {
            pcVar10 = *(char **)(*extraout_ECX + *(int *)(unaff_EBP + -0x10) * 4);
            if (pcVar10 != (char *)0x0) {
              pcVar7 = pcVar10;
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              uVar8 = (int)pcVar7 - (int)(pcVar10 + 1);
              *(uint *)(unaff_EBP + -0x18) = uVar8;
              pcVar7 = pcVar6;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar7 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar7 = pcVar7 + 1;
              }
              piVar4 = *(int **)(unaff_EBP + -0x14);
              pcVar6[uVar8] = '\n';
              pcVar6 = pcVar6 + uVar8 + 1;
            }
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          } while (*(uint *)(unaff_EBP + -0x10) < (uint)extraout_ECX[1]);
        }
        *pcVar6 = '\0';
        **(undefined4 **)(unaff_EBP + 8) = piVar4;
        uVar2 = 0;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

