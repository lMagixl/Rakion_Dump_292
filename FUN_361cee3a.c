
undefined4 __thiscall FUN_361cee3a(void *this,uint *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  int local_1c;
  byte *local_14;
  
  puVar15 = param_1;
  if (param_2 < 0x28) {
    return 0x80004005;
  }
  uVar11 = *param_1;
  if (uVar11 < 0x28) {
    return 0x80004005;
  }
  puVar3 = (uint *)param_1[1];
  uVar5 = param_1[2];
  if ((int)uVar5 < 1) {
    uVar5 = -uVar5;
  }
  uVar2 = *(ushort *)((int)param_1 + 0xe);
  uVar6 = param_1[8];
  if ((uVar2 < 9) && (uVar6 == 0)) {
    uVar6 = 1 << ((byte)uVar2 & 0x1f);
  }
  uVar6 = uVar11 + uVar6 * 4;
  if (param_2 < uVar6) {
    return 0x80004005;
  }
  if ((short)param_1[3] != 1) {
    return 0x80004005;
  }
  if ((((int)param_1[2] < 0) && (param_1[4] != 0)) && (param_1[4] != 3)) {
    return 0x80004005;
  }
  if (param_1[4] < 3) {
    param_1 = (uint *)(uint)uVar2;
    if (((param_1 == (uint *)0x1) || (param_1 == (uint *)0x4)) || (param_1 == (uint *)0x8)) {
      param_2 = 0x29;
      goto LAB_361cf150;
    }
    if (param_1 == (uint *)&DAT_00000010) goto LAB_361cf140;
    if (param_1 == (uint *)&DAT_00000018) goto LAB_361ceff0;
    if (param_1 != (uint *)0x20) {
      return 0x80004005;
    }
  }
  else {
    if (param_1[4] != 3) {
      return 0x80004001;
    }
    if (uVar11 < 0x6c) {
      param_2 = 0;
      puVar18 = (uint *)(uVar11 + (int)param_1);
      uVar11 = puVar18[2];
      uVar14 = puVar18[1];
      uVar7 = *puVar18;
    }
    else {
      param_2 = param_1[0xd];
      uVar11 = param_1[0xc];
      uVar14 = param_1[0xb];
      uVar7 = param_1[10];
    }
    param_1 = (uint *)(uint)*(ushort *)((int)param_1 + 0xe);
    if (param_1 == (uint *)&DAT_00000010) {
      if (uVar11 == 0xff) {
        if (uVar14 != 0xff) {
          return 0x80004005;
        }
        if (uVar7 != 0xff) {
          return 0x80004005;
        }
        if (param_2 != 0xff00) {
          return 0x80004005;
        }
        param_2 = 0x33;
        goto LAB_361cf150;
      }
      if (uVar11 != 0x1f) {
        if (uVar11 == 0xf) {
          if (uVar14 != 0xf0) {
            return 0x80004005;
          }
          if (uVar7 != 0xf00) {
            return 0x80004005;
          }
          if (param_2 == 0xf000) {
            param_2 = 0x1a;
          }
          else {
            if (param_2 != 0) {
              return 0x80004005;
            }
            param_2 = 0x1e;
          }
        }
        else {
          if (uVar11 != 3) {
            return 0x80004005;
          }
          if (uVar14 != 0x1c) {
            return 0x80004005;
          }
          if (uVar7 != 0xe0) {
            return 0x80004005;
          }
          if (param_2 != 0xff00) {
            return 0x80004005;
          }
          param_2 = 0x1d;
        }
        goto LAB_361cf150;
      }
      if (uVar14 == 0x7e0) {
        if (uVar7 != 0xf800) {
          return 0x80004005;
        }
        if (param_2 != 0) {
          return 0x80004005;
        }
        param_2 = 0x17;
        goto LAB_361cf150;
      }
      if (uVar14 != 0x3e0) {
        return 0x80004005;
      }
      if (uVar7 != 0x7c00) {
        return 0x80004005;
      }
      if (param_2 != 0) {
        if (param_2 != 0x8000) {
          return 0x80004005;
        }
        param_2 = 0x19;
        goto LAB_361cf150;
      }
LAB_361cf140:
      param_2 = 0x18;
      goto LAB_361cf150;
    }
    if (param_1 == (uint *)&DAT_00000018) {
      if (uVar11 != 0xff) {
        return 0x80004005;
      }
      if (uVar14 != 0xff00) {
        return 0x80004005;
      }
      if (uVar7 != 0xff0000) {
        return 0x80004005;
      }
      if (param_2 != 0) {
        return 0x80004005;
      }
LAB_361ceff0:
      param_2 = 0x14;
      goto LAB_361cf150;
    }
    if (param_1 != (uint *)0x20) {
      return 0x80004005;
    }
    if (uVar11 != 0xff) {
      if (uVar11 == 0x3ff00000) {
        if (uVar14 != 0xffc00) {
          return 0x80004005;
        }
        if (uVar7 != 0x3ff) {
          return 0x80004005;
        }
        if (param_2 != 0xc0000000) {
          return 0x80004005;
        }
        param_2 = 0x1f;
      }
      else {
        if (uVar11 != 0) {
          return 0x80004005;
        }
        if (uVar14 != 0xffff0000) {
          return 0x80004005;
        }
        if (uVar7 != 0xffff) {
          return 0x80004005;
        }
        if (param_2 != 0) {
          return 0x80004005;
        }
        param_2 = 0x22;
      }
      goto LAB_361cf150;
    }
    if (uVar14 != 0xff00) {
      return 0x80004005;
    }
    if (uVar7 != 0xff0000) {
      return 0x80004005;
    }
    if (param_2 != 0) {
      if (param_2 != 0xff000000) {
        return 0x80004005;
      }
      param_2 = 0x15;
      goto LAB_361cf150;
    }
  }
  param_2 = 0x16;
LAB_361cf150:
  if ((*(int *)((int)this + 0x40) != 0) && (param_2 == 0x29)) {
    puVar18 = (uint *)puVar15[8];
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)(1 << ((byte)param_1 & 0x1f));
    }
    *(undefined4 *)((int)this + 0x3c) = 1;
    iVar8 = FUN_361bf99c(0x400);
    *(int *)((int)this + 8) = iVar8;
    if (iVar8 == 0) {
      return 0x8007000e;
    }
    param_1 = (uint *)0x0;
    puVar9 = (undefined1 *)(*puVar15 + (int)puVar15);
    if (puVar18 != (uint *)0x0) {
      do {
        iVar8 = (int)param_1 * 4;
        *(undefined1 *)(iVar8 + *(int *)((int)this + 8)) = puVar9[2];
        *(undefined1 *)(iVar8 + 1 + *(int *)((int)this + 8)) = puVar9[1];
        *(undefined1 *)(iVar8 + 2 + *(int *)((int)this + 8)) = *puVar9;
        *(undefined1 *)(iVar8 + 3 + *(int *)((int)this + 8)) = 0xff;
        param_1 = (uint *)((int)param_1 + 1);
        puVar9 = puVar9 + 4;
      } while (param_1 < puVar18);
    }
    for (; puVar18 < (uint *)0x100; puVar18 = (uint *)((int)puVar18 + 1)) {
      iVar8 = (int)puVar18 * 4;
      *(undefined1 *)(iVar8 + *(int *)((int)this + 8)) = 0xff;
      *(undefined1 *)(iVar8 + 1 + *(int *)((int)this + 8)) = 0xff;
      *(undefined1 *)(iVar8 + 2 + *(int *)((int)this + 8)) = 0xff;
      *(undefined1 *)(iVar8 + 3 + *(int *)((int)this + 8)) = 0xff;
    }
  }
  uVar2 = *(ushort *)((int)puVar15 + 0xe);
  puVar18 = puVar3;
  if (uVar2 == 1) {
    puVar10 = (uint *)((int)puVar3 + 7U >> 3);
  }
  else if (uVar2 == 4) {
    puVar10 = (uint *)((int)puVar3 + 1U >> 1);
  }
  else {
    puVar10 = (uint *)((uint)(uVar2 >> 3) * (int)puVar3);
    puVar18 = puVar10;
  }
  uVar14 = (int)puVar10 + 3U & 0xfffffffc;
  *(uint *)this = param_2;
  uVar11 = (int)puVar18 + 3U & 0xfffffffc;
  *(uint **)((int)this + 0xc) = puVar3;
  *(uint *)((int)this + 0x30) = uVar11;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(uint *)((int)this + 0x10) = uVar5;
  *(undefined4 *)((int)this + 0x14) = 1;
  if (*(int *)((int)this + 0x40) != 0) {
    if (((int)puVar15[2] < 0) && (7 < *(ushort *)((int)puVar15 + 0xe))) {
      *(undefined4 *)((int)this + 0x38) = 0;
      *(uint *)((int)this + 4) = uVar6 + (int)puVar15;
    }
    else {
      *(undefined4 *)((int)this + 0x38) = 1;
      pbVar12 = (byte *)FUN_361bf99c(uVar11 * uVar5);
      *(byte **)((int)this + 4) = pbVar12;
      if (pbVar12 == (byte *)0x0) {
        return 0x8007000e;
      }
      pbVar16 = (byte *)(uVar6 + (int)puVar15);
      iVar8 = *(int *)((int)this + 0x30);
      pbVar19 = pbVar12;
      local_1c = iVar8;
      if (-1 < (int)puVar15[2]) {
        pbVar19 = pbVar12 + (uVar5 - 1) * iVar8;
        local_1c = -iVar8;
      }
      pbVar13 = pbVar12 + iVar8 * uVar5;
      local_14 = pbVar19;
      if (puVar15[4] == 2) {
        while (pbVar12 <= pbVar19) {
          if (*pbVar16 == 0) {
            bVar4 = pbVar16[1];
            if (bVar4 == 0) {
              pbVar19 = local_14 + -*(int *)((int)this + 0x30);
              local_14 = pbVar19;
            }
            else if (bVar4 == 1) {
              pbVar19 = pbVar12 + -*(int *)((int)this + 0x30);
            }
            else if (bVar4 == 2) {
              pbVar13 = pbVar16 + 3;
              pbVar16 = pbVar16 + 2;
              pbVar19 = pbVar19 + ((uint)*pbVar16 - (uint)*pbVar13 * *(int *)((int)this + 0x30));
            }
            else {
              uVar11 = 0;
              if (bVar4 != 0) {
                do {
                  if ((uVar11 & 1) == 0) {
                    bVar4 = pbVar16[((int)uVar11 >> 1) + 2] >> 4;
                  }
                  else {
                    bVar4 = pbVar16[((int)uVar11 >> 1) + 2] & 0xf;
                  }
                  pbVar19[uVar11] = bVar4;
                  uVar11 = uVar11 + 1;
                } while ((int)uVar11 < (int)(uint)pbVar16[1]);
              }
              pbVar19 = pbVar19 + pbVar16[1];
              pbVar16 = pbVar16 + ((pbVar16[1] >> 1) + 1 & 0xfffffffe);
            }
          }
          else {
            uVar11 = 0;
            if (*pbVar16 != 0) {
              do {
                if ((uVar11 & 1) == 0) {
                  bVar4 = pbVar16[1] >> 4;
                }
                else {
                  bVar4 = pbVar16[1] & 0xf;
                }
                pbVar19[uVar11] = bVar4;
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (int)(uint)*pbVar16);
            }
            pbVar19 = pbVar19 + *pbVar16;
          }
          pbVar16 = pbVar16 + 2;
        }
      }
      else if (puVar15[4] == 1) {
        while (pbVar12 <= pbVar19) {
          bVar4 = *pbVar16;
          if (bVar4 == 0) {
            uVar11 = (uint)pbVar16[1];
            if (uVar11 == 0) {
              pbVar19 = local_14 + -*(int *)((int)this + 0x30);
              local_14 = pbVar19;
            }
            else if (uVar11 == 1) {
              pbVar19 = pbVar12 + -*(int *)((int)this + 0x30);
            }
            else {
              if (uVar11 != 2) {
                pbVar13 = pbVar16 + 2;
                pbVar17 = pbVar19;
                for (uVar5 = (uint)(pbVar16[1] >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
                  *(undefined4 *)pbVar17 = *(undefined4 *)pbVar13;
                  pbVar13 = pbVar13 + 4;
                  pbVar17 = pbVar17 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pbVar17 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  pbVar17 = pbVar17 + 1;
                }
                uVar11 = (uint)pbVar16[1];
                pbVar16 = pbVar16 + (uVar11 + 1 & 0xfffffffe);
                goto LAB_361cf450;
              }
              pbVar13 = pbVar16 + 3;
              pbVar16 = pbVar16 + 2;
              pbVar19 = pbVar19 + ((uint)*pbVar16 - (uint)*pbVar13 * *(int *)((int)this + 0x30));
            }
          }
          else {
            bVar1 = pbVar16[1];
            pbVar13 = pbVar19;
            for (uVar11 = (uint)(bVar4 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
              *(uint *)pbVar13 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
              pbVar13 = pbVar13 + 4;
            }
            for (uVar11 = bVar4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pbVar13 = bVar1;
              pbVar13 = pbVar13 + 1;
            }
            uVar11 = (uint)*pbVar16;
LAB_361cf450:
            pbVar19 = pbVar19 + uVar11;
          }
          pbVar16 = pbVar16 + 2;
        }
      }
      else if (*(short *)((int)puVar15 + 0xe) == 1) {
        for (; (pbVar12 <= pbVar19 && (pbVar19 < pbVar13)); pbVar19 = pbVar19 + local_1c) {
          param_1 = (uint *)0x0;
          if (puVar3 != (uint *)0x0) {
            do {
              *(byte *)((int)param_1 + (int)pbVar19) =
                   pbVar16[(uint)param_1 >> 3] >> (7 - ((byte)param_1 & 7) & 0x1f) & 1;
              param_1 = (uint *)((int)param_1 + 1);
            } while (param_1 < puVar3);
          }
          pbVar16 = pbVar16 + uVar14;
        }
      }
      else if (*(short *)((int)puVar15 + 0xe) == 4) {
        for (; (pbVar12 <= pbVar19 && (pbVar19 < pbVar13)); pbVar19 = pbVar19 + local_1c) {
          puVar15 = (uint *)0x0;
          if (puVar3 != (uint *)0x0) {
            do {
              if (((uint)puVar15 & 1) == 0) {
                bVar4 = pbVar16[(uint)puVar15 >> 1] >> 4;
              }
              else {
                bVar4 = pbVar16[(uint)puVar15 >> 1] & 0xf;
              }
              *(byte *)((int)puVar15 + (int)pbVar19) = bVar4;
              puVar15 = (uint *)((int)puVar15 + 1);
            } while (puVar15 < puVar3);
          }
          pbVar16 = pbVar16 + uVar14;
        }
      }
      else {
        while ((pbVar12 <= pbVar19 && (pbVar19 < pbVar13))) {
          pbVar17 = pbVar16 + uVar14;
          pbVar20 = pbVar19 + local_1c;
          for (uVar11 = (uint)puVar18 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pbVar19 = *(undefined4 *)pbVar16;
            pbVar16 = pbVar16 + 4;
            pbVar19 = pbVar19 + 4;
          }
          pbVar21 = pbVar16;
          pbVar22 = pbVar19;
          for (uVar11 = (uint)puVar18 & 3; pbVar16 = pbVar17, pbVar19 = pbVar20, uVar11 != 0;
              uVar11 = uVar11 - 1) {
            *pbVar22 = *pbVar21;
            pbVar21 = pbVar21 + 1;
            pbVar22 = pbVar22 + 1;
          }
        }
      }
    }
  }
  return 0;
}

