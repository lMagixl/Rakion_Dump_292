
int __cdecl FUN_3614bd30(int *param_1,uint *param_2,uint param_3)

{
  size_t sVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || ((char)param_1[0x17] != 'w')) {
    return -2;
  }
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  uVar2 = param_3;
  do {
    if (uVar2 == 0) {
LAB_3614bdd7:
      uVar2 = FUN_3614a050(param_1[0x13],param_2,param_3);
      param_1[0x13] = uVar2;
      return param_3 - param_1[1];
    }
    if (param_1[4] == 0) {
      param_1[3] = param_1[0x12];
      sVar1 = fwrite((void *)param_1[0x12],1,0x4000,(FILE *)param_1[0x10]);
      if (sVar1 != 0x4000) {
        param_1[0xe] = -1;
        goto LAB_3614bdd7;
      }
      param_1[4] = 0x4000;
    }
    param_1[0x19] = param_1[0x19] + param_1[1];
    param_1[0x1a] = param_1[0x1a] + param_1[4];
    uVar2 = FUN_3614a2a0(param_1,0);
    param_1[0x19] = param_1[0x19] - param_1[1];
    param_1[0xe] = uVar2;
    param_1[0x1a] = param_1[0x1a] - param_1[4];
    if (uVar2 != 0) goto LAB_3614bdd7;
    uVar2 = param_1[1];
  } while( true );
}

