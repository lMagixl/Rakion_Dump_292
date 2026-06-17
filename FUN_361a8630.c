
void __thiscall FUN_361a8630(void *this,int *param_1,_String_base *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  _String_base *p_Var9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  uVar10 = *(uint *)((int)this + 0x24);
  if (uVar10 <= *(uint *)((int)this + 0xc) >> 2) {
    if (*(int *)((int)this + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (uVar10 < iVar3 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar10) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
      }
      *(int *)((int)this + 0x20) = iVar3 * 2 + -3;
      FUN_361a75f0((void *)((int)this + 0x10),iVar3 * 2 - 1);
    }
    uVar10 = (*(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1)) - 1;
    piVar4 = *(int **)(*(int *)((int)this + 0x14) + uVar10 * 4);
    if (piVar4 != *(int **)(*(int *)((int)this + 0x14) + 4 + uVar10 * 4)) {
      do {
        uVar12 = piVar4[7];
        uVar11 = 0xdeadbeef;
        if (uVar12 != 0) {
          iVar3 = (uVar12 >> 4) + 1;
          uVar8 = 0;
          do {
            if ((uint)piVar4[8] < 0x10) {
              piVar5 = piVar4 + 3;
            }
            else {
              piVar5 = (int *)piVar4[3];
            }
            pcVar7 = (char *)((int)piVar5 + uVar8);
            uVar8 = uVar8 + iVar3;
            uVar11 = uVar11 + (int)*pcVar7;
          } while (uVar8 <= uVar12 - iVar3);
        }
        if ((uVar11 & *(uint *)((int)this + 0x20)) == uVar10) {
          piVar5 = (int *)*piVar4;
        }
        else {
          piVar5 = (int *)*piVar4;
          if (piVar5 != *(int **)((int)this + 8)) {
            piVar1 = *(int **)(*(int *)((int)this + 0x14) + uVar10 * 4);
            uVar12 = uVar10;
            while ((piVar4 == piVar1 &&
                   (*(int **)(*(int *)((int)this + 0x14) + uVar12 * 4) = piVar5, uVar12 != 0))) {
              uVar12 = uVar12 - 1;
              piVar1 = *(int **)(*(int *)((int)this + 0x14) + uVar12 * 4);
            }
            FUN_361a8510((void *)((int)this + 4),*(int *)((int)this + 8),(void *)((int)this + 4),
                         piVar4,piVar5,0);
            piVar4 = *(int **)(*(int *)((int)this + 8) + 4);
            *(int *)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x24) * 4) =
                 *(int *)((int)this + 8);
          }
          for (uVar12 = *(uint *)((int)this + 0x24);
              (uVar10 < uVar12 &&
              (*(int *)(*(int *)((int)this + 0x14) + uVar12 * 4) == *(int *)((int)this + 8)));
              uVar12 = uVar12 - 1) {
            *(int **)(*(int *)((int)this + 0x14) + uVar12 * 4) = piVar4;
          }
          if (piVar5 == *(int **)((int)this + 8)) break;
        }
        piVar4 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 0x14) + 4 + uVar10 * 4));
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  uVar10 = *(uint *)(param_2 + 0x14);
  uVar12 = 0xdeadbeef;
  if (uVar10 != 0) {
    iVar3 = (uVar10 >> 4) + 1;
    uVar11 = 0;
    do {
      p_Var9 = param_2 + 4;
      if (0xf < *(uint *)(param_2 + 0x18)) {
        p_Var9 = *(_String_base **)(param_2 + 4);
      }
      p_Var9 = p_Var9 + uVar11;
      uVar11 = uVar11 + iVar3;
      uVar12 = uVar12 + (int)(char)*p_Var9;
    } while (uVar11 <= uVar10 - iVar3);
  }
  uVar12 = *(uint *)((int)this + 0x20) & uVar12;
  if (*(uint *)((int)this + 0x24) <= uVar12) {
    uVar12 = uVar12 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  iVar3 = uVar12 * 4;
  puVar13 = *(undefined4 **)(iVar3 + 4 + *(int *)((int)this + 0x14));
  if (puVar13 != *(undefined4 **)(iVar3 + *(int *)((int)this + 0x14))) {
    do {
      puVar13 = (undefined4 *)puVar13[1];
      uVar10 = puVar13[7];
      if ((uint)puVar13[8] < 0x10) {
        pcVar7 = (char *)(puVar13 + 3);
      }
      else {
        pcVar7 = (char *)puVar13[3];
      }
      uVar11 = *(uint *)(param_2 + 0x14);
      if (uVar11 == 0) {
LAB_361a8861:
        if (uVar10 <= uVar11) {
          uVar8 = (uint)(uVar11 != uVar10);
          goto LAB_361a886e;
        }
      }
      else {
        uVar8 = uVar10;
        if (uVar11 < uVar10) {
          uVar8 = uVar11;
        }
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          p_Var9 = param_2 + 4;
        }
        else {
          p_Var9 = *(_String_base **)(param_2 + 4);
        }
        uVar8 = _strnicmp((char *)p_Var9,pcVar7,uVar8);
        if (uVar8 == 0) goto LAB_361a8861;
LAB_361a886e:
        if (-1 < (int)uVar8) {
          uVar10 = *(uint *)(param_2 + 0x14);
          if (*(uint *)(param_2 + 0x18) < 0x10) {
            p_Var9 = param_2 + 4;
          }
          else {
            p_Var9 = *(_String_base **)(param_2 + 4);
          }
          uVar11 = puVar13[7];
          if (uVar11 == 0) {
LAB_361a8946:
            if (uVar10 <= uVar11) {
              uVar8 = (uint)(uVar11 != uVar10);
              goto LAB_361a8953;
            }
          }
          else {
            uVar8 = uVar11;
            if (uVar10 <= uVar11) {
              uVar8 = uVar10;
            }
            if ((uint)puVar13[8] < 0x10) {
              pcVar7 = (char *)(puVar13 + 3);
            }
            else {
              pcVar7 = (char *)puVar13[3];
            }
            uVar8 = _strnicmp(pcVar7,(char *)p_Var9,uVar8);
            if (uVar8 == 0) goto LAB_361a8946;
LAB_361a8953:
            if (-1 < (int)uVar8) {
              *param_1 = (int)puVar13;
              *(undefined1 *)(param_1 + 1) = 0;
              return;
            }
          }
          puVar13 = (undefined4 *)*puVar13;
          break;
        }
      }
    } while (puVar13 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3));
  }
  puVar6 = FUN_361a8020(puVar13,puVar13[1],param_2);
  FUN_361a6c10((void *)((int)this + 4),1);
  puVar13[1] = puVar6;
  *(undefined4 **)puVar6[1] = puVar6;
  puVar6 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  iVar2 = puVar13[1];
  while ((puVar13 == puVar6 && (*(int *)(*(int *)((int)this + 0x14) + iVar3) = iVar2, uVar12 != 0)))
  {
    uVar12 = uVar12 - 1;
    iVar3 = uVar12 * 4;
    puVar6 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  }
  *param_1 = iVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

