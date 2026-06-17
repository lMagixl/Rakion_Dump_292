
/* public: void __thiscall CImageInfo::ExpandEdges(long) */

void __thiscall CImageInfo::ExpandEdges(CImageInfo *this,long param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  int local_24;
  int local_1c;
  
                    /* 0x8c3b0  1587  ?ExpandEdges@CImageInfo@@QAEXJ@Z */
  if (((2 < *(int *)this) && (2 < *(int *)(this + 4))) && (*(int *)(this + 8) == 0x20)) {
    iVar3 = *(int *)(this + 4) * *(int *)this * 0x20;
    puVar1 = *(undefined4 **)(this + 0xc);
    uVar8 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    puVar4 = AllocMemory(uVar8);
    puVar10 = puVar1;
    puVar11 = puVar4;
    for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    local_1c = 0;
    if (0 < param_1) {
      do {
        bVar2 = true;
        local_2c = 1;
        if (1 < *(int *)(this + 4) + -1) {
          do {
            iVar3 = *(int *)this;
            local_24 = 1;
            if (1 < iVar3 + -1) {
              do {
                iVar3 = iVar3 * local_2c + local_24;
                if ((uint)puVar1[iVar3] >> 0x18 < 4) {
                  uVar5 = 0;
                  bVar2 = false;
                  local_3c = 0;
                  local_38 = 0;
                  local_34 = 0;
                  iVar9 = -1;
                  do {
                    iVar6 = -1;
                    do {
                      uVar7 = puVar1[*(int *)this * iVar9 + iVar6 + iVar3];
                      if (3 < uVar7 >> 0x18) {
                        local_3c = local_3c + (uVar7 & 0xff);
                        local_38 = local_38 + (((uVar7 & 0xff00) << 8) >> 0x10);
                        local_34 = local_34 + ((uVar7 & 0xff0000) >> 0x10);
                        uVar5 = uVar5 + 1;
                      }
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < 2);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < 2);
                  if (0 < (int)uVar5) {
                    uVar7 = (uint)CONCAT11((char)(local_3c / uVar5),(char)(local_38 / uVar5));
                    puVar4[iVar3] =
                         (uVar7 << 0x10) >> 0x18 | (uVar7 & 0xff) << 8 |
                         (local_34 / uVar5 & 0xff) << 0x10 | 0xff000000;
                  }
                }
                iVar3 = *(int *)this;
                local_24 = local_24 + 1;
              } while (local_24 < iVar3 + -1);
            }
            local_2c = local_2c + 1;
          } while (local_2c < *(int *)(this + 4) + -1);
        }
        puVar10 = puVar4;
        puVar11 = puVar1;
        for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      } while ((!bVar2) && (local_1c = local_1c + 1, local_1c < param_1));
    }
    FreeMemory(puVar4);
  }
  return;
}

