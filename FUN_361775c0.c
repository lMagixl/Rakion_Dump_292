
void __fastcall
FUN_361775c0(int param_1,undefined1 param_2,undefined4 *param_3,int param_4,int param_5)

{
  int in_EAX;
  uint uVar1;
  int unaff_ESI;
  
  if (in_EAX == 0) {
    for (uVar1 = (uint)(param_1 * unaff_ESI) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      param_3 = param_3 + 1;
    }
    for (uVar1 = param_1 * unaff_ESI & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_3 = param_2;
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    return;
  }
  FUN_361795b0(param_3,param_1,unaff_ESI,in_EAX,param_4,param_5,param_2);
  return;
}

