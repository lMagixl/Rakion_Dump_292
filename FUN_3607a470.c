
undefined4 __cdecl FUN_3607a470(int param_1)

{
  if (0x8050 < param_1) {
    switch(param_1) {
    case 0x8051:
      return 3;
    default:
      goto switchD_3607a4b2_caseD_8052;
    case 0x8056:
    case 0x8057:
      goto switchD_3607a4b2_caseD_8056;
    case 0x8058:
      return 4;
    }
  }
  if (0x804e < param_1) {
switchD_3607a4b2_caseD_8056:
    return 2;
  }
  if (param_1 < 0x190b) {
    if (param_1 == 0x190a) {
      return 2;
    }
    if (param_1 == 0x1907) {
      return 3;
    }
    if (param_1 == 0x1908) {
      return 4;
    }
  }
  else if (param_1 == 0x8045) {
    return 2;
  }
switchD_3607a4b2_caseD_8052:
  return 1;
}

