
uint __cdecl FUN_3614a2a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if ((((param_1 == (int *)0x0) || (puVar1 = (undefined4 *)param_1[7], puVar1 == (undefined4 *)0x0))
      || (4 < param_2)) || (param_2 < 0)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)PTR_s_stream_error_3623c978;
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)PTR_s_buffer_error_3623c984;
    return 0xfffffffb;
  }
  iVar5 = puVar1[8];
  *puVar1 = param_1;
  puVar1[8] = param_2;
  if (puVar1[1] == 0x2a) {
    if (puVar1[6] == 2) {
      *(undefined1 *)(puVar1[2] + puVar1[5]) = 0x1f;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0x8b;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 8;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      if (puVar1[0x1f] == 9) {
        uVar2 = 2;
      }
      else if (((int)puVar1[0x20] < 2) && (1 < (int)puVar1[0x1f])) {
        uVar2 = 0;
      }
      else {
        uVar2 = 4;
      }
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = uVar2;
      iVar4 = puVar1[5];
      puVar1[5] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + puVar1[2]) = 0xff;
      puVar1[5] = puVar1[5] + 1;
      puVar1[1] = 0x71;
      uVar3 = FUN_3614a050(0,(uint *)0x0,0);
    }
    else {
      if (((int)puVar1[0x20] < 2) && (iVar4 = puVar1[0x1f], 1 < iVar4)) {
        if (iVar4 < 6) {
          iVar4 = 1;
        }
        else {
          iVar4 = (iVar4 != 6) + 2;
        }
      }
      else {
        iVar4 = 0;
      }
      uVar3 = (puVar1[10] + -8) * 0x1000 + 0x800U | iVar4 << 6;
      if (puVar1[0x19] != 0) {
        uVar3 = uVar3 | 0x20;
      }
      puVar1[1] = 0x71;
      FUN_3614a200((uVar3 - uVar3 % 0x1f) + 0x1f);
      if (puVar1[0x19] != 0) {
        FUN_3614a200((uint)*(ushort *)((int)param_1 + 0x32));
        FUN_3614a200(param_1[0xc] & 0xffff);
      }
      uVar3 = FUN_36149820(0,(byte *)0x0,0);
    }
    param_1[0xc] = uVar3;
  }
  if (puVar1[5] == 0) {
    if (((param_1[1] == 0) && (param_2 <= iVar5)) && (param_2 != 4)) {
      param_1[6] = (int)PTR_s_buffer_error_3623c984;
      return 0xfffffffb;
    }
LAB_3614a4ee:
    if (puVar1[1] == 0x29a) {
      if (param_1[1] != 0) {
        param_1[6] = (int)PTR_s_buffer_error_3623c984;
        return 0xfffffffb;
      }
LAB_3614a515:
      if ((puVar1[0x1b] != 0) || ((param_2 != 0 && (puVar1[1] != 0x29a)))) goto LAB_3614a52f;
    }
    else {
      if (param_1[1] == 0) goto LAB_3614a515;
LAB_3614a52f:
      iVar5 = (**(code **)(&DAT_3623ac30 + puVar1[0x1f] * 0xc))(puVar1,param_2);
      if ((iVar5 == 2) || (iVar5 == 3)) {
        puVar1[1] = 0x29a;
      }
      if ((iVar5 == 0) || (iVar5 == 2)) {
        if (param_1[4] != 0) {
          return 0;
        }
        puVar1[8] = 0xffffffff;
        return 0;
      }
      if (iVar5 == 1) {
        if (param_2 == 1) {
          FUN_36151c50((int)puVar1);
        }
        else {
          FUN_36151bb0((int)puVar1,(undefined1 *)0x0,0,0);
          if (param_2 == 3) {
            *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
            uVar3 = puVar1[0x11] * 2 - 2;
            puVar7 = (undefined4 *)puVar1[0xf];
            for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar7 = 0;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
        }
        FUN_3614a230();
        if (param_1[4] == 0) goto LAB_3614a4bb;
      }
    }
    if (param_2 == 4) {
      if (0 < (int)puVar1[6]) {
        if (puVar1[6] == 2) {
          *(char *)(puVar1[2] + puVar1[5]) = (char)param_1[0xc];
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x31);
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x32);
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + puVar1[2]) = *(undefined1 *)((int)param_1 + 0x33);
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(char *)(iVar5 + 1 + puVar1[2]) = (char)param_1[2];
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + puVar1[2]) = *(undefined1 *)((int)param_1 + 9);
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + puVar1[2]) = *(undefined1 *)((int)param_1 + 10);
          iVar5 = puVar1[5];
          puVar1[5] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + puVar1[2]) = *(undefined1 *)((int)param_1 + 0xb);
          puVar1[5] = puVar1[5] + 1;
        }
        else {
          FUN_3614a200((uint)*(ushort *)((int)param_1 + 0x32));
          FUN_3614a200(param_1[0xc] & 0xffff);
        }
        FUN_3614a230();
        if (0 < (int)puVar1[6]) {
          puVar1[6] = -puVar1[6];
        }
        return (uint)(puVar1[5] == 0);
      }
      return 1;
    }
  }
  else {
    FUN_3614a230();
    if (param_1[4] != 0) goto LAB_3614a4ee;
LAB_3614a4bb:
    puVar1[8] = 0xffffffff;
  }
  return 0;
}

