
void __fastcall
FUN_36177570(int param_1,undefined1 param_2,undefined4 *param_3,int param_4,int param_5)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  if (in_EAX == 0) {
    uVar1 = param_1 * unaff_ESI * 2;
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      param_3 = param_3 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_3 = param_2;
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    return;
  }
  FUN_361794f0(param_3,param_1,unaff_ESI,in_EAX,param_4,param_5,param_2);
  return;
}

