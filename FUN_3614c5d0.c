
int __cdecl FUN_3614c5d0(int *param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *local_4;
  
  local_4 = (uint *)param_2;
  if ((param_1 == (int *)0x0) || ((char)param_1[0x17] != 'r')) {
    return -2;
  }
  iVar3 = param_1[0xe];
  if ((iVar3 == -3) || (iVar3 == -1)) {
    return -1;
  }
  if (iVar3 == 1) {
    return 0;
  }
  param_1[3] = (int)param_2;
  param_1[4] = param_3;
  if ((param_3 != 0) && (param_1[0x1b] != -1)) {
    *param_2 = (char)param_1[0x1b];
    param_2 = param_2 + 1;
    param_1[3] = param_1[3] + 1;
    param_1[4] = param_1[4] + -1;
    param_1[0x1b] = -1;
    param_1[0x1a] = param_1[0x1a] + 1;
    if (param_1[0x1c] != 0) {
      param_1[0xe] = 1;
      return 1;
    }
  }
  iVar3 = param_1[4];
  do {
    if (iVar3 == 0) {
LAB_3614c842:
      uVar4 = FUN_3614a050(param_1[0x13],local_4,param_1[3] - (int)local_4);
      param_1[0x13] = uVar4;
      return param_3 - param_1[4];
    }
    if (param_1[0x16] != 0) {
      uVar4 = param_1[1];
      if ((uint)param_1[4] < (uint)param_1[1]) {
        uVar4 = param_1[4];
      }
      if (uVar4 != 0) {
        puVar6 = (undefined4 *)*param_1;
        puVar7 = (undefined4 *)param_1[3];
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        param_2 = param_2 + uVar4;
        param_1[3] = (int)param_2;
        *param_1 = *param_1 + uVar4;
        param_1[4] = param_1[4] - uVar4;
        param_1[1] = param_1[1] - uVar4;
      }
      if (param_1[4] != 0) {
        sVar2 = fread(param_2,1,param_1[4],(FILE *)param_1[0x10]);
        param_1[4] = param_1[4] - sVar2;
      }
      iVar3 = param_3 - param_1[4];
      param_1[0x19] = param_1[0x19] + iVar3;
      param_1[0x1a] = param_1[0x1a] + iVar3;
      if (iVar3 == 0) {
        param_1[0xf] = 1;
      }
      return iVar3;
    }
    if ((param_1[1] == 0) && (param_1[0xf] == 0)) {
      piVar1 = _errno();
      *piVar1 = 0;
      sVar2 = fread((void *)param_1[0x11],1,0x4000,(FILE *)param_1[0x10]);
      param_1[1] = sVar2;
      if ((sVar2 == 0) && (param_1[0xf] = 1, (*(byte *)(param_1[0x10] + 0xc) & 0x20) != 0)) {
        param_1[0xe] = -1;
        goto LAB_3614c842;
      }
      *param_1 = param_1[0x11];
    }
    param_1[0x19] = param_1[0x19] + param_1[1];
    param_1[0x1a] = param_1[0x1a] + param_1[4];
    iVar3 = FUN_3614e150(param_1,0);
    param_1[0x19] = param_1[0x19] - param_1[1];
    param_1[0xe] = iVar3;
    param_1[0x1a] = param_1[0x1a] - param_1[4];
    if (iVar3 == 1) {
      uVar4 = FUN_3614a050(param_1[0x13],local_4,param_1[3] - (int)local_4);
      local_4 = (uint *)param_1[3];
      param_1[0x13] = uVar4;
      iVar3 = FUN_3614c0f0();
      if (iVar3 != param_1[0x13]) {
        param_1[0xe] = -3;
        goto LAB_3614c842;
      }
      FUN_3614c0f0();
      FUN_3614bad0();
      if (param_1[0xe] != 0) goto LAB_3614c842;
      FUN_3614ded0((int)param_1);
      uVar4 = FUN_3614a050(0,(uint *)0x0,0);
      param_1[0x13] = uVar4;
    }
    if ((param_1[0xe] != 0) || (param_1[0xf] != 0)) goto LAB_3614c842;
    iVar3 = param_1[4];
  } while( true );
}

