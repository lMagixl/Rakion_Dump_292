
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36201330(int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_2 + 4) = 0x180e;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(uint **)(param_2 + 0x24) = param_3;
  iVar8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x4c) = 0x41;
  *(int *)(param_2 + 0x10) = iVar8 << 2;
  *(undefined4 *)(param_2 + 0x48) = 0x20;
  *(undefined4 *)(param_2 + 0x54) = 0x20;
  *(undefined4 *)(param_2 + 0x58) = 0xff0000;
  *(undefined4 *)(param_2 + 0x5c) = 0xff00;
  *(undefined4 *)(param_2 + 0x60) = 0xff;
  *(undefined4 *)(param_2 + 100) = 0xff000000;
  local_44 = *(uint **)(param_1 + 0x24);
  local_48 = param_3;
  local_30 = local_44;
  if ((param_4 == 0x15) || (param_4 == 0x16)) {
    local_4c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar7 = 0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            *puVar3 = *local_30;
            local_30 = local_30 + 1;
            uVar7 = uVar7 + 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
    }
  }
  else if (param_4 == 0x14) {
    local_4c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar7 = 0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            *(byte *)puVar3 = (byte)*local_44;
            *(byte *)((int)puVar3 + 1) = *(byte *)((int)local_44 + 1);
            *(byte *)((int)puVar3 + 2) = *(byte *)((int)local_44 + 2);
            local_44 = (uint *)((int)local_44 + 3);
            *(byte *)((int)puVar3 + 3) = 0xff;
            puVar3 = puVar3 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (param_4 == 0x17) {
    local_4c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar7 = 0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            uVar1 = (ushort)*local_30;
            local_30 = (uint *)((int)local_30 + 2);
            *(byte *)puVar3 = (byte)(uVar1 >> 2) & 7 | (char)uVar1 << 3;
            bVar4 = (byte)(uVar1 >> 3);
            bVar5 = (byte)(uVar1 >> 8);
            *(byte *)((int)puVar3 + 1) = (bVar5 >> 1 ^ bVar4) & 3 ^ bVar4;
            *(byte *)((int)puVar3 + 2) = (bVar5 >> 5 ^ bVar5) & 7 ^ bVar5;
            *(byte *)((int)puVar3 + 3) = 0xff;
            puVar3 = puVar3 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (param_4 == 0x19) {
    local_4c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        local_30 = (uint *)0x0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            uVar1 = (ushort)*local_44;
            local_44 = (uint *)((int)local_44 + 2);
            bVar5 = (byte)(uVar1 >> 2);
            *(byte *)puVar3 = bVar5 & 7 | (char)uVar1 << 3;
            bVar4 = (byte)(uVar1 >> 7);
            *(byte *)((int)puVar3 + 1) = (bVar4 ^ bVar5) & 7 ^ bVar5;
            *(byte *)((int)puVar3 + 2) = ((byte)(uVar1 >> 0xc) ^ bVar4) & 7 ^ bVar4;
            if ((uVar1 & 0x8000) == 0) {
              *(byte *)((int)puVar3 + 3) = 0;
            }
            else {
              *(byte *)((int)puVar3 + 3) = 0xff;
            }
            puVar3 = puVar3 + 1;
            local_30 = (uint *)((int)local_30 + 1);
          } while (local_30 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (param_4 == 0x18) {
    local_4c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar7 = 0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            uVar1 = (ushort)*local_30;
            local_30 = (uint *)((int)local_30 + 2);
            bVar5 = (byte)(uVar1 >> 2);
            *(byte *)puVar3 = bVar5 & 7 | (char)uVar1 << 3;
            bVar4 = (byte)(uVar1 >> 7);
            *(byte *)((int)puVar3 + 1) = (bVar4 ^ bVar5) & 7 ^ bVar5;
            *(byte *)((int)puVar3 + 2) = ((byte)(uVar1 >> 0xc) ^ bVar4) & 7 ^ bVar4;
            *(byte *)((int)puVar3 + 3) = 0;
            puVar3 = puVar3 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (param_4 == 0x1a) {
    local_4c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar7 = 0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            uVar1 = (ushort)*local_30;
            local_30 = (uint *)((int)local_30 + 2);
            bVar5 = (byte)uVar1;
            *(byte *)puVar3 = bVar5 & 0xf | bVar5 << 4;
            bVar4 = (byte)(uVar1 >> 4);
            *(byte *)((int)puVar3 + 1) = (bVar4 ^ bVar5) & 0xf ^ bVar5;
            bVar5 = (byte)(uVar1 >> 8);
            *(byte *)((int)puVar3 + 2) = (bVar5 ^ bVar4) & 0xf ^ bVar4;
            *(byte *)((int)puVar3 + 3) = (bVar5 >> 4 ^ bVar5) & 0xf ^ bVar5;
            puVar3 = puVar3 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (param_4 == 0x29) {
    local_4c = 0;
    local_34 = local_44;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        local_30 = (uint *)0x0;
        puVar3 = param_3;
        if (*(int *)(param_1 + 0xc) != 0) {
          do {
            uVar7 = (uint)(byte)*local_34;
            local_34 = (uint *)((int)local_34 + 1);
            *(undefined1 *)puVar3 = *(undefined1 *)(param_5 + 2 + uVar7 * 4);
            *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)(param_5 + 1 + uVar7 * 4);
            *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)(param_5 + uVar7 * 4);
            *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)(param_5 + 3 + uVar7 * 4);
            local_30 = (uint *)((int)local_30 + 1);
            puVar3 = puVar3 + 1;
          } while (local_30 < *(uint *)(param_1 + 0xc));
        }
        param_3 = (uint *)((int)param_3 + *(int *)(param_2 + 0x10));
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(param_1 + 8));
      return;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    local_4c = 0;
    if (0 < iVar8) {
      do {
        local_3c = iVar8 - local_4c;
        if (3 < local_3c) {
          local_3c = 4;
        }
        local_40 = local_48;
        local_30 = (uint *)0x0;
        iVar8 = *(int *)(param_1 + 0xc);
        if (0 < iVar8) {
          do {
            local_38 = iVar8 - (int)local_30;
            if (3 < local_38) {
              local_38 = 4;
            }
            if (param_4 < 0x34545845) {
              if (param_4 == 0x34545844) {
LAB_36201862:
                FUN_36201b60((byte *)local_44,&local_28);
                uVar7 = *(uint *)((int)local_44 + 2);
                iVar8 = 0;
                puVar3 = local_40;
                do {
                  if (iVar8 == 2) {
                    uVar7 = *(uint *)((int)local_44 + 5);
                  }
                  if (iVar8 < (int)local_3c) {
                    iVar6 = 0;
                    do {
                      if (iVar6 < (int)local_38) {
                        *puVar3 = (&local_28)[uVar7 & 7];
                      }
                      iVar6 = iVar6 + 1;
                      puVar3 = puVar3 + 1;
                      uVar7 = uVar7 >> 3;
                    } while (iVar6 < 4);
                  }
                  iVar8 = iVar8 + 1;
                  puVar3 = puVar3 + *(int *)(param_2 + 0xc) + -4;
                } while (iVar8 < 4);
                local_44 = local_44 + 2;
              }
              else if ((param_4 == 0x32545844) || (param_4 == 0x33545844)) {
                iVar8 = 0;
                puVar3 = local_40;
                do {
                  uVar1 = (ushort)*local_44;
                  local_44 = (uint *)((int)local_44 + 2);
                  if (iVar8 < (int)local_3c) {
                    iVar6 = 0;
                    do {
                      if (iVar6 < (int)local_38) {
                        floor((double)((float)(uVar1 & 0xf) * _DAT_3624cf48 * _DAT_3624cd90));
                        iVar2 = ftol();
                        *puVar3 = iVar2 << 0x18 | 0xffffff;
                      }
                      uVar1 = uVar1 >> 4;
                      iVar6 = iVar6 + 1;
                      puVar3 = puVar3 + 1;
                    } while (iVar6 < 4);
                  }
                  iVar8 = iVar8 + 1;
                  puVar3 = puVar3 + *(int *)(param_2 + 0xc) + -4;
                } while (iVar8 < 4);
              }
            }
            else if (param_4 == 0x35545844) goto LAB_36201862;
            DAT_36383d81 = '\0';
            FUN_36201a20((ushort *)local_44,&local_28);
            local_44 = local_44 + 1;
            iVar8 = 0;
            puVar3 = local_40;
            do {
              bVar5 = (byte)*local_44;
              local_44 = (uint *)((int)local_44 + 1);
              if (iVar8 < (int)local_3c) {
                iVar6 = 0;
                do {
                  if (iVar6 < (int)local_38) {
                    if (param_4 == 0x31545844) {
                      *puVar3 = (&local_28)[bVar5 & 3];
                      if ((DAT_36383d81 != '\0') && ((bVar5 & 3) == 3)) {
                        DAT_36383d80 = 1;
                      }
                    }
                    else {
                      *puVar3 = *puVar3 & 0xff000000;
                      *(undefined1 *)((int)&local_28 + (bVar5 & 3) * 4 + 3) = 0;
                      *puVar3 = *puVar3 | (&local_28)[bVar5 & 3];
                    }
                  }
                  iVar6 = iVar6 + 1;
                  puVar3 = puVar3 + 1;
                  bVar5 = bVar5 >> 2;
                } while (iVar6 < 4);
              }
              iVar8 = iVar8 + 1;
              puVar3 = puVar3 + *(int *)(param_2 + 0xc) + -4;
            } while (iVar8 < 4);
            local_30 = (uint *)((int)local_30 + 4);
            iVar8 = *(int *)(param_1 + 0xc);
            local_40 = local_40 + 4;
          } while ((int)local_30 < iVar8);
        }
        local_4c = local_4c + 4;
        local_48 = local_48 + *(int *)(param_2 + 0x10);
        iVar8 = *(int *)(param_1 + 8);
        if (iVar8 <= local_4c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

