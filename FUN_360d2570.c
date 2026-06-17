
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360d2570(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
  int iVar5;
  int *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  ulonglong uVar6;
  
  fVar1 = in_EAX[2];
  fVar2 = in_EAX[3];
  fVar3 = in_EAX[5];
  floor((double)(*in_EAX * (float)_DAT_36227cd8));
  uVar6 = FUN_361bfd6c();
  fVar4 = (float)_DAT_36227cd8;
  *unaff_ESI = (int)uVar6;
  floor((double)(fVar1 * fVar4));
  uVar6 = FUN_361bfd6c();
  fVar1 = (float)_DAT_36227cd8;
  *unaff_EDI = (int)uVar6;
  ceil((double)(fVar2 * fVar1));
  uVar6 = FUN_361bfd6c();
  fVar1 = (float)_DAT_36227cd8;
  *unaff_EBX = (int)uVar6;
  ceil((double)(fVar3 * fVar1));
  uVar6 = FUN_361bfd6c();
  *param_1 = (int)uVar6;
  iVar5 = *unaff_ESI;
  if (iVar5 < -32000) {
    iVar5 = -32000;
  }
  else if (32000 < iVar5) {
    iVar5 = 32000;
  }
  *unaff_ESI = iVar5;
  iVar5 = *unaff_EDI;
  if (iVar5 < -32000) {
    iVar5 = -32000;
  }
  else if (32000 < iVar5) {
    iVar5 = 32000;
  }
  *unaff_EDI = iVar5;
  iVar5 = *unaff_EBX;
  if (iVar5 < -32000) {
    iVar5 = -32000;
  }
  else if (32000 < iVar5) {
    iVar5 = 32000;
  }
  *unaff_EBX = iVar5;
  iVar5 = *param_1;
  if (iVar5 < -32000) {
    iVar5 = -32000;
  }
  else if (32000 < iVar5) {
    *param_1 = 32000;
    return;
  }
  *param_1 = iVar5;
  return;
}

