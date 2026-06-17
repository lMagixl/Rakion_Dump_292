
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_361d0283(int param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int iVar8;
  undefined1 auStack_158 [256];
  double local_58;
  double local_50;
  int local_48;
  uint local_44;
  int local_40;
  undefined1 local_3c [4];
  int *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (uint *)0x0;
  local_20 = (undefined4 *)0x0;
  iVar5 = FUN_361e1136(param_1,0,param_2);
  if (iVar5 != 0) {
    return unaff_ESI;
  }
  local_8 = FUN_361de3be(s_1_0_5_36249a78,0,&DAT_361d0276,&DAT_361d0282);
  if (((local_8 == (int *)0x0) || (local_c = FUN_361e1270((int)local_8), local_c == (uint *)0x0)) ||
     (iVar5 = setjmp3(local_8), iVar5 != 0)) goto LAB_361d07ea;
  local_48 = param_1;
  local_44 = param_2;
  FUN_361e10c4((int)local_8,&local_48,&LAB_361d0233);
  FUN_361de581(local_8,local_c);
  FUN_361deef7((int)local_8,local_c,&local_34,&local_1c,&local_28,&local_30,(uint *)0x0,(uint *)0x0,
               (uint *)0x0);
  if (local_30 == 0) {
    *local_38 = 0x32;
  }
  else if (local_30 == 2) {
    *local_38 = 0x14;
  }
  else if (local_30 == 3) {
    *local_38 = 0x29;
  }
  else if (local_30 == 4) {
    *local_38 = 0x33;
  }
  else if (local_30 == 6) {
    *local_38 = 0x15;
  }
  if (local_28 == 0x10) {
    FUN_361df06b((int)local_8);
    iVar5 = *local_38;
    if (iVar5 == 0x14) {
      *local_38 = (int)&DAT_36315220;
    }
    else if (iVar5 == 0x15) {
      *local_38 = (int)&DAT_36315241;
    }
    else if (iVar5 == 0x32) {
      *local_38 = (int)&DAT_36314c20;
    }
    else {
      if (iVar5 != 0x33) {
        return unaff_ESI;
      }
      *local_38 = (int)&DAT_36314c41;
    }
  }
  if ((int)local_28 < 8) {
    FUN_361df07d((int)local_8);
  }
  if ((local_30 == 0) && ((int)local_28 < 8)) {
    FUN_361df924((int)local_8);
  }
  iVar5 = FUN_361deecc((int)local_8,(int)local_c,(uint *)local_3c);
  if (iVar5 == 0) {
    iVar5 = FUN_361deea3((int)local_8,(int)local_c,&local_58);
    if (iVar5 != 0) {
      FUN_361df8dc((int)local_8,_DAT_36249a70,local_58);
    }
  }
  else {
    FUN_361e0fee((int)local_8,(int)local_c,local_3c[0]);
  }
  if ((*local_38 != 0x29) && (uVar6 = FUN_361dee47((int)local_8,(int)local_c,0x10), uVar6 != 0)) {
    FUN_361df92d((int)local_8);
    puVar2 = (undefined *)*local_38;
    if (puVar2 == (undefined *)0x14) {
      *local_38 = 0x15;
    }
    else if (puVar2 == (undefined *)0x32) {
      *local_38 = 0x33;
    }
    else if (puVar2 == &DAT_36314c20) {
      *local_38 = (int)&DAT_36314c41;
    }
    else if (puVar2 == &DAT_36315220) {
      *local_38 = (int)&DAT_36315241;
    }
  }
  puVar2 = (undefined *)*local_38;
  if ((((puVar2 == (undefined *)0x14) || (puVar2 == &DAT_36315220)) || (puVar2 == (undefined *)0x15)
      ) || (puVar2 == &DAT_36315241)) {
    FUN_361df062((int)local_8);
  }
  if (*local_38 == 0x14) {
    FUN_361df0c8((int)local_8,0xff,1);
    *local_38 = 0x16;
  }
  FUN_361de6f4(local_8,(int *)local_c);
  puVar2 = (undefined *)*local_38;
  uVar6 = 3;
  if ((int)puVar2 < 0x34) {
    if (puVar2 == (undefined *)0x33) {
LAB_361d0556:
      local_10 = 2;
      uVar6 = local_10;
    }
    else if (puVar2 != (undefined *)0x14) {
      if ((puVar2 == (undefined *)0x15) || (puVar2 == (undefined *)0x16)) {
LAB_361d054c:
        uVar6 = 4;
      }
      else if ((puVar2 == (undefined *)0x29) || (uVar6 = local_10, puVar2 == (undefined *)0x32))
      goto LAB_361d0512;
    }
  }
  else if (puVar2 == &DAT_36314c20) {
LAB_361d0512:
    local_10 = 1;
    uVar6 = local_10;
  }
  else {
    if (puVar2 == &DAT_36314c41) goto LAB_361d0556;
    if ((puVar2 != &DAT_36315220) && (uVar6 = local_10, puVar2 == &DAT_36315241)) goto LAB_361d054c;
  }
  local_10 = uVar6;
  bVar3 = FUN_361dee77((int)local_8,(int)local_c);
  if (local_10 == bVar3) {
    local_38[3] = local_34;
    local_38[4] = local_1c;
    local_38[5] = 1;
    iVar5 = FUN_361dee61((int)local_8,(int)local_c);
    local_38[0xc] = iVar5;
    local_38[0xd] = 0;
    if (local_38[0x10] != 0) {
      iVar5 = FUN_361bf99c(iVar5 * local_1c);
      local_38[1] = iVar5;
      if (iVar5 != 0) {
        local_38[0xe] = 1;
        local_20 = (undefined4 *)FUN_361bf99c(local_1c << 2);
        if (local_20 != (undefined4 *)0x0) {
          uVar6 = 0;
          if (local_1c != 0) {
            do {
              local_20[uVar6] = local_38[0xc] * uVar6 + local_38[1];
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_1c);
          }
          FUN_361deb47(local_8,local_20);
          if (*local_38 == 0x29) {
            local_2c = 0;
            local_24 = 0;
            uVar6 = FUN_361dee47((int)local_8,(int)local_c,8);
            if (uVar6 != 0) {
              FUN_361defc8((int)local_8,(int)local_c,&local_14,&local_24);
            }
            uVar6 = FUN_361dee47((int)local_8,(int)local_c,0x10);
            if (uVar6 != 0) {
              FUN_361deffb((int)local_8,(int)local_c,&local_40,&local_2c,(int *)0x0);
            }
            if (((float)local_8[0x4c] <= (float)_DAT_36223438) ||
               ((float)local_8[0x4d] <= (float)_DAT_36223438)) {
              iVar5 = 0;
              do {
                auStack_158[iVar5] = (char)iVar5;
                iVar5 = iVar5 + 1;
              } while (iVar5 < 0x100);
            }
            else {
              local_18 = 0;
              local_50 = (double)((float)_DAT_36227d28 /
                                 ((float)local_8[0x4d] * (float)local_8[0x4c]));
              do {
                _CIpow();
                uVar4 = ftol();
                iVar5 = local_18 + 1;
                puVar1 = auStack_158 + local_18;
                local_18 = iVar5;
                *puVar1 = uVar4;
              } while (iVar5 < 0x100);
            }
            iVar5 = FUN_361bf99c(0x400);
            local_38[2] = iVar5;
            if (iVar5 != 0) {
              iVar5 = 0;
              local_38[0xf] = 1;
              if (0 < (int)local_2c) {
                iVar8 = 0;
                do {
                  iVar7 = iVar5 * 4;
                  *(undefined1 *)(iVar7 + local_38[2]) = auStack_158[*(byte *)(iVar8 + local_14)];
                  *(undefined1 *)(local_38[2] + 1 + iVar7) =
                       auStack_158[*(byte *)(iVar8 + 1 + local_14)];
                  *(undefined1 *)(local_38[2] + 2 + iVar7) =
                       auStack_158[*(byte *)(iVar8 + 2 + local_14)];
                  puVar1 = (undefined1 *)(iVar5 + local_40);
                  iVar5 = iVar5 + 1;
                  *(undefined1 *)(local_38[2] + 3 + iVar7) = *puVar1;
                  iVar8 = iVar8 + 3;
                } while (iVar5 < (int)local_2c);
              }
              if (iVar5 < (int)local_24) {
                iVar8 = iVar5 * 3;
                do {
                  iVar7 = iVar5 * 4;
                  *(undefined1 *)(iVar7 + local_38[2]) = auStack_158[*(byte *)(iVar8 + local_14)];
                  *(undefined1 *)(local_38[2] + 1 + iVar7) =
                       auStack_158[*(byte *)(iVar8 + 1 + local_14)];
                  *(undefined1 *)(local_38[2] + 2 + iVar7) =
                       auStack_158[*(byte *)(iVar8 + 2 + local_14)];
                  *(undefined1 *)(local_38[2] + 3 + iVar7) = 0xff;
                  iVar5 = iVar5 + 1;
                  iVar8 = iVar8 + 3;
                } while (iVar5 < (int)local_24);
              }
              if (iVar5 < 0x100) {
                iVar5 = iVar5 << 2;
                do {
                  *(undefined1 *)(iVar5 + local_38[2]) = 0xff;
                  *(undefined1 *)(iVar5 + 1 + local_38[2]) = 0xff;
                  *(undefined1 *)(iVar5 + 2 + local_38[2]) = 0xff;
                  *(undefined1 *)(iVar5 + 3 + local_38[2]) = 0xff;
                  iVar5 = iVar5 + 4;
                } while (iVar5 < 0x400);
              }
            }
          }
        }
      }
    }
  }
LAB_361d07ea:
  if (local_8 != (int *)0x0) {
    FUN_361dedc6(&local_8,&local_c,(undefined4 *)0x0);
  }
  if (local_20 != (undefined4 *)0x0) {
    operator_delete(local_20);
  }
  return unaff_ESI;
}

