
/* WARNING: Removing unreachable block (ram,0x361bbc34) */

void __thiscall FUN_361bbb50(void *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar7 = *(uint *)((int)this + 0x24);
  if (uVar7 <= *(uint *)((int)this + 0xc) >> 2) {
    if (*(int *)((int)this + 0x14) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (uVar7 < iVar4 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar7) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
      }
      *(int *)((int)this + 0x20) = iVar4 * 2 + -3;
      FUN_361bb920((void *)((int)this + 0x10),iVar4 * 2 - 1);
    }
    uVar7 = (*(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1)) - 1;
    puVar8 = *(undefined4 **)(uVar7 * 4 + *(int *)((int)this + 0x14));
    if (puVar8 != *(undefined4 **)(uVar7 * 4 + *(int *)((int)this + 0x14) + 4)) {
      do {
        if (((puVar8[2] ^ 0xdeadbeef) & *(uint *)((int)this + 0x20)) == uVar7) {
          puVar6 = (undefined4 *)*puVar8;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
          if (puVar6 != *(undefined4 **)((int)this + 8)) {
            puVar1 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar7 * 4);
            uVar5 = uVar7;
            while ((puVar8 == puVar1 &&
                   (*(undefined4 **)(*(int *)((int)this + 0x14) + uVar5 * 4) = puVar6, uVar5 != 0)))
            {
              uVar5 = uVar5 - 1;
              puVar1 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar5 * 4);
            }
            iVar4 = *(int *)((int)this + 8);
            *(undefined4 **)puVar8[1] = puVar6;
            *(int *)puVar6[1] = iVar4;
            **(undefined4 **)(iVar4 + 4) = puVar8;
            uVar2 = *(undefined4 *)(iVar4 + 4);
            *(undefined4 *)(iVar4 + 4) = puVar6[1];
            puVar6[1] = puVar8[1];
            puVar8[1] = uVar2;
            puVar8 = *(undefined4 **)(*(int *)((int)this + 8) + 4);
            *(int *)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x24) * 4) =
                 *(int *)((int)this + 8);
          }
          for (uVar5 = *(uint *)((int)this + 0x24);
              (uVar7 < uVar5 &&
              (*(int *)(*(int *)((int)this + 0x14) + uVar5 * 4) == *(int *)((int)this + 8)));
              uVar5 = uVar5 - 1) {
            *(undefined4 **)(*(int *)((int)this + 0x14) + uVar5 * 4) = puVar8;
          }
          if (puVar6 == *(undefined4 **)((int)this + 8)) break;
        }
        puVar8 = puVar6;
      } while (puVar6 != *(undefined4 **)(uVar7 * 4 + 4 + *(int *)((int)this + 0x14)));
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  uVar7 = *param_2;
  uVar5 = (uVar7 ^ 0xdeadbeef) & *(uint *)((int)this + 0x20);
  if (*(uint *)((int)this + 0x24) <= uVar5) {
    uVar5 = uVar5 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  iVar4 = uVar5 * 4;
  puVar8 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + iVar4);
  if (puVar8 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar4)) {
    do {
      puVar8 = (undefined4 *)puVar8[1];
      if ((int)puVar8[2] <= (int)uVar7) {
        if ((int)uVar7 <= (int)puVar8[2]) {
          *param_1 = (int)puVar8;
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
        puVar8 = (undefined4 *)*puVar8;
        break;
      }
    } while (puVar8 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar4));
  }
  puVar6 = FUN_361bb190(puVar8,puVar8[1],param_2);
  FUN_361bad00((void *)((int)this + 4),1);
  puVar8[1] = puVar6;
  *(undefined4 **)puVar6[1] = puVar6;
  puVar6 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar4);
  iVar3 = puVar8[1];
  while ((puVar8 == puVar6 && (*(int *)(*(int *)((int)this + 0x14) + iVar4) = iVar3, uVar5 != 0))) {
    uVar5 = uVar5 - 1;
    iVar4 = uVar5 * 4;
    puVar6 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar4);
  }
  *param_1 = iVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

