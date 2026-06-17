
void __cdecl FUN_361f65d2(uint *param_1,int *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  int iStack_38;
  int iStack_34;
  byte *pbStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  byte *pbStack_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  puVar5 = param_1;
  local_c = (byte *)param_2[1];
  local_8 = param_1[8];
  local_10 = (byte *)param_1[0xd];
  if (local_10 < (byte *)param_1[0xc]) {
    local_14 = (byte *)param_1[0xc] + (-1 - (int)local_10);
  }
  else {
    local_14 = (byte *)(param_1[0xb] - (int)local_10);
  }
  uVar8 = *param_1;
  param_1 = (uint *)param_1[7];
  pbVar9 = (byte *)*param_2;
  while (local_18 = pbVar9, uVar8 < 10) {
    switch(*(undefined4 *)(&DAT_361f6d45 + uVar8 * 4)) {
    case 0x361f6679:
      for (; pbVar9 = local_18, param_1 < (uint *)0x3; param_1 = param_1 + 2) {
        if (local_c == (byte *)0x0) goto code_r0x361f6c72;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        local_8 = local_8 | (uint)*local_18 << ((byte)param_1 & 0x1f);
        local_18 = local_18 + 1;
      }
      uVar8 = (local_8 & 7) >> 1;
      puVar5[6] = local_8 & 1;
      if (uVar8 == 0) {
        uVar8 = (int)param_1 - 3U & 7;
        local_8 = (local_8 >> 3) >> (sbyte)uVar8;
        param_1 = (uint *)(((int)param_1 - 3U) - uVar8);
        *puVar5 = 1;
      }
      else if (uVar8 == 1) {
        func_0x361f9f31(&uStack_2c,&uStack_28,&uStack_24,&uStack_20,param_2);
        uVar8 = FUN_361f9481((char)uStack_2c,(char)uStack_28,uStack_24,uStack_20,(int)param_2);
        puVar5[1] = uVar8;
        if (uVar8 == 0) goto code_r0x361f6ce6;
        local_8 = local_8 >> 3;
        param_1 = (uint *)((int)param_1 + -3);
        *puVar5 = 6;
      }
      else {
        if (uVar8 == 2) {
          local_8 = local_8 >> 3;
          uVar8 = 3;
          param_1 = (uint *)((int)param_1 + -3);
          goto code_r0x361f66d4;
        }
        if (uVar8 == 3) {
          *puVar5 = 9;
          param_2[6] = (int)s_invalid_block_type_3624c88c;
          puVar5[8] = local_8 >> 3;
          param_1 = (uint *)((int)param_1 - 3);
          param_3 = (byte *)0xfffffffd;
          goto code_r0x361f6624;
        }
      }
      break;
    case 0x361f6743:
      for (; pbVar9 = local_18, param_1 < (uint *)0x20; param_1 = param_1 + 2) {
        if (local_c == (byte *)0x0) goto code_r0x361f6c72;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        local_8 = local_8 | (uint)*local_18 << ((byte)param_1 & 0x1f);
        local_18 = local_18 + 1;
      }
      if (~local_8 >> 0x10 != (local_8 & 0xffff)) {
        *puVar5 = 9;
        param_2[6] = (int)s_invalid_stored_block_lengths_3624c86c;
        goto code_r0x361f6c2a;
      }
      puVar5[1] = local_8 & 0xffff;
      param_1 = (uint *)0x0;
      local_8 = 0;
      if (puVar5[1] == 0) goto code_r0x361f6885;
      uVar8 = 2;
code_r0x361f66d4:
      *puVar5 = uVar8;
      break;
    case 0x361f67a4:
      if (local_c == (byte *)0x0) {
code_r0x361f6c72:
        puVar5[8] = local_8;
        puVar5[7] = (uint)param_1;
        param_2[1] = 0;
        goto code_r0x361f662d;
      }
      if (local_14 == (byte *)0x0) {
        local_14 = (byte *)0x0;
        if (local_10 == (byte *)puVar5[0xb]) {
          pbVar6 = (byte *)puVar5[0xc];
          pbVar3 = (byte *)puVar5[10];
          if (pbVar3 != pbVar6) {
            if (pbVar3 < pbVar6) {
              local_14 = pbVar6 + (-1 - (int)pbVar3);
            }
            else {
              local_14 = (byte *)puVar5[0xb] + -(int)pbVar3;
            }
            local_10 = pbVar3;
            if (local_14 != (byte *)0x0) goto code_r0x361f6845;
          }
        }
        puVar5[0xd] = (uint)local_10;
        param_3 = (byte *)FUN_361f9f60((undefined1 *)puVar5,(int)param_2,(int)param_3);
        pbStack_1c = (byte *)puVar5[0xc];
        local_10 = (byte *)puVar5[0xd];
        if (local_10 < pbStack_1c) {
          local_14 = pbStack_1c + (-1 - (int)local_10);
        }
        else {
          local_14 = (byte *)(puVar5[0xb] - (int)local_10);
        }
        pbStack_30 = (byte *)puVar5[0xb];
        if (local_10 == pbStack_30) {
          pbVar6 = (byte *)puVar5[10];
          if (pbVar6 != pbStack_1c) {
            local_10 = pbVar6;
            if (pbVar6 < pbStack_1c) {
              local_14 = pbStack_1c + (-1 - (int)pbVar6);
            }
            else {
              local_14 = pbStack_30 + -(int)pbVar6;
            }
          }
        }
        if (local_14 == (byte *)0x0) {
          puVar5[8] = local_8;
          puVar5[7] = (uint)param_1;
          param_2[1] = (int)local_c;
          param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
          goto code_r0x361f6637;
        }
      }
code_r0x361f6845:
      param_3 = (byte *)0x0;
      pbVar9 = (byte *)puVar5[1];
      if (local_c < (byte *)puVar5[1]) {
        pbVar9 = local_c;
      }
      if (local_14 < pbVar9) {
        pbVar9 = local_14;
      }
      pbVar6 = local_18 + (int)pbVar9;
      local_c = local_c + -(int)pbVar9;
      pbVar3 = local_10 + (int)pbVar9;
      local_14 = local_14 + -(int)pbVar9;
      for (uVar8 = (uint)pbVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)local_10 = *(undefined4 *)local_18;
        local_18 = local_18 + 4;
        local_10 = local_10 + 4;
      }
      for (uVar8 = (uint)pbVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_10 = *local_18;
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
      }
      puVar1 = puVar5 + 1;
      *puVar1 = *puVar1 - (int)pbVar9;
      local_18 = pbVar6;
      local_10 = pbVar3;
      if (*puVar1 == 0) {
code_r0x361f6885:
        uVar8 = -(uint)(puVar5[6] != 0) & 7;
        goto code_r0x361f66d4;
      }
      break;
    case 0x361f6894:
      for (; param_1 < (uint *)0xe; param_1 = param_1 + 2) {
        if (local_c == (byte *)0x0) goto code_r0x361f6c72;
        param_3 = (byte *)0x0;
        local_c = local_c + -1;
        local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      puVar5[1] = local_8 & 0x3fff;
      if ((0x1d < (local_8 & 0x1f)) || (uVar8 = (local_8 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar8)) {
        *puVar5 = 9;
        param_2[6] = (int)s_too_many_length_or_distance_symb_3624c848;
        goto code_r0x361f6c2a;
      }
      uVar8 = (*(code *)param_2[8])(param_2[10],uVar8 + 0x102 + (local_8 & 0x1f),4);
      puVar5[3] = uVar8;
      if (uVar8 != 0) {
        local_8 = local_8 >> 0xe;
        param_1 = (uint *)((int)param_1 + -0xe);
        puVar5[2] = 0;
        *puVar5 = 4;
        goto code_r0x361f6963;
      }
code_r0x361f6ce6:
      param_3 = (byte *)0xfffffffc;
      goto code_r0x361f661b;
    case 0x361f6963:
code_r0x361f6963:
      while (puVar5[2] < (puVar5[1] >> 10) + 4) {
        for (; param_1 < (uint *)0x3; param_1 = param_1 + 2) {
          if (local_c == (byte *)0x0) goto code_r0x361f6c72;
          param_3 = (byte *)0x0;
          local_c = local_c + -1;
          local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
          pbVar9 = pbVar9 + 1;
        }
        *(uint *)(puVar5[3] + *(int *)(puVar5[2] * 4 + 0x3624c7e0) * 4) = local_8 & 7;
        puVar5[2] = puVar5[2] + 1;
        param_1 = (uint *)((int)param_1 + -3);
        local_8 = local_8 >> 3;
      }
      while (puVar5[2] < 0x13) {
        *(undefined4 *)(puVar5[3] + *(int *)(puVar5[2] * 4 + 0x3624c7e0) * 4) = 0;
        puVar5[2] = puVar5[2] + 1;
      }
      puVar5[4] = 7;
      local_14 = (byte *)FUN_361f9daf((uint *)puVar5[3],(int *)(puVar5 + 4),(int *)(puVar5 + 5),
                                      puVar5[9],(int)param_2);
      if (local_14 == (byte *)0x0) {
        puVar5[2] = 0;
        *puVar5 = 5;
        goto code_r0x361f6ae1;
      }
      (*(code *)param_2[9])(param_2[10],puVar5[3]);
      goto code_r0x361f6cd6;
    case 0x361f6ae1:
code_r0x361f6ae1:
      while (puVar5[2] < (puVar5[1] >> 5 & 0x1f) + 0x102 + (puVar5[1] & 0x1f)) {
        for (; param_1 < (uint *)puVar5[4]; param_1 = param_1 + 2) {
          if (local_c == (byte *)0x0) goto code_r0x361f6c72;
          param_3 = (byte *)0x0;
          local_c = local_c + -1;
          local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
          pbVar9 = pbVar9 + 1;
        }
        iVar4 = puVar5[5] + (*(uint *)(&DAT_362af920 + (int)puVar5[4] * 4) & local_8) * 8;
        bVar2 = *(byte *)(iVar4 + 1);
        local_14 = (byte *)(uint)bVar2;
        pbStack_30 = *(byte **)(iVar4 + 4);
        if (pbStack_30 < (byte *)0x10) {
          local_8 = local_8 >> (bVar2 & 0x1f);
          param_1 = (uint *)((int)param_1 - (int)local_14);
          *(byte **)(puVar5[3] + puVar5[2] * 4) = pbStack_30;
          puVar5[2] = puVar5[2] + 1;
        }
        else {
          if (pbStack_30 == (byte *)0x12) {
            pbVar6 = (byte *)0x7;
          }
          else {
            pbVar6 = pbStack_30 + -0xe;
          }
          local_18 = (byte *)((uint)(pbStack_30 == (byte *)0x12) * 8 + 3);
          for (; param_1 < pbVar6 + (int)local_14; param_1 = param_1 + 2) {
            if (local_c == (byte *)0x0) goto code_r0x361f6c72;
            param_3 = (byte *)0x0;
            local_c = local_c + -1;
            local_8 = local_8 | (uint)*pbVar9 << ((byte)param_1 & 0x1f);
            pbVar9 = pbVar9 + 1;
          }
          local_8 = local_8 >> (bVar2 & 0x1f);
          local_18 = local_18 + (*(uint *)(&DAT_362af920 + (int)pbVar6 * 4) & local_8);
          local_8 = local_8 >> ((byte)pbVar6 & 0x1f);
          param_1 = (uint *)((int)param_1 - (int)(pbVar6 + (int)local_14));
          uVar8 = puVar5[2];
          if ((byte *)((puVar5[1] >> 5 & 0x1f) + 0x102 + (puVar5[1] & 0x1f)) < local_18 + uVar8) {
code_r0x361f6c8a:
            (*(code *)param_2[9])(param_2[10],puVar5[3]);
            *puVar5 = 9;
            param_2[6] = (int)s_invalid_bit_length_repeat_3624c82c;
            puVar5[8] = local_8;
            puVar5[7] = (uint)param_1;
            param_2[1] = (int)local_c;
            param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
            *param_2 = (int)pbVar9;
            puVar5[0xd] = (uint)local_10;
            FUN_361f9f60((undefined1 *)puVar5,(int)param_2,-3);
            return;
          }
          if (pbStack_30 == &DAT_00000010) {
            if (uVar8 == 0) goto code_r0x361f6c8a;
            uVar7 = *(undefined4 *)((puVar5[3] - 4) + uVar8 * 4);
          }
          else {
            uVar7 = 0;
          }
          do {
            *(undefined4 *)(puVar5[3] + uVar8 * 4) = uVar7;
            uVar8 = uVar8 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != (byte *)0x0);
          puVar5[2] = uVar8;
          local_18 = (byte *)0x0;
        }
      }
      puVar5[5] = 0;
      pbStack_1c = (byte *)0x9;
      local_18 = (byte *)0x6;
      local_14 = (byte *)FUN_361f9e2e((puVar5[1] & 0x1f) + 0x101,(puVar5[1] >> 5 & 0x1f) + 1,
                                      (uint *)puVar5[3],(int *)&pbStack_1c,(int *)&local_18,
                                      &iStack_38,&iStack_34,puVar5[9],(int)param_2);
      (*(code *)param_2[9])(param_2[10],puVar5[3]);
      if (local_14 == (byte *)0x0) {
        uVar8 = FUN_361f9481((char)pbStack_1c,(char)local_18,iStack_38,iStack_34,(int)param_2);
        if (uVar8 == 0) goto code_r0x361f6ce6;
        puVar5[1] = uVar8;
        *puVar5 = 6;
        goto code_r0x361f6b82;
      }
code_r0x361f6cd6:
      param_3 = local_14;
      if (local_14 == (byte *)0xfffffffd) {
        *puVar5 = 9;
      }
      goto code_r0x361f661b;
    case 0x361f6b82:
code_r0x361f6b82:
      puVar5[8] = local_8;
      puVar5[7] = (uint)param_1;
      param_2[1] = (int)local_c;
      param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar9;
      puVar5[0xd] = (uint)local_10;
      param_3 = (byte *)FUN_361f94b5((undefined1 *)puVar5,(byte *)param_2,(int)param_3);
      if (param_3 != (byte *)0x1) goto code_r0x361f663c;
      param_3 = (byte *)0x0;
      FUN_361f9a19(puVar5[1],(int)param_2);
      local_c = (byte *)param_2[1];
      local_18 = (byte *)*param_2;
      local_8 = puVar5[8];
      param_1 = (uint *)puVar5[7];
      local_10 = (byte *)puVar5[0xd];
      if (local_10 < (byte *)puVar5[0xc]) {
        local_14 = (byte *)puVar5[0xc] + (-1 - (int)local_10);
      }
      else {
        local_14 = (byte *)(puVar5[0xb] - (int)local_10);
      }
      if (puVar5[6] != 0) {
        *puVar5 = 7;
        goto code_r0x361f6cf3;
      }
      *puVar5 = 0;
      break;
    case 0x361f6c2a:
code_r0x361f6c2a:
      param_3 = (byte *)0xfffffffd;
      goto code_r0x361f661b;
    case 0x361f6cf3:
code_r0x361f6cf3:
      pbVar9 = local_18;
      puVar5[0xd] = (uint)local_10;
      param_3 = (byte *)FUN_361f9f60((undefined1 *)puVar5,(int)param_2,(int)param_3);
      local_10 = (byte *)puVar5[0xd];
      if ((byte *)puVar5[0xc] == local_10) {
        *puVar5 = 8;
        goto code_r0x361f6d3e;
      }
      puVar5[8] = local_8;
      puVar5[7] = (uint)param_1;
      param_2[1] = (int)local_c;
      iVar4 = *param_2;
      *param_2 = (int)pbVar9;
      param_2[2] = (int)(pbVar9 + (param_2[2] - iVar4));
      puVar5[0xd] = (uint)local_10;
      goto code_r0x361f663c;
    case 0x361f6d3e:
code_r0x361f6d3e:
      param_3 = (byte *)0x1;
      goto code_r0x361f661b;
    }
    pbVar9 = local_18;
    uVar8 = *puVar5;
  }
  param_3 = (byte *)0xfffffffe;
code_r0x361f661b:
  puVar5[8] = local_8;
code_r0x361f6624:
  puVar5[7] = (uint)param_1;
  param_2[1] = (int)local_c;
code_r0x361f662d:
  param_2[2] = (int)(pbVar9 + (param_2[2] - *param_2));
code_r0x361f6637:
  *param_2 = (int)pbVar9;
  puVar5[0xd] = (uint)local_10;
code_r0x361f663c:
  FUN_361f9f60((undefined1 *)puVar5,(int)param_2,(int)param_3);
  return;
}

