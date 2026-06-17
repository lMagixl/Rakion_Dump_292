
int __cdecl FUN_3607a6f0(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0x8040:
  case 0x8045:
  case 0x8051:
  case 0x8058:
    return 0;
  case 0x8050:
  case 0x8057:
    if (7 < param_2) {
      param_2 = param_2 + -3;
    }
  }
  return param_2;
}

