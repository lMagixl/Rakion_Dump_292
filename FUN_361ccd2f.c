
uint __thiscall FUN_361ccd2f(void *this,char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  uint local_c;
  uint local_8;
  
  pcVar10 = param_1;
  while ((*pcVar10 != '\0' && (iVar2 = isalpha((int)*pcVar10), iVar2 != 0))) {
    pcVar10 = pcVar10 + 1;
  }
  cVar1 = *pcVar10;
  pcVar4 = pcVar10;
  while ((cVar1 != '\0' && (iVar2 = isdigit((int)*pcVar4), iVar2 != 0))) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  bVar7 = *pcVar10 != '\0';
  bVar9 = true;
  local_8 = 0;
  local_c = 0;
  if ((*(int *)((int)this + 0xac) != 0) && (*pcVar4 == '_')) {
    iVar2 = 6;
    bVar8 = true;
    pcVar5 = pcVar4;
    pcVar6 = &DAT_36249780;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar8);
    if (bVar8) {
      local_c = 0x2000000;
      pcVar4 = pcVar4 + 5;
    }
    else {
      iVar2 = 5;
      bVar8 = true;
      pcVar5 = pcVar4;
      pcVar6 = &DAT_36249778;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        local_c = 0x4000000;
        pcVar4 = pcVar4 + 4;
      }
      else {
        iVar2 = 4;
        bVar8 = true;
        iVar3 = iVar2;
        pcVar5 = pcVar4;
        pcVar6 = &DAT_36249774;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          local_c = 0x7000000;
        }
        else {
          bVar8 = true;
          iVar3 = iVar2;
          pcVar5 = pcVar4;
          pcVar6 = &DAT_36249770;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar8 = *pcVar5 == *pcVar6;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar8);
          if (!bVar8) {
            bVar8 = true;
            iVar3 = iVar2;
            pcVar5 = pcVar4;
            pcVar6 = &DAT_3624976c;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pcVar5 == *pcVar6;
              pcVar5 = pcVar5 + 1;
              pcVar6 = pcVar6 + 1;
            } while (bVar8);
            if (!bVar8) {
              bVar8 = true;
              iVar3 = iVar2;
              pcVar5 = pcVar4;
              pcVar6 = &DAT_36249768;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar8 = *pcVar5 == *pcVar6;
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar8);
              if (!bVar8) {
                bVar8 = true;
                pcVar5 = pcVar4;
                pcVar6 = &DAT_36249764;
                do {
                  if (iVar2 == 0) break;
                  iVar2 = iVar2 + -1;
                  bVar8 = *pcVar5 == *pcVar6;
                  pcVar5 = pcVar5 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (bVar8);
                if (!bVar8) goto LAB_361cce47;
              }
              local_c = 0xa000000;
              goto LAB_361cce44;
            }
          }
          local_c = 0x9000000;
        }
LAB_361cce44:
        pcVar4 = pcVar4 + 3;
      }
    }
  }
LAB_361cce47:
  if ((bVar7) && (local_8 = atoi(pcVar10), (local_8 & 0xffffe000) != 0)) {
    bVar9 = false;
  }
  if ((*pcVar4 == '\0') && (bVar9)) {
    if (param_3 != 0) {
      iVar2 = 2;
      bVar9 = true;
      pcVar10 = &DAT_36249758;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *param_1 == *pcVar10;
        param_1 = param_1 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        local_8 = local_c | param_2;
LAB_361cd067:
        return local_8 | 0x20000000;
      }
      goto LAB_361cd06e;
    }
    cVar1 = *pcVar10;
    *pcVar10 = '\0';
    if (*(int *)((int)this + 0xac) == 0) {
      iVar2 = 5;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = &DAT_3624974c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        return 0x40000000;
      }
      iVar2 = 5;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249744;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        return 0x40000002;
      }
      iVar2 = 5;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = &DAT_3624973c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (!bVar7)) {
        return 0x40000001;
      }
      iVar2 = 2;
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249760;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) goto LAB_361ccf9a;
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = &DAT_3624975c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_8;
      }
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249758;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) goto LAB_361cd067;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249738;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) goto LAB_361ccff3;
      iVar2 = 3;
      bVar9 = true;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249734;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_8 | 0x50000000;
      }
      iVar2 = 3;
      bVar9 = true;
      pcVar4 = &DAT_36249730;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *param_1 == *pcVar4;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_8 | 0x60000000;
      }
    }
    else {
      iVar2 = 2;
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249760;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        local_8 = local_c | local_8;
LAB_361ccf9a:
        return local_8 | 0x10000000;
      }
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = &DAT_3624975c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        return local_c | local_8;
      }
      bVar9 = true;
      iVar3 = iVar2;
      pcVar4 = param_1;
      pcVar5 = &DAT_36249758;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar9 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        local_8 = local_c | local_8;
        goto LAB_361cd067;
      }
      bVar9 = true;
      pcVar4 = &DAT_36249754;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar9 = *param_1 == *pcVar4;
        param_1 = param_1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar9);
      if ((bVar9) && (bVar7)) {
        local_8 = local_c | local_8;
LAB_361ccff3:
        return local_8 | 0x30000000;
      }
    }
    *pcVar10 = cVar1;
  }
  else {
LAB_361cd06e:
    if (param_3 != 0) {
      if ((param_2 & 0x2000) == 0) {
        pcVar10 = s_invalid_register___s__d___362496d8;
      }
      else {
        pcVar10 = s_invalid_register___s_a0_x____d___362496f4;
      }
      FUN_361cc398((int)this,pcVar10);
      goto LAB_361cd0ba;
    }
  }
  FUN_361cc398((int)this,s_invalid_register___s__36249718);
LAB_361cd0ba:
  *(undefined4 *)((int)this + 0x98) = 1;
  return 0;
}

