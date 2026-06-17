
void __fastcall FUN_361b4f40(int param_1,int param_2)

{
  undefined1 *in_EAX;
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = param_1 - (int)in_EAX;
    do {
      in_EAX[iVar1] = *in_EAX;
      in_EAX = in_EAX + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

