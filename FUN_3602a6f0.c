
void __fastcall FUN_3602a6f0(undefined4 *param_1)

{
  int in_EAX;
  
  if (param_1[1] != 0) {
    switch(*param_1) {
    case 1:
      FUN_36029a30();
      return;
    case 2:
      FUN_36029ad0(in_EAX);
      return;
    case 3:
      FUN_36029ea0();
      return;
    case 4:
      FUN_3602a110(in_EAX);
    }
  }
  return;
}

