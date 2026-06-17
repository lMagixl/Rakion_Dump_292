
uint __cdecl
FUN_361fe400(int param_1,undefined4 param_2,undefined3 *param_3,uint param_4,uint param_5)

{
  if (*(short *)(*(int *)(param_1 + 4) + 0x34) == 4) {
    param_3 = (undefined3 *)CONCAT13(*(undefined1 *)((int)param_3 + 3),*param_3);
  }
  else {
    param_3 = (undefined3 *)CONCAT13(0xff,*param_3);
  }
  switch(param_2) {
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
    FUN_36201f90((int)&param_3,(int)&param_5,param_4,param_5);
    return param_5;
  case 0xe:
    FUN_36202220((int)&param_3,(int)&param_5,param_4,param_5);
    return param_5;
  case 0xf:
    FUN_36202080((int)&param_3,(int)&param_5,param_4,param_5);
    return param_5;
  case 0x11:
  case 0x12:
    param_5 = (uint)param_3;
    break;
  case 0x13:
    FUN_36202120((int)&param_3,(int)&param_5,param_4,param_5);
    return param_5;
  }
  return param_5;
}

