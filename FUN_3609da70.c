
size_t __cdecl FUN_3609da70(void *param_1,uint param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 * param_3;
  lVar1 = ftell((FILE *)*param_4);
  uVar3 = param_4[2] - (lVar1 - param_4[1]);
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  if (uVar4 - uVar3 != 0 && (int)uVar3 <= (int)uVar4) {
    uVar4 = uVar3;
  }
  uVar4 = (uVar4 / param_2) * param_2;
  if ((int)uVar4 < 1) {
    return 0;
  }
  sVar2 = fread(param_1,param_2,uVar4 / param_2,(FILE *)*param_4);
  return sVar2;
}

